#ifndef TERMINAL_H
#define TERMINAL_H

/* create a new class for the new window containing the terminal window
 * that gets opened upon the request of terminal
 */

#include <QWidget>
#include <QPlainTextEdit>

namespace Ui {
class terminal;
}

class terminal : public QWidget
{
    Q_OBJECT

public:
    explicit terminal(QWidget *parent = nullptr);
    ~terminal();

    /* text edit variable to access the ui.textTerminal */
    QPlainTextEdit *textTerminal;


private slots:
    void on_textInput_LineEdit_returnPressed();
    void handleSerialDataReceive(const QByteArray& data);

private:
    Ui::terminal *ui;
    void setWindowSize();
};

#endif // TERMINAL_H
