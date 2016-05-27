#include "viewannuaire.h"
#include "ui_viewannuaire.h"

ViewAnnuaire::ViewAnnuaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewAnnuaire)
{
    ui->setupUi(this);
}

ViewAnnuaire::~ViewAnnuaire()
{
    delete ui;
}
