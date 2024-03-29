#ifndef OSGDEMO_H
#define OSGDEMO_H

#include <QMainWindow>
#include "ui_osgdemo.h"
#include "OSGTool/widget3d.h"

class OSGDemo : public QMainWindow
{
	Q_OBJECT

public:
	OSGDemo(QWidget *parent = 0);
	~OSGDemo();

private slots:
	void slotAddModels();
	void slotDoubleClickedList(QListWidgetItem* item);

private:
	void initDockList();

private:
	Ui::OSGDemoClass ui;
	Widget3D* m_p3DWidget;
};

#endif // OSGDEMO_H
