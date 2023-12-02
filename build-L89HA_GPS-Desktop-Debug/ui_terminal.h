/********************************************************************************
** Form generated from reading UI file 'terminal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINAL_H
#define UI_TERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_terminal
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *textTerminal;

    void setupUi(QWidget *terminal)
    {
        if (terminal->objectName().isEmpty())
            terminal->setObjectName("terminal");
        terminal->resize(400, 300);
        gridLayout = new QGridLayout(terminal);
        gridLayout->setObjectName("gridLayout");
        textTerminal = new QPlainTextEdit(terminal);
        textTerminal->setObjectName("textTerminal");

        gridLayout->addWidget(textTerminal, 0, 0, 1, 1);


        retranslateUi(terminal);

        QMetaObject::connectSlotsByName(terminal);
    } // setupUi

    void retranslateUi(QWidget *terminal)
    {
        terminal->setWindowTitle(QCoreApplication::translate("terminal", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class terminal: public Ui_terminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINAL_H
