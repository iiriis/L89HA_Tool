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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_terminal
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *autoscroll_CheckBox;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *ASCII_Radio_Button;
    QComboBox *lineFeed_Combobox;
    QLabel *LineFeed;
    QLineEdit *textInput_LineEdit;
    QTextEdit *textTerminal;
    QRadioButton *HEX_Radio_Button;
    QButtonGroup *ASCII_HEX_radio_button_group;

    void setupUi(QWidget *terminal)
    {
        if (terminal->objectName().isEmpty())
            terminal->setObjectName("terminal");
        terminal->resize(769, 512);
        gridLayout_2 = new QGridLayout(terminal);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 1, 1, 1);

        autoscroll_CheckBox = new QCheckBox(terminal);
        autoscroll_CheckBox->setObjectName("autoscroll_CheckBox");

        gridLayout_2->addWidget(autoscroll_CheckBox, 5, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 5, 4, 1, 1);

        ASCII_Radio_Button = new QRadioButton(terminal);
        ASCII_HEX_radio_button_group = new QButtonGroup(terminal);
        ASCII_HEX_radio_button_group->setObjectName("ASCII_HEX_radio_button_group");
        ASCII_HEX_radio_button_group->addButton(ASCII_Radio_Button);
        ASCII_Radio_Button->setObjectName("ASCII_Radio_Button");

        gridLayout_2->addWidget(ASCII_Radio_Button, 5, 2, 1, 1);

        lineFeed_Combobox = new QComboBox(terminal);
        lineFeed_Combobox->addItem(QString());
        lineFeed_Combobox->addItem(QString());
        lineFeed_Combobox->addItem(QString());
        lineFeed_Combobox->addItem(QString());
        lineFeed_Combobox->setObjectName("lineFeed_Combobox");

        gridLayout_2->addWidget(lineFeed_Combobox, 5, 6, 1, 1);

        LineFeed = new QLabel(terminal);
        LineFeed->setObjectName("LineFeed");

        gridLayout_2->addWidget(LineFeed, 5, 5, 1, 1);

        textInput_LineEdit = new QLineEdit(terminal);
        textInput_LineEdit->setObjectName("textInput_LineEdit");
        textInput_LineEdit->setToolTipDuration(2000);

        gridLayout_2->addWidget(textInput_LineEdit, 1, 0, 1, 7);

        textTerminal = new QTextEdit(terminal);
        textTerminal->setObjectName("textTerminal");

        gridLayout_2->addWidget(textTerminal, 2, 0, 1, 7);

        HEX_Radio_Button = new QRadioButton(terminal);
        ASCII_HEX_radio_button_group->addButton(HEX_Radio_Button);
        HEX_Radio_Button->setObjectName("HEX_Radio_Button");

        gridLayout_2->addWidget(HEX_Radio_Button, 5, 3, 1, 1);


        retranslateUi(terminal);

        lineFeed_Combobox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(terminal);
    } // setupUi

    void retranslateUi(QWidget *terminal)
    {
        terminal->setWindowTitle(QCoreApplication::translate("terminal", "Form", nullptr));
        autoscroll_CheckBox->setText(QCoreApplication::translate("terminal", "AutoScroll", nullptr));
        ASCII_Radio_Button->setText(QCoreApplication::translate("terminal", "ASCII", nullptr));
        lineFeed_Combobox->setItemText(0, QCoreApplication::translate("terminal", "None", nullptr));
        lineFeed_Combobox->setItemText(1, QCoreApplication::translate("terminal", "\\n (New Line)", nullptr));
        lineFeed_Combobox->setItemText(2, QCoreApplication::translate("terminal", "\\r (Carriage Return)", nullptr));
        lineFeed_Combobox->setItemText(3, QCoreApplication::translate("terminal", "\\n\\r (Both)", nullptr));

        LineFeed->setText(QCoreApplication::translate("terminal", "LineFeed", nullptr));
#if QT_CONFIG(tooltip)
        textInput_LineEdit->setToolTip(QCoreApplication::translate("terminal", "Hit Enter to Send Data", nullptr));
#endif // QT_CONFIG(tooltip)
        HEX_Radio_Button->setText(QCoreApplication::translate("terminal", "HEX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class terminal: public Ui_terminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINAL_H
