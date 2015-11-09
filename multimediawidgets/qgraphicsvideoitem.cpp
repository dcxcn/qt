#include "qgraphicsvideoitem.h"
#include <QString>
#include <QPointF>
#include <QWidget>
#include <QStyleOptionGraphicsItem>
#include <QUrl>
#include <QSizeF>
#include <QStyle>
#include <QStyleOption>
#include <QModelIndex>
#include <QPoint>
#include <QSize>
#include <QVariant>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsVideoItem>
#include "_cgo_export.h"

class MyQGraphicsVideoItem: public QGraphicsVideoItem {
public:
};

void* QGraphicsVideoItem_NewQGraphicsVideoItem(void* parent){
	return new QGraphicsVideoItem(static_cast<QGraphicsItem*>(parent));
}

int QGraphicsVideoItem_AspectRatioMode(void* ptr){
	return static_cast<QGraphicsVideoItem*>(ptr)->aspectRatioMode();
}

void* QGraphicsVideoItem_MediaObject(void* ptr){
	return static_cast<QGraphicsVideoItem*>(ptr)->mediaObject();
}

void QGraphicsVideoItem_Paint(void* ptr, void* painter, void* option, void* widget){
	static_cast<QGraphicsVideoItem*>(ptr)->paint(static_cast<QPainter*>(painter), static_cast<QStyleOptionGraphicsItem*>(option), static_cast<QWidget*>(widget));
}

void QGraphicsVideoItem_SetAspectRatioMode(void* ptr, int mode){
	static_cast<QGraphicsVideoItem*>(ptr)->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QGraphicsVideoItem_SetOffset(void* ptr, void* offset){
	static_cast<QGraphicsVideoItem*>(ptr)->setOffset(*static_cast<QPointF*>(offset));
}

void QGraphicsVideoItem_SetSize(void* ptr, void* size){
	static_cast<QGraphicsVideoItem*>(ptr)->setSize(*static_cast<QSizeF*>(size));
}

void QGraphicsVideoItem_DestroyQGraphicsVideoItem(void* ptr){
	static_cast<QGraphicsVideoItem*>(ptr)->~QGraphicsVideoItem();
}
