//===========================================
//  qtfontbrowser source code
//  Copyright (c) 2018, JT (q5sys)
//  Available under the MIT license
//  See the LICENSE file for full details
//===========================================

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFontDatabase>
#include "fe.h"

namespace Ui { class MainWindow;
}

class MainWindow : public QMainWindow{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	QString userText;

private slots:
	void on_pushButton_clicked();

private:
	Ui::MainWindow *ui;
	void doTheThing( QString userText);
	QFontDatabase *FDB;
	void clearLayout();
};

#endif // MAINWINDOW_H
