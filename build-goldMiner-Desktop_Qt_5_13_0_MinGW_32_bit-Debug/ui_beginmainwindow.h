/********************************************************************************
** Form generated from reading UI file 'beginmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGINMAINWINDOW_H
#define UI_BEGINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_beginMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnBegin;

    void setupUi(QMainWindow *beginMainWindow)
    {
        if (beginMainWindow->objectName().isEmpty())
            beginMainWindow->setObjectName(QString::fromUtf8("beginMainWindow"));
        beginMainWindow->resize(1200, 800);
        beginMainWindow->setStyleSheet(QString::fromUtf8("border-image: url(:/new/begin/photo/begin.jfif);"));
        centralWidget = new QWidget(beginMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnBegin = new QPushButton(centralWidget);
        btnBegin->setObjectName(QString::fromUtf8("btnBegin"));
        btnBegin->setGeometry(QRect(140, 170, 261, 161));
        btnBegin->setCursor(QCursor(Qt::OpenHandCursor));
        btnBegin->setStyleSheet(QString::fromUtf8("border-image:none;\n"
"background:rbga(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);"));
        btnBegin->setFlat(true);
        beginMainWindow->setCentralWidget(centralWidget);

        retranslateUi(beginMainWindow);

        QMetaObject::connectSlotsByName(beginMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *beginMainWindow)
    {
        beginMainWindow->setWindowTitle(QCoreApplication::translate("beginMainWindow", "beginMainWindow", nullptr));
        btnBegin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class beginMainWindow: public Ui_beginMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGINMAINWINDOW_H
