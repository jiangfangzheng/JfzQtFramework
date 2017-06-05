#include "systemTray.h"
#include <QMessageBox>

SystemTray::SystemTray(QWidget *parent)
	: QSystemTrayIcon(parent)
{
	createAction();
	addAction();
}

SystemTray::~SystemTray()
{

}
void SystemTray::createAction()
{
	restoreWinAction = new QAction("还原",this);
	aboutUsAction =    new QAction("关于",this);
	updateAction =     new QAction("更新",this);
	quitAction =       new QAction("退出",this);

	myMenu = new QMenu();

	this->setIcon(QIcon(":/jfz.ico"));
	this->setToolTip("系统托盘演示程序");

	connect(restoreWinAction, SIGNAL(triggered()), this, SIGNAL(showWidget()));
	connect(aboutUsAction,SIGNAL(triggered()),this,SLOT(showAboutUs()));
	connect(updateAction,SIGNAL(triggered()),this,SLOT(showUpdate()));
	connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
	this->setContextMenu(myMenu);     //设置托盘上下文菜单
	this->show();
}

void SystemTray::addAction(){
	myMenu->addAction(restoreWinAction);
	myMenu->addAction(aboutUsAction);
	myMenu->addAction(updateAction);
	myMenu->addAction(quitAction);
}

void SystemTray::showAboutUs(){
	//显示关于我们的窗口，没有具体实现
	//当然也可以不用SOLT函数，而是像“还原“操作一样，发送信号出去，留给主窗口来处理
	QMessageBox::about(NULL, "About", "Jfz's QtFramework");
}

void SystemTray::showUpdate(){
	QMessageBox message(QMessageBox::NoIcon, "更新", "暂无更新。");
//	message.setIconPixmap(QPixmap("jfz.png"));
	message.exec();
}
