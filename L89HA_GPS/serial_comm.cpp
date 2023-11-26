#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QThread>

#include <serial_comm.h>


#define SERIAL_PORT_WRITE_TIMEOUT 1000
#define SERIAL_PORT_READ_TIMEOUT 1000


/* The Serial Port instance*/
QSerialPort serialPort;

comm_status_t init_Serial_Port(QString portName)
{
    /* setup and initialise the Serial port */
    serialPort.setPortName(portName);
    serialPort.setBaudRate(QSerialPort::Baud115200);
    serialPort.setDataBits(QSerialPort::Data8);
    serialPort.setParity(QSerialPort::NoParity);
    serialPort.setStopBits(QSerialPort::OneStop);
    serialPort.setFlowControl(QSerialPort::NoFlowControl);

    /* open the serial port in read and write mode */
    if (serialPort.open(QIODevice::ReadWrite)) {
        qDebug() << "Serial port opened successfully";
        return COMM_SUCCESS;
    }

    qDebug() << "Failed to open serial port";
    return COMM_INIT_ERROR;
}

comm_status_t write_Serial_Port(uint8_t* pData, uint8_t size)
{

    for(int i=0; i<size; i++)
    {

        /* write one byte at a time to the serial port */
        serialPort.write((const char*)&pData[i], 1);

        /* block the flow until the data bytes are written or timeout happened */
        if(! serialPort.waitForBytesWritten(SERIAL_PORT_WRITE_TIMEOUT))
            return COMM_WRITE_ERROR;

        QThread::msleep(1);
    }

    return COMM_SUCCESS;
}


comm_status_t read_Serial_Port(uint8_t* pData, uint8_t size)
{

    /* block the flow until the data arrived or timeout happened */
    if (! serialPort.waitForReadyRead(SERIAL_PORT_WRITE_TIMEOUT))
        return COMM_READ_ERROR;

    /* read from the serial port and check the number of bytes read equals size */
    if ( serialPort.read((char *)pData, size) != size)
        return COMM_READ_ERROR;

    return COMM_SUCCESS;
}
