//===========================================
//  qtfontbrowser source code
//  Copyright (c) 2018, JT (q5sys)
//  Available under the MIT license
//  See the LICENSE file for full details
//===========================================
#include "fe.h"
#include "ui_fe.h"

fe::fe(QString text, QFont font, QWidget *parent) : QWidget(parent), ui(new Ui::fe) {
  exampleTextLabelText = text;
  fontChoice = font;
  //Setup the Widget/UI
  ui->setupUi(this);
  displayFont();
}

fe::~fe(){
  //delete ui;
}

// =================
//    PRIVATE SLOTS
// =================

void fe::clearItems(){
  ui->exampleTextLabel->clear();
  ui->fontNameLabel->clear();
}

void fe::displayFont(){
    ui->exampleTextLabel->setFont(fontChoice);
    ui->exampleTextLabel->setText(exampleTextLabelText);
    fontNameLabelText = fontChoice.family();
    ui->fontNameLabel->setText(fontNameLabelText);
}
