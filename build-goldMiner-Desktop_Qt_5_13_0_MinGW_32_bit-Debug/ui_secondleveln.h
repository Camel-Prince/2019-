/********************************************************************************
** Form generated from reading UI file 'secondleveln.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDLEVELN_H
#define UI_SECONDLEVELN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <mywidget.h>
#include "drawline.h"

QT_BEGIN_NAMESPACE

class Ui_secondLeveln
{
public:
    QLabel *background;
    QLabel *Miner;
    QLabel *bigGold;
    QLabel *stone1;
    QLabel *diamond1;
    QLabel *diamond2;
    QLabel *bone1;
    QLabel *stone2;
    QLabel *stone3;
    QLabel *stone4;
    QLabel *stone5;
    QLabel *stone6;
    QLabel *stone7;
    QLabel *luckBag1;
    QLabel *bone2;
    QLabel *smallGold2;
    QLabel *smallGold1;
    QLabel *secondLevel;
    QLabel *currentMoney;
    QLabel *showCurrentMoney;
    QLabel *goalMoney;
    QLabel *currentBomb;
    QLabel *bomb;
    QLabel *lastingtime;
    QLabel *remainingTime;
    myWidget *youwangWidget;
    drawline *invisibleListWidget;
    QLabel *fail;
    QLabel *addNumber;
    QLabel *pig1;

    void setupUi(QWidget *secondLeveln)
    {
        if (secondLeveln->objectName().isEmpty())
            secondLeveln->setObjectName(QString::fromUtf8("secondLeveln"));
        secondLeveln->resize(1200, 800);
        background = new QLabel(secondLeveln);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 150, 1200, 650));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/new/firstLevel/photo/background2.png);"));
        Miner = new QLabel(secondLeveln);
        Miner->setObjectName(QString::fromUtf8("Miner"));
        Miner->setGeometry(QRect(480, 0, 250, 150));
        Miner->setStyleSheet(QString::fromUtf8("border-image: url(:/oldMan/photo/oldMan.png);"));
        bigGold = new QLabel(secondLeveln);
        bigGold->setObjectName(QString::fromUtf8("bigGold"));
        bigGold->setGeometry(QRect(50, 470, 140, 140));
        bigGold->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/biggold.png);"));
        stone1 = new QLabel(secondLeveln);
        stone1->setObjectName(QString::fromUtf8("stone1"));
        stone1->setGeometry(QRect(100, 360, 81, 71));
        stone1->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        diamond1 = new QLabel(secondLeveln);
        diamond1->setObjectName(QString::fromUtf8("diamond1"));
        diamond1->setGeometry(QRect(810, 460, 30, 30));
        diamond1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/daimond.png);"));
        diamond2 = new QLabel(secondLeveln);
        diamond2->setObjectName(QString::fromUtf8("diamond2"));
        diamond2->setGeometry(QRect(410, 590, 30, 30));
        diamond2->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/daimond.png);"));
        bone1 = new QLabel(secondLeveln);
        bone1->setObjectName(QString::fromUtf8("bone1"));
        bone1->setGeometry(QRect(560, 490, 50, 50));
        bone1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/bone.png);"));
        stone2 = new QLabel(secondLeveln);
        stone2->setObjectName(QString::fromUtf8("stone2"));
        stone2->setGeometry(QRect(330, 500, 50, 50));
        stone2->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        stone3 = new QLabel(secondLeveln);
        stone3->setObjectName(QString::fromUtf8("stone3"));
        stone3->setGeometry(QRect(440, 460, 50, 50));
        stone3->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        stone4 = new QLabel(secondLeveln);
        stone4->setObjectName(QString::fromUtf8("stone4"));
        stone4->setGeometry(QRect(270, 240, 50, 50));
        stone4->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        stone5 = new QLabel(secondLeveln);
        stone5->setObjectName(QString::fromUtf8("stone5"));
        stone5->setGeometry(QRect(730, 330, 50, 50));
        stone5->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        stone6 = new QLabel(secondLeveln);
        stone6->setObjectName(QString::fromUtf8("stone6"));
        stone6->setGeometry(QRect(940, 510, 81, 71));
        stone6->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        stone7 = new QLabel(secondLeveln);
        stone7->setObjectName(QString::fromUtf8("stone7"));
        stone7->setGeometry(QRect(660, 410, 81, 71));
        stone7->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        luckBag1 = new QLabel(secondLeveln);
        luckBag1->setObjectName(QString::fromUtf8("luckBag1"));
        luckBag1->setGeometry(QRect(520, 559, 70, 91));
        luckBag1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/secretpacket.png);"));
        bone2 = new QLabel(secondLeveln);
        bone2->setObjectName(QString::fromUtf8("bone2"));
        bone2->setGeometry(QRect(810, 400, 50, 50));
        bone2->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/bone.png);"));
        smallGold2 = new QLabel(secondLeveln);
        smallGold2->setObjectName(QString::fromUtf8("smallGold2"));
        smallGold2->setGeometry(QRect(730, 520, 90, 90));
        smallGold2->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        smallGold1 = new QLabel(secondLeveln);
        smallGold1->setObjectName(QString::fromUtf8("smallGold1"));
        smallGold1->setGeometry(QRect(340, 390, 90, 90));
        smallGold1->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        secondLevel = new QLabel(secondLeveln);
        secondLevel->setObjectName(QString::fromUtf8("secondLevel"));
        secondLevel->setGeometry(QRect(1000, 60, 81, 41));
        QFont font;
        font.setPointSize(16);
        secondLevel->setFont(font);
        currentMoney = new QLabel(secondLeveln);
        currentMoney->setObjectName(QString::fromUtf8("currentMoney"));
        currentMoney->setGeometry(QRect(10, 10, 150, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
        currentMoney->setFont(font1);
        currentMoney->setAlignment(Qt::AlignCenter);
        showCurrentMoney = new QLabel(secondLeveln);
        showCurrentMoney->setObjectName(QString::fromUtf8("showCurrentMoney"));
        showCurrentMoney->setGeometry(QRect(160, 10, 121, 50));
        QFont font2;
        font2.setPointSize(20);
        showCurrentMoney->setFont(font2);
        showCurrentMoney->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        goalMoney = new QLabel(secondLeveln);
        goalMoney->setObjectName(QString::fromUtf8("goalMoney"));
        goalMoney->setGeometry(QRect(0, 60, 250, 50));
        QFont font3;
        font3.setPointSize(19);
        goalMoney->setFont(font3);
        goalMoney->setAlignment(Qt::AlignCenter);
        currentBomb = new QLabel(secondLeveln);
        currentBomb->setObjectName(QString::fromUtf8("currentBomb"));
        currentBomb->setGeometry(QRect(650, 20, 121, 50));
        currentBomb->setFont(font1);
        currentBomb->setAlignment(Qt::AlignCenter);
        bomb = new QLabel(secondLeveln);
        bomb->setObjectName(QString::fromUtf8("bomb"));
        bomb->setGeometry(QRect(760, 20, 60, 50));
        bomb->setFont(font2);
        bomb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lastingtime = new QLabel(secondLeveln);
        lastingtime->setObjectName(QString::fromUtf8("lastingtime"));
        lastingtime->setGeometry(QRect(960, 10, 150, 50));
        lastingtime->setFont(font1);
        lastingtime->setAlignment(Qt::AlignCenter);
        remainingTime = new QLabel(secondLeveln);
        remainingTime->setObjectName(QString::fromUtf8("remainingTime"));
        remainingTime->setGeometry(QRect(1100, 10, 60, 50));
        remainingTime->setFont(font2);
        remainingTime->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        youwangWidget = new myWidget(secondLeveln);
        youwangWidget->setObjectName(QString::fromUtf8("youwangWidget"));
        youwangWidget->setGeometry(QRect(507, 108, 146, 91));
        invisibleListWidget = new drawline(secondLeveln);
        invisibleListWidget->setObjectName(QString::fromUtf8("invisibleListWidget"));
        invisibleListWidget->setGeometry(QRect(0, 100, 1200, 700));
        invisibleListWidget->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        fail = new QLabel(secondLeveln);
        fail->setObjectName(QString::fromUtf8("fail"));
        fail->setGeometry(QRect(360, 50, 72, 15));
        addNumber = new QLabel(secondLeveln);
        addNumber->setObjectName(QString::fromUtf8("addNumber"));
        addNumber->setGeometry(QRect(340, 30, 161, 61));
        addNumber->setFont(font2);
        addNumber->setStyleSheet(QString::fromUtf8("color: rgb(55, 158, 54);"));
        pig1 = new QLabel(secondLeveln);
        pig1->setObjectName(QString::fromUtf8("pig1"));
        pig1->setGeometry(QRect(550, 220, 61, 51));
        pig1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/pig.png);"));

        retranslateUi(secondLeveln);

        QMetaObject::connectSlotsByName(secondLeveln);
    } // setupUi

    void retranslateUi(QWidget *secondLeveln)
    {
        secondLeveln->setWindowTitle(QCoreApplication::translate("secondLeveln", "secondLeveln", nullptr));
        background->setText(QString());
        Miner->setText(QString());
        bigGold->setText(QString());
        stone1->setText(QString());
        diamond1->setText(QString());
        diamond2->setText(QString());
        bone1->setText(QString());
        stone2->setText(QString());
        stone3->setText(QString());
        stone4->setText(QString());
        stone5->setText(QString());
        stone6->setText(QString());
        stone7->setText(QString());
        luckBag1->setText(QString());
        bone2->setText(QString());
        smallGold2->setText(QString());
        smallGold1->setText(QString());
        secondLevel->setText(QCoreApplication::translate("secondLeveln", "\347\254\254\344\272\214\345\205\263", nullptr));
        currentMoney->setText(QCoreApplication::translate("secondLeveln", "\345\275\223\345\211\215\351\207\221\351\242\235\357\274\232", nullptr));
        showCurrentMoney->setText(QCoreApplication::translate("secondLeveln", "$0", nullptr));
        goalMoney->setText(QCoreApplication::translate("secondLeveln", "\347\233\256\346\240\207\351\207\221\351\242\235\357\274\232$1150", nullptr));
        currentBomb->setText(QCoreApplication::translate("secondLeveln", "\347\202\270\345\274\271\346\225\260\357\274\232", nullptr));
        bomb->setText(QCoreApplication::translate("secondLeveln", "0", nullptr));
        lastingtime->setText(QCoreApplication::translate("secondLeveln", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", nullptr));
        remainingTime->setText(QCoreApplication::translate("secondLeveln", "60", nullptr));
        fail->setText(QString());
        addNumber->setText(QString());
        pig1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class secondLeveln: public Ui_secondLeveln {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDLEVELN_H
