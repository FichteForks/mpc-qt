#ifndef QSCREENSAVER_MAC_H
#define QSCREENSAVER_MAC_H
#include "qabstractscreensaver.h"

class QScreenSaver : public QAbstractScreenSaver
{
    Q_OBJECT
public:
    QScreenSaver(QObject *parent = NULL);

    QSet<Ability> abilities();

public slots:
    void inhibitSaver(const QString &reason);
    void uninhibitSaver();
    void launchSaver();
    void lockScreen();
    void hibernateSystem();
    void suspendSystem();
    void shutdownSystem();
    void logOff();
};

#endif // QSCREENSAVER_MAC_H