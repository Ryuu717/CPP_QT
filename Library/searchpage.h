#ifndef SEARCHPAGE_H
#define SEARCHPAGE_H

#include <QDialog>

namespace Ui {
class SearchPage;
}

class SearchPage : public QDialog
{
    Q_OBJECT

public:
    explicit SearchPage(QWidget *parent = nullptr);
    ~SearchPage();

private:
    Ui::SearchPage *ui;
};

#endif // SEARCHPAGE_H
