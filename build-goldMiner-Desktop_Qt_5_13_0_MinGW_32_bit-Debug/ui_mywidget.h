/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget1
{
public:
    QGraphicsView *graphicsView;
    QPushButton *next;
    QPushButton *strongdrug;
    QPushButton *threeleaves;
    QPushButton *stonebook;
    QPushButton *luckdog;
    QPushButton *bomb;
    QTextEdit *bomb_2;
    QTextEdit *strongdrug_2;
    QTextEdit *threeleaves_2;
    QTextEdit *stonebook_2;
    QTextEdit *luckdog_2;
    QLabel *boss;
    QLabel *boss2;
    QTextEdit *bomb_3;
    QTextEdit *strongdrug_3;
    QTextEdit *threeleaves_3;
    QTextEdit *stonebook_3;
    QTextEdit *luckdog_3;
    QLabel *words;
    QLabel *gold1;
    QLabel *gold2;

    void setupUi(QWidget *myWidget1)
    {
        if (myWidget1->objectName().isEmpty())
            myWidget1->setObjectName(QString::fromUtf8("myWidget1"));
        myWidget1->resize(1291, 800);
        graphicsView = new QGraphicsView(myWidget1);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1211, 800));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/backimg.png);"));
        next = new QPushButton(myWidget1);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(930, 120, 171, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(10);
        next->setFont(font);
        next->setCursor(QCursor(Qt::OpenHandCursor));
        next->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 173, 27);\n"
"color: rgb(91, 240, 11);\n"
"font: 87 18pt \"Arial\";"));
        strongdrug = new QPushButton(myWidget1);
        strongdrug->setObjectName(QString::fromUtf8("strongdrug"));
        strongdrug->setGeometry(QRect(210, 440, 161, 161));
        strongdrug->setCursor(QCursor(Qt::OpenHandCursor));
        strongdrug->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/strongdrug.png);"));
        threeleaves = new QPushButton(myWidget1);
        threeleaves->setObjectName(QString::fromUtf8("threeleaves"));
        threeleaves->setGeometry(QRect(410, 440, 111, 151));
        threeleaves->setCursor(QCursor(Qt::OpenHandCursor));
        threeleaves->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/threeleaves.png);"));
        stonebook = new QPushButton(myWidget1);
        stonebook->setObjectName(QString::fromUtf8("stonebook"));
        stonebook->setGeometry(QRect(560, 420, 141, 191));
        stonebook->setCursor(QCursor(Qt::OpenHandCursor));
        stonebook->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/stonebook.png);"));
        luckdog = new QPushButton(myWidget1);
        luckdog->setObjectName(QString::fromUtf8("luckdog"));
        luckdog->setGeometry(QRect(750, 440, 111, 141));
        luckdog->setCursor(QCursor(Qt::OpenHandCursor));
        luckdog->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/luckdog.png);"));
        bomb = new QPushButton(myWidget1);
        bomb->setObjectName(QString::fromUtf8("bomb"));
        bomb->setGeometry(QRect(70, 440, 111, 151));
        bomb->setCursor(QCursor(Qt::OpenHandCursor));
        bomb->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/bomb.png);"));
        bomb_2 = new QTextEdit(myWidget1);
        bomb_2->setObjectName(QString::fromUtf8("bomb_2"));
        bomb_2->setGeometry(QRect(70, 600, 71, 51));
        bomb_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0);\n"
"border:0 solid red;\n"
"font: 87 14pt \"Arial\";\n"
"color: rgb(54, 139, 9);"));
        strongdrug_2 = new QTextEdit(myWidget1);
        strongdrug_2->setObjectName(QString::fromUtf8("strongdrug_2"));
        strongdrug_2->setGeometry(QRect(240, 600, 81, 61));
        strongdrug_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0);\n"
"border:0 solid red;\n"
"font: 87 14pt \"Arial\";\n"
"color: rgb(54, 139, 9);"));
        threeleaves_2 = new QTextEdit(myWidget1);
        threeleaves_2->setObjectName(QString::fromUtf8("threeleaves_2"));
        threeleaves_2->setGeometry(QRect(430, 600, 71, 51));
        threeleaves_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0);\n"
"border:0 solid red;\n"
"font: 87 14pt \"Arial\";\n"
"color: rgb(54, 139, 9);"));
        stonebook_2 = new QTextEdit(myWidget1);
        stonebook_2->setObjectName(QString::fromUtf8("stonebook_2"));
        stonebook_2->setGeometry(QRect(590, 600, 71, 51));
        stonebook_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0);\n"
"border:0 solid red;\n"
"font: 87 14pt \"Arial\";\n"
"color: rgb(54, 139, 9);"));
        luckdog_2 = new QTextEdit(myWidget1);
        luckdog_2->setObjectName(QString::fromUtf8("luckdog_2"));
        luckdog_2->setGeometry(QRect(780, 600, 71, 51));
        luckdog_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0);\n"
"color: rgb(54, 139, 9);\n"
"border:0 solid red;\n"
"font: 87 14pt \"Arial\";"));
        boss = new QLabel(myWidget1);
        boss->setObjectName(QString::fromUtf8("boss"));
        boss->setGeometry(QRect(890, 280, 351, 361));
        boss->setStyleSheet(QString::fromUtf8("image: url(:/GoldenMiner/photo/boss.png);"));
        boss2 = new QLabel(myWidget1);
        boss2->setObjectName(QString::fromUtf8("boss2"));
        boss2->setGeometry(QRect(840, 210, 451, 481));
        boss2->setStyleSheet(QString::fromUtf8("image: url(:/GoldenMiner/photo/badboss.png);"));
        bomb_3 = new QTextEdit(myWidget1);
        bomb_3->setObjectName(QString::fromUtf8("bomb_3"));
        bomb_3->setGeometry(QRect(50, 640, 161, 101));
        bomb_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(236, 236, 77);\n"
"font: 87 16pt \"Arial\";\n"
"border:0px solid red;"));
        strongdrug_3 = new QTextEdit(myWidget1);
        strongdrug_3->setObjectName(QString::fromUtf8("strongdrug_3"));
        strongdrug_3->setGeometry(QRect(230, 640, 141, 91));
        strongdrug_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(236, 236, 77);\n"
"font: 87 16pt \"Arial\";\n"
"border:0px solid red;"));
        threeleaves_3 = new QTextEdit(myWidget1);
        threeleaves_3->setObjectName(QString::fromUtf8("threeleaves_3"));
        threeleaves_3->setGeometry(QRect(390, 640, 161, 111));
        threeleaves_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(236, 236, 77);\n"
"font: 87 16pt \"Arial\";\n"
"border:0px solid red;"));
        stonebook_3 = new QTextEdit(myWidget1);
        stonebook_3->setObjectName(QString::fromUtf8("stonebook_3"));
        stonebook_3->setGeometry(QRect(580, 640, 151, 101));
        stonebook_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(236, 236, 77);\n"
"font: 87 16pt \"Arial\";\n"
"border:0px solid red;"));
        luckdog_3 = new QTextEdit(myWidget1);
        luckdog_3->setObjectName(QString::fromUtf8("luckdog_3"));
        luckdog_3->setGeometry(QRect(750, 640, 141, 91));
        luckdog_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(236, 236, 77);\n"
"font: 87 16pt \"Arial\";\n"
"border:0px solid red;"));
        words = new QLabel(myWidget1);
        words->setObjectName(QString::fromUtf8("words"));
        words->setGeometry(QRect(150, 210, 821, 211));
        words->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/words.png);"));
        gold1 = new QLabel(myWidget1);
        gold1->setObjectName(QString::fromUtf8("gold1"));
        gold1->setGeometry(QRect(90, 360, 51, 51));
        gold1->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/smallgold.png);"));
        gold2 = new QLabel(myWidget1);
        gold2->setObjectName(QString::fromUtf8("gold2"));
        gold2->setGeometry(QRect(40, 280, 61, 71));
        gold2->setStyleSheet(QString::fromUtf8("border-image: url(:/GoldenMiner/photo/smallgold.png);"));

        retranslateUi(myWidget1);

        QMetaObject::connectSlotsByName(myWidget1);
    } // setupUi

    void retranslateUi(QWidget *myWidget1)
    {
        myWidget1->setWindowTitle(QCoreApplication::translate("myWidget1", "myWidget", nullptr));
        next->setText(QCoreApplication::translate("myWidget1", "\344\270\213\344\270\200\345\205\263", nullptr));
        strongdrug->setText(QString());
        threeleaves->setText(QString());
        stonebook->setText(QString());
        luckdog->setText(QString());
#if QT_CONFIG(tooltip)
        bomb->setToolTip(QCoreApplication::translate("myWidget1", "<html><head/><body><p>llll</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bomb->setText(QString());
        bomb_2->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14pt; font-weight:80; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        strongdrug_2->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14pt; font-weight:80; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        threeleaves_2->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14pt; font-weight:80; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        stonebook_2->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14pt; font-weight:80; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        luckdog_2->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14pt; font-weight:80; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        boss->setText(QString());
        boss2->setText(QString());
        bomb_3->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:16pt; font-weight:80; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\250\346\235\245\347\202\270\344\275\240\344\270\215\345\226\234\346\254\242\347\232\204\344\270\234\350\245\277</p></body></html>", nullptr));
        strongdrug_3->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:16pt; font-weight:80; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\242\236\345\244\247\344\275\240\347\232\204\345\212\233\346\260\224</p></body></html>", nullptr));
        threeleaves_3->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:16pt; font-weight:80; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\245\236\347\247\230\350\242\213\345\255\220\345\245\226\345\212\261\346\233\264\345\244\232</p></body></html>", nullptr));
        stonebook_3->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:16pt; font-weight:80; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\256\251\347\237\263\345\244\264\345\200\274\351\222\261\344\270\200\347\202\271</p></body></html>", nullptr));
        luckdog_3->setHtml(QCoreApplication::translate("myWidget1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:16pt; font-weight:80; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\222\273\347\237\263\346\233\264\345\212\240\347\232\204\346\234\211\344\273\267\345\200\274</p></body></html>", nullptr));
        words->setText(QString());
        gold1->setText(QString());
        gold2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myWidget1: public Ui_myWidget1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
