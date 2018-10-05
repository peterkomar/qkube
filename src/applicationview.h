#ifndef APPLICATIONVIEW_H
#define APPLICATIONVIEW_H

#include <QObject>
#include <QTreeWidget>

class ApplicationView : public QTreeWidget
{
    Q_OBJECT
public:
    explicit ApplicationView(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // APPLICATIONVIEW_H
