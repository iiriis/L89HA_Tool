#include "terminal.h"
#include "ui_terminal.h"

/* terminal window that holds all the serial terminal
 * operations
 */

terminal::terminal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::terminal)
{
    ui->setupUi(this);

    /* set the text Terminal in read only mode */
    ui->textTerminal->setReadOnly(true);

    /* assign the ui.textTerminal to public textTerminal for access */
    textTerminal = ui->textTerminal;
}

terminal::~terminal()
{
    delete ui;
}
