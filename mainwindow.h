#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include "systemTray.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Ui::MainWindow *ui;
	// Skins
	QMap<QString, QString> mapStyle;
	void initSkins();

// 托盘相关
private:
	SystemTray * myTray; //自定义系统托盘
private slots:
	void ShowWindow(); //处理还原操作
	void SystemTrayActivated(QSystemTrayIcon::ActivationReason reason); //处理点击托盘操作
};

#endif // MAINWINDOW_H
