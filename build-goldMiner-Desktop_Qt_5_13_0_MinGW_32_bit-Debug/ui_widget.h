/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <mywidget.h>
#include "drawline.h"

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QLabel *backGround;
    QLabel *bigGold1;
    QLabel *bigGold2;
    QLabel *luckBag1;
    QLabel *pig1;
    QLabel *pig2;
    QLabel *stone1;
    QLabel *pigWithDiamond;
    QLabel *diamond1;
    QLabel *smallGold1;
    QLabel *smallGold2;
    QLabel *smallGold3;
    QLabel *smallGold4;
    QLabel *stone2;
    QLabel *luckBag2;
    QLabel *Miner;
    QLabel *currentMoney;
    QLabel *showCurrentMoney;
    QLabel *goalMoney;
    QLabel *currentBomb;
    QLabel *bomb;
    QLabel *lastingtime;
    QLabel *remainingTime;
    QLabel *secondLevel;
    myWidget *youwangWidget;
    drawline *invisibleListWidget;
    QLabel *fail;
    QLabel *addNumber;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(1200, 800);
        widget->setStyleSheet(QString::fromUtf8(""));
        backGround = new QLabel(widget);
        backGround->setObjectName(QString::fromUtf8("backGround"));
        backGround->setGeometry(QRect(0, 150, 1200, 650));
        backGround->setStyleSheet(QString::fromUtf8("border-image: url(:/new/firstLevel/photo/playingBackground.png);"));
        bigGold1 = new QLabel(widget);
        bigGold1->setObjectName(QString::fromUtf8("bigGold1"));
        bigGold1->setGeometry(QRect(290, 420, 130, 130));
        bigGold1->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/bigGold.png);"));
        bigGold2 = new QLabel(widget);
        bigGold2->setObjectName(QString::fromUtf8("bigGold2"));
        bigGold2->setGeometry(QRect(950, 450, 130, 130));
        bigGold2->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/bigGold.png);"));
        luckBag1 = new QLabel(widget);
        luckBag1->setObjectName(QString::fromUtf8("luckBag1"));
        luckBag1->setGeometry(QRect(390, 580, 70, 90));
        luckBag1->setStyleSheet(QString::fromUtf8("border-image: url(:/luckyBag/photo/luckyBag.png);"));
        pig1 = new QLabel(widget);
        pig1->setObjectName(QString::fromUtf8("pig1"));
        pig1->setGeometry(QRect(360, 210, 61, 51));
        pig1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/pig.png);"));
        pig2 = new QLabel(widget);
        pig2->setObjectName(QString::fromUtf8("pig2"));
        pig2->setGeometry(QRect(930, 280, 61, 51));
        pig2->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/pig.png);"));
        stone1 = new QLabel(widget);
        stone1->setObjectName(QString::fromUtf8("stone1"));
        stone1->setGeometry(QRect(580, 430, 70, 70));
        stone1->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        pigWithDiamond = new QLabel(widget);
        pigWithDiamond->setObjectName(QString::fromUtf8("pigWithDiamond"));
        pigWithDiamond->setGeometry(QRect(290, 690, 61, 51));
        pigWithDiamond->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/daimondpig.png);"));
        diamond1 = new QLabel(widget);
        diamond1->setObjectName(QString::fromUtf8("diamond1"));
        diamond1->setGeometry(QRect(70, 540, 30, 30));
        diamond1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/daimond.png);"));
        smallGold1 = new QLabel(widget);
        smallGold1->setObjectName(QString::fromUtf8("smallGold1"));
        smallGold1->setGeometry(QRect(460, 350, 70, 70));
        smallGold1->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        smallGold2 = new QLabel(widget);
        smallGold2->setObjectName(QString::fromUtf8("smallGold2"));
        smallGold2->setGeometry(QRect(550, 570, 70, 70));
        smallGold2->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        smallGold3 = new QLabel(widget);
        smallGold3->setObjectName(QString::fromUtf8("smallGold3"));
        smallGold3->setGeometry(QRect(740, 380, 70, 70));
        smallGold3->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        smallGold4 = new QLabel(widget);
        smallGold4->setObjectName(QString::fromUtf8("smallGold4"));
        smallGold4->setGeometry(QRect(120, 410, 70, 70));
        smallGold4->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        stone2 = new QLabel(widget);
        stone2->setObjectName(QString::fromUtf8("stone2"));
        stone2->setGeometry(QRect(210, 320, 70, 70));
        stone2->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        luckBag2 = new QLabel(widget);
        luckBag2->setObjectName(QString::fromUtf8("luckBag2"));
        luckBag2->setGeometry(QRect(790, 610, 70, 90));
        luckBag2->setStyleSheet(QString::fromUtf8("border-image: url(:/luckyBag/photo/luckyBag.png);"));
        Miner = new QLabel(widget);
        Miner->setObjectName(QString::fromUtf8("Miner"));
        Miner->setGeometry(QRect(480, 0, 250, 150));
        Miner->setStyleSheet(QString::fromUtf8("border-image: url(:/oldMan/photo/oldMan.png);"));
        currentMoney = new QLabel(widget);
        currentMoney->setObjectName(QString::fromUtf8("currentMoney"));
        currentMoney->setGeometry(QRect(10, 10, 150, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        currentMoney->setFont(font);
        currentMoney->setAlignment(Qt::AlignCenter);
        showCurrentMoney = new QLabel(widget);
        showCurrentMoney->setObjectName(QString::fromUtf8("showCurrentMoney"));
        showCurrentMoney->setGeometry(QRect(160, 10, 121, 50));
        QFont font1;
        font1.setPointSize(20);
        showCurrentMoney->setFont(font1);
        showCurrentMoney->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        goalMoney = new QLabel(widget);
        goalMoney->setObjectName(QString::fromUtf8("goalMoney"));
        goalMoney->setGeometry(QRect(10, 70, 250, 50));
        QFont font2;
        font2.setPointSize(19);
        goalMoney->setFont(font2);
        goalMoney->setAlignment(Qt::AlignCenter);
        currentBomb = new QLabel(widget);
        currentBomb->setObjectName(QString::fromUtf8("currentBomb"));
        currentBomb->setGeometry(QRect(660, 30, 121, 50));
        currentBomb->setFont(font);
        currentBomb->setAlignment(Qt::AlignCenter);
        bomb = new QLabel(widget);
        bomb->setObjectName(QString::fromUtf8("bomb"));
        bomb->setGeometry(QRect(770, 30, 60, 50));
        bomb->setFont(font1);
        bomb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lastingtime = new QLabel(widget);
        lastingtime->setObjectName(QString::fromUtf8("lastingtime"));
        lastingtime->setGeometry(QRect(970, 20, 150, 50));
        lastingtime->setFont(font);
        lastingtime->setAlignment(Qt::AlignCenter);
        remainingTime = new QLabel(widget);
        remainingTime->setObjectName(QString::fromUtf8("remainingTime"));
        remainingTime->setGeometry(QRect(1110, 20, 60, 50));
        remainingTime->setFont(font1);
        remainingTime->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        secondLevel = new QLabel(widget);
        secondLevel->setObjectName(QString::fromUtf8("secondLevel"));
        secondLevel->setGeometry(QRect(1030, 70, 81, 41));
        QFont font3;
        font3.setPointSize(16);
        secondLevel->setFont(font3);
        youwangWidget = new myWidget(widget);
        youwangWidget->setObjectName(QString::fromUtf8("youwangWidget"));
        youwangWidget->setGeometry(QRect(507, 108, 146, 91));
        invisibleListWidget = new drawline(widget);
        invisibleListWidget->setObjectName(QString::fromUtf8("invisibleListWidget"));
        invisibleListWidget->setGeometry(QRect(0, 100, 1200, 700));
        invisibleListWidget->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        fail = new QLabel(widget);
        fail->setObjectName(QString::fromUtf8("fail"));
        fail->setGeometry(QRect(400, 120, 72, 15));
        addNumber = new QLabel(widget);
        addNumber->setObjectName(QString::fromUtf8("addNumber"));
        addNumber->setGeometry(QRect(340, 40, 161, 61));
        addNumber->setFont(font1);
        addNumber->setStyleSheet(QString::fromUtf8("color: rgb(55, 158, 54);"));
        backGround->raise();
        bigGold1->raise();
        bigGold2->raise();
        luckBag1->raise();
        pig1->raise();
        pig2->raise();
        stone1->raise();
        pigWithDiamond->raise();
        diamond1->raise();
        smallGold1->raise();
        smallGold2->raise();
        smallGold3->raise();
        smallGold4->raise();
        stone2->raise();
        luckBag2->raise();
        Miner->raise();
        currentMoney->raise();
        showCurrentMoney->raise();
        goalMoney->raise();
        currentBomb->raise();
        bomb->raise();
        lastingtime->raise();
        remainingTime->raise();
        secondLevel->raise();
        invisibleListWidget->raise();
        youwangWidget->raise();
        fail->raise();
        addNumber->raise();

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "Widget", nullptr));
        backGround->setText(QString());
        bigGold1->setText(QString());
        bigGold2->setText(QString());
        luckBag1->setText(QString());
        pig1->setText(QString());
        pig2->setText(QString());
        stone1->setText(QString());
        pigWithDiamond->setText(QString());
        diamond1->setText(QString());
        smallGold1->setText(QString());
        smallGold2->setText(QString());
        smallGold3->setText(QString());
        smallGold4->setText(QString());
        stone2->setText(QString());
        luckBag2->setText(QString());
        Miner->setText(QString());
        currentMoney->setText(QCoreApplication::translate("widget", "\345\275\223\345\211\215\351\207\221\351\242\235\357\274\232", nullptr));
        showCurrentMoney->setText(QCoreApplication::translate("widget", "$0", nullptr));
        goalMoney->setText(QCoreApplication::translate("widget", "\347\233\256\346\240\207\351\207\221\351\242\235\357\274\232$1150", nullptr));
        currentBomb->setText(QCoreApplication::translate("widget", "\347\202\270\345\274\271\346\225\260\357\274\232", nullptr));
        bomb->setText(QCoreApplication::translate("widget", "0", nullptr));
        lastingtime->setText(QCoreApplication::translate("widget", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", nullptr));
        remainingTime->setText(QCoreApplication::translate("widget", "60", nullptr));
        secondLevel->setText(QCoreApplication::translate("widget", "\347\254\254\344\270\211\345\205\263", nullptr));
        fail->setText(QString());
        addNumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
