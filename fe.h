//===========================================
//  qtfontbrowser source code
//  Copyright (c) 2018, JT (q5sys)
//  Available under the MIT license
//  See the LICENSE file for full details
//===========================================

#ifndef FE_H
#define FE_H
#include <QString>
#include <QWidget>

namespace Ui {	class fe;
}

class fe : public QWidget{
   	Q_OBJECT

private:

public:
	fe(QString text, QFont font, QWidget *parent = 0);
	~fe();

	//Return all the items which are currently selected
	QString exampleTextLabelText, fontNameLabelText;
	QFont fontChoice;

public slots:

private slots:
private:
	Ui::fe*ui;
	//Browser connections
	void clearItems();
	void displayFont();

protected:

signals:

};
#endif // FE_H
