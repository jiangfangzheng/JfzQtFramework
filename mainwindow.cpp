#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "skins/skins.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	// Skin
	this->initSkins();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::initSkins()
{
	// 对应的主题样式
	mapStyle["黑色"]   = QString(":/qss/black.css");
	mapStyle["灰黑色"] = QString(":/qss/brown.css");
	mapStyle["灰色"]   = QString(":/qss/gray.css");
	mapStyle["浅灰色"] = QString(":/qss/lightgray.css");
	mapStyle["深灰色"] = QString(":/qss/darkgray.css");
	mapStyle["银色"]   = QString(":/qss/silvery.css");
	mapStyle["淡蓝色"] = QString(":/qss/blue.css");
	mapStyle["蓝色"]   = QString(":/qss/dev.css");
	// 下拉框选择
	QStringList qssName;
	qssName << "黑色" << "灰黑色" << "灰色" << "浅灰色" << "深灰色" << "银色" << "淡蓝色" << "蓝色";
//	ui->cboxSkins->addItems(qssName);
//	ui->cboxSkins->setCurrentIndex(5);// 个人最喜欢银，默认
	// 直接赋值
	QString qssFile = mapStyle["蓝色"];
	Skins::setStyle(qssFile);
}
