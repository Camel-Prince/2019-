/********************************************************************************
** Form generated from reading UI file 'firstlevel.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTLEVEL_H
#define UI_FIRSTLEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <mywidget.h>
#include "drawline.h"

QT_BEGIN_NAMESPACE

class Ui_firstLevel
{
public:
    QLabel *oldMan;
    QLabel *firstMap;
    QLabel *currentMoney;
    QLabel *goalMoney;
    QLabel *lastingtime;
    QLabel *firstLevel_2;
    drawline *invisibleListWidget;
    myWidget *youwangWidget;
    QLabel *bigGold;
    QLabel *showCurrentMoney;
    QLabel *remainingTime;
    QLabel *addNumber;
    QLabel *fail;
    QLabel *smallGold1;
    QLabel *smallGold2;
    QLabel *bigGold2;
    QLabel *stone1;
    QLabel *stone2;
    QLabel *smallGold3;
    QLabel *stone3;
    QLabel *luckBag1;
    QLabel *currentBomb;
    QLabel *bomb;

    void setupUi(QWidget *firstLevel)
    {
        if (firstLevel->objectName().isEmpty())
            firstLevel->setObjectName(QString::fromUtf8("firstLevel"));
        firstLevel->resize(1200, 800);
        oldMan = new QLabel(firstLevel);
        oldMan->setObjectName(QString::fromUtf8("oldMan"));
        oldMan->setGeometry(QRect(480, 0, 250, 150));
        oldMan->setStyleSheet(QString::fromUtf8("border-image: url(:/oldMan/photo/oldMan.png);"));
        firstMap = new QLabel(firstLevel);
        firstMap->setObjectName(QString::fromUtf8("firstMap"));
        firstMap->setGeometry(QRect(0, 150, 1200, 650));
        firstMap->setStyleSheet(QString::fromUtf8("border-image: url(:/new/firstLevel/photo/playingBackground.png);"));
        currentMoney = new QLabel(firstLevel);
        currentMoney->setObjectName(QString::fromUtf8("currentMoney"));
        currentMoney->setGeometry(QRect(10, 10, 150, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        currentMoney->setFont(font);
        currentMoney->setAlignment(Qt::AlignCenter);
        goalMoney = new QLabel(firstLevel);
        goalMoney->setObjectName(QString::fromUtf8("goalMoney"));
        goalMoney->setGeometry(QRect(0, 80, 250, 50));
        QFont font1;
        font1.setPointSize(19);
        goalMoney->setFont(font1);
        goalMoney->setAlignment(Qt::AlignCenter);
        lastingtime = new QLabel(firstLevel);
        lastingtime->setObjectName(QString::fromUtf8("lastingtime"));
        lastingtime->setGeometry(QRect(950, 20, 150, 50));
        lastingtime->setFont(font);
        lastingtime->setAlignment(Qt::AlignCenter);
        firstLevel_2 = new QLabel(firstLevel);
        firstLevel_2->setObjectName(QString::fromUtf8("firstLevel_2"));
        firstLevel_2->setGeometry(QRect(950, 90, 250, 50));
        firstLevel_2->setFont(font1);
        firstLevel_2->setAlignment(Qt::AlignCenter);
        invisibleListWidget = new drawline(firstLevel);
        invisibleListWidget->setObjectName(QString::fromUtf8("invisibleListWidget"));
        invisibleListWidget->setGeometry(QRect(0, 100, 1200, 700));
        invisibleListWidget->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        youwangWidget = new myWidget(firstLevel);
        youwangWidget->setObjectName(QString::fromUtf8("youwangWidget"));
        youwangWidget->setGeometry(QRect(507, 108, 146, 91));
        bigGold = new QLabel(firstLevel);
        bigGold->setObjectName(QString::fromUtf8("bigGold"));
        bigGold->setGeometry(QRect(210, 470, 130, 130));
        bigGold->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/bigGold.png);"));
        showCurrentMoney = new QLabel(firstLevel);
        showCurrentMoney->setObjectName(QString::fromUtf8("showCurrentMoney"));
        showCurrentMoney->setGeometry(QRect(160, 10, 121, 50));
        QFont font2;
        font2.setPointSize(20);
        showCurrentMoney->setFont(font2);
        showCurrentMoney->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        remainingTime = new QLabel(firstLevel);
        remainingTime->setObjectName(QString::fromUtf8("remainingTime"));
        remainingTime->setGeometry(QRect(1090, 20, 60, 50));
        remainingTime->setFont(font2);
        remainingTime->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        addNumber = new QLabel(firstLevel);
        addNumber->setObjectName(QString::fromUtf8("addNumber"));
        addNumber->setGeometry(QRect(350, 50, 161, 61));
        addNumber->setFont(font2);
        addNumber->setStyleSheet(QString::fromUtf8("color: rgb(55, 158, 54);"));
        fail = new QLabel(firstLevel);
        fail->setObjectName(QString::fromUtf8("fail"));
        fail->setGeometry(QRect(360, 60, 72, 15));
        smallGold1 = new QLabel(firstLevel);
        smallGold1->setObjectName(QString::fromUtf8("smallGold1"));
        smallGold1->setGeometry(QRect(490, 570, 70, 70));
        smallGold1->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        smallGold2 = new QLabel(firstLevel);
        smallGold2->setObjectName(QString::fromUtf8("smallGold2"));
        smallGold2->setGeometry(QRect(850, 560, 70, 70));
        smallGold2->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        bigGold2 = new QLabel(firstLevel);
        bigGold2->setObjectName(QString::fromUtf8("bigGold2"));
        bigGold2->setGeometry(QRect(990, 410, 130, 130));
        bigGold2->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/bigGold.png);"));
        stone1 = new QLabel(firstLevel);
        stone1->setObjectName(QString::fromUtf8("stone1"));
        stone1->setGeometry(QRect(950, 300, 70, 70));
        stone1->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        stone2 = new QLabel(firstLevel);
        stone2->setObjectName(QString::fromUtf8("stone2"));
        stone2->setGeometry(QRect(720, 460, 70, 70));
        stone2->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        smallGold3 = new QLabel(firstLevel);
        smallGold3->setObjectName(QString::fromUtf8("smallGold3"));
        smallGold3->setGeometry(QRect(410, 390, 70, 70));
        smallGold3->setStyleSheet(QString::fromUtf8("border-image: url(:/golds/photo/smallGold.png);"));
        stone3 = new QLabel(firstLevel);
        stone3->setObjectName(QString::fromUtf8("stone3"));
        stone3->setGeometry(QRect(180, 330, 70, 70));
        stone3->setStyleSheet(QString::fromUtf8("border-image: url(:/stone/photo/stones.png);"));
        luckBag1 = new QLabel(firstLevel);
        luckBag1->setObjectName(QString::fromUtf8("luckBag1"));
        luckBag1->setGeometry(QRect(640, 560, 70, 80));
        luckBag1->setStyleSheet(QString::fromUtf8("border-image: url(:/luckyBag/photo/luckyBag.png);"));
        currentBomb = new QLabel(firstLevel);
        currentBomb->setObjectName(QString::fromUtf8("currentBomb"));
        currentBomb->setGeometry(QRect(650, 40, 121, 50));
        currentBomb->setFont(font);
        currentBomb->setAlignment(Qt::AlignCenter);
        bomb = new QLabel(firstLevel);
        bomb->setObjectName(QString::fromUtf8("bomb"));
        bomb->setGeometry(QRect(760, 40, 60, 50));
        bomb->setFont(font2);
        bomb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        oldMan->raise();
        firstMap->raise();
        currentMoney->raise();
        goalMoney->raise();
        lastingtime->raise();
        firstLevel_2->raise();
        bigGold->raise();
        showCurrentMoney->raise();
        remainingTime->raise();
        addNumber->raise();
        smallGold1->raise();
        smallGold2->raise();
        bigGold2->raise();
        stone1->raise();
        stone2->raise();
        smallGold3->raise();
        stone3->raise();
        invisibleListWidget->raise();
        luckBag1->raise();
        youwangWidget->raise();
        currentBomb->raise();
        bomb->raise();
        fail->raise();

        retranslateUi(firstLevel);

        QMetaObject::connectSlotsByName(firstLevel);
    } // setupUi

    void retranslateUi(QWidget *firstLevel)
    {
        firstLevel->setWindowTitle(QCoreApplication::translate("firstLevel", "\351\273\204\351\207\221\347\237\277\345\267\245", nullptr));
        oldMan->setText(QString());
        firstMap->setText(QString());
        currentMoney->setText(QCoreApplication::translate("firstLevel", "\345\275\223\345\211\215\351\207\221\351\242\235\357\274\232", nullptr));
        goalMoney->setText(QCoreApplication::translate("firstLevel", "\347\233\256\346\240\207\351\207\221\351\242\235\357\274\232$650", nullptr));
        lastingtime->setText(QCoreApplication::translate("firstLevel", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", nullptr));
        firstLevel_2->setText(QCoreApplication::translate("firstLevel", "\347\254\2541\345\205\263", nullptr));
        bigGold->setText(QString());
        showCurrentMoney->setText(QCoreApplication::translate("firstLevel", "$0", nullptr));
        remainingTime->setText(QCoreApplication::translate("firstLevel", "60", nullptr));
        addNumber->setText(QString());
        fail->setText(QString());
        smallGold1->setText(QString());
        smallGold2->setText(QString());
        bigGold2->setText(QString());
        stone1->setText(QString());
        stone2->setText(QString());
        smallGold3->setText(QString());
        stone3->setText(QString());
        luckBag1->setText(QString());
        currentBomb->setText(QCoreApplication::translate("firstLevel", "\347\202\270\345\274\271\346\225\260\357\274\232", nullptr));
        bomb->setText(QCoreApplication::translate("firstLevel", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstLevel: public Ui_firstLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTLEVEL_H
