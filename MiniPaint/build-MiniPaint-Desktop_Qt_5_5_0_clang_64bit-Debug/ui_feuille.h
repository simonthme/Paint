/********************************************************************************
** Form generated from reading UI file 'feuille.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEUILLE_H
#define UI_FEUILLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Feuille
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Feuille)
    {
        if (Feuille->objectName().isEmpty())
            Feuille->setObjectName(QStringLiteral("Feuille"));
        Feuille->resize(836, 668);
        graphicsView = new QGraphicsView(Feuille);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-5, -9, 851, 681));

        retranslateUi(Feuille);

        QMetaObject::connectSlotsByName(Feuille);
    } // setupUi

    void retranslateUi(QWidget *Feuille)
    {
        Feuille->setWindowTitle(QApplication::translate("Feuille", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Feuille: public Ui_Feuille {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEUILLE_H
