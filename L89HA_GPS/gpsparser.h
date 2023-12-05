#ifndef GPSPARSER_H
#define GPSPARSER_H

#include "mainwindow.h"

/* GPS Parser class to receive data from the mainwindow class
 * and parse the raw data to gather the essenstial GPS signal
 */

class GPSParser : public QObject
{
    Q_OBJECT

public:
    explicit GPSParser(MainWindow *mainwindow);

    double latitude, longitude;
    int hour, minuites, seconds;

    /* enum to store the gps fix data */
    typedef enum {
        GPS_NO_LOCK,
        GPS_LOCK,
        GPS_DGPS_LOCK,
    } GPS_lock_status;


private slots:
    void processData(const QString& data);

signals:
    void GPSDataProcessed();
};

#endif // GPSPARSER_H
