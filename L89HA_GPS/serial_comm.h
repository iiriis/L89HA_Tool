#ifndef SERIAL_COMM_H
#define SERIAL_COMM_H


typedef enum {
    COMM_SUCCESS = 0,
    COMM_ERROR = 1,
    COMM_INIT_ERROR = 2,
    COMM_READ_ERROR = 3,
    COMM_WRITE_ERROR = 4,
} comm_status_t;



/* Setup and Initialize the Serial Communication
 * Parameters
 * portName: the name of the Serial Port in the device
 *
 * Returns
 * COMM_SUCCESS: Upon establishing proper Serial communication
 * COMM_ERROR: Upon unsuccessful opening of Serial Port
 *
 */
comm_status_t init_Serial_Port(QString portName);

/* Blocking function that writes a buffer to the Serial Port
 *
 * Parameters
 * pData: the buffer
 * size: the size of buffer
 *
 * Returns
 * COMM_SUCCESS: Upon successful write
 * COMM_WRITE_ERROR: Upon error during write/timeout
 *
 */
comm_status_t write_Serial_Port(uint8_t* pData, uint8_t size);

/* Blocking function that reads data to a buffer from the Serial Port
 *
 * Parameters
 * pData: the buffer to store
 * size: number of bytes to read from serialport
 *
 * Returns
 * COMM_SUCCESS: Upon successful read
 * COMM_READ_ERROR: Upon  error during read/timeout
 *
 */
comm_status_t read_Serial_Port(uint8_t* pData, uint8_t size);



#endif // SERIAL_COMM_H
