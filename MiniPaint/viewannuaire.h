#ifndef VIEWANNUAIRE_H
#define VIEWANNUAIRE_H

#include <QMainWindow>

namespace Ui {
class ViewAnnuaire;
}

class ViewAnnuaire : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewAnnuaire(QWidget *parent = 0);
    ~ViewAnnuaire();

private:
    Ui::ViewAnnuaire *ui;
};

#endif // VIEWANNUAIRE_H
