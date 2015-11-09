#include "qgenericpluginfactory.h"
#include <QUrl>
#include <QModelIndex>
#include <QGenericPlugin>
#include <QString>
#include <QVariant>
#include <QGenericPluginFactory>
#include "_cgo_export.h"

class MyQGenericPluginFactory: public QGenericPluginFactory {
public:
};

void* QGenericPluginFactory_QGenericPluginFactory_Create(char* key, char* specification){
	return QGenericPluginFactory::create(QString(key), QString(specification));
}

char* QGenericPluginFactory_QGenericPluginFactory_Keys(){
	return QGenericPluginFactory::keys().join("|").toUtf8().data();
}
