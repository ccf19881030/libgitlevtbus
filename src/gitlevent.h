#ifndef GITLEVENT_H
#define GITLEVENT_H
#include <QString>
#include <QObject>
#include <QMetaType>
#include "gitldef.h"
#include "gitlevtdata.h"

class GitlModual;

class GitlEvent
{
public:
    GitlEvent( const QString& strEvtName );
    GitlEvent();

    ADD_CLASS_FIELD(QString, strEvtName, getEvtName, setEvtName)    ///< event name
    ADD_CLASS_FIELD_NOSETTER(GitlEvtData, cEvtData, getEvtData)     ///< additional event data
};


#endif // GITLEVENT_H
