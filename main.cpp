//===========================================
//  qtfontbrowser source code
//  Copyright (c) 2018, JT (q5sys)
//  Available under the MIT license
//  See the LICENSE file for full details
//===========================================


#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
