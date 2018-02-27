//===========================================
//  qtfontbrowser source code
//  Copyright (c) 2018, JT (q5sys)
//  Available under the MIT license
//  See the LICENSE file for full details
//===========================================

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fe.h>
#include <QFontDatabase>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  FDB = new QFontDatabase();
}

MainWindow::~MainWindow(){
  delete ui;
}

void MainWindow::doTheThing(QString userText){
  clearLayout();
  // Get list of fontfamiles on system
  QStringList fontFamilyList = FDB->families(QFontDatabase::Any); // latin only fonts
  qDebug() << "Font Families:" << fontFamilyList;
  for(int i = 0; i < fontFamilyList.length(); i++){
      // Create example ui widget element
      fe *nfe = new fe(userText, QFont(fontFamilyList[i]), ui->scrollAreaWidgetContents);
      ui->scrollAreaWidgetContents->layout()->addWidget(nfe);
  }
}

void MainWindow::on_pushButton_clicked(){
 doTheThing(ui->userLineEdit->text());
}

void MainWindow::clearLayout(){
  QList<fe*> children = ui->scrollAreaWidgetContents->findChildren<fe*>();
  for(int i=0; i<children.length(); i++){ children[i]->deleteLater(); }
}
