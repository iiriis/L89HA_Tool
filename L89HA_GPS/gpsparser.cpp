#include "gpsparser.h"

GPSParser::GPSParser(MainWindow *mainwindow)
{
    /* connect the dataReceived signal to processData slot for the processing */
    connect(mainwindow, &MainWindow::dataReceived, this, &GPSParser::processData);

}


void GPSParser::processData(const QString &data)
{
    /* String buffer to store the raw chars */
    static QString raw_data = 0;

    /* look for the '$' character denoting start of NMEA statements */
    int start_idx = data.indexOf('$');

    /* check if '$' does not exists then append the raw string to parse buffer */
    if(start_idx == -1)
        raw_data+=data;

    /* else slice and append the characters till '$' and process it */
    else {
        raw_data.append(data.sliced(0, start_idx));
        qDebug() << raw_data;
        /* initialise the raw_data with remaining chars after '$' */
        raw_data = data.sliced(start_idx);
    }

}

//void GPSParser::processGPSLine(const QString &data){

//    if(data.indexOf("MC") != -1){

//    }

//}
