#ifndef SKINS_H
#define SKINS_H

#include <QtCore>

class Skins: public QObject
{
public:
	//设置指定样式
	static void setStyle(const QString &qssFile) {
		QFile file(qssFile);
		if (file.open(QFile::ReadOnly)) {
			QString qss = QLatin1String(file.readAll());
			qApp->setStyleSheet(qss);
			QString PaletteColor = qss.mid(20, 7);
			qApp->setPalette(QPalette(QColor(PaletteColor)));
			file.close();
		}
	}
};

#endif // SKINS_H
