/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Mar 7 12:42:07 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *Polje;
    QPushButton *push_u;
    QPushButton *push_1;
    QPushButton *push_2;
    QPushButton *push_3;
    QPushButton *push_4;
    QPushButton *push_5;
    QPushButton *push_6;
    QPushButton *push_7;
    QTextEdit *textEdit;
    QPushButton *Kopiraj;
    QPushButton *Lepi;
    QPushButton *Ocena;
    QPushButton *push_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *push_0;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(717, 496);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Polje = new QTableWidget(centralWidget);
        if (Polje->columnCount() < 9)
            Polje->setColumnCount(9);
        if (Polje->rowCount() < 8)
            Polje->setRowCount(8);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(brush1);
        __qtablewidgetitem->setForeground(brush);
        Polje->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(brush1);
        Polje->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(brush1);
        Polje->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(brush1);
        Polje->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(brush1);
        Polje->setItem(0, 4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(brush1);
        Polje->setItem(0, 5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setBackground(brush1);
        Polje->setItem(0, 6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setBackground(brush1);
        Polje->setItem(0, 7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setBackground(brush1);
        Polje->setItem(0, 8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setBackground(brush1);
        Polje->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setBackground(brush1);
        Polje->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setBackground(brush1);
        Polje->setItem(1, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setBackground(brush1);
        Polje->setItem(1, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setBackground(brush1);
        Polje->setItem(1, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setBackground(brush1);
        Polje->setItem(1, 5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setBackground(brush1);
        Polje->setItem(1, 6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setBackground(brush1);
        Polje->setItem(1, 7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setBackground(brush1);
        Polje->setItem(1, 8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setBackground(brush1);
        Polje->setItem(2, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setBackground(brush1);
        Polje->setItem(2, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setBackground(brush1);
        Polje->setItem(2, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setBackground(brush1);
        Polje->setItem(2, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setBackground(brush1);
        Polje->setItem(2, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setBackground(brush1);
        Polje->setItem(2, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setBackground(brush1);
        Polje->setItem(2, 6, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setBackground(brush1);
        Polje->setItem(2, 7, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setBackground(brush1);
        Polje->setItem(2, 8, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setBackground(brush1);
        Polje->setItem(3, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setBackground(brush1);
        Polje->setItem(3, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setBackground(brush1);
        Polje->setItem(3, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setBackground(brush1);
        Polje->setItem(3, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setBackground(brush1);
        Polje->setItem(3, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setBackground(brush1);
        Polje->setItem(3, 5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setBackground(brush1);
        Polje->setItem(3, 6, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setBackground(brush1);
        Polje->setItem(3, 7, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setBackground(brush1);
        Polje->setItem(3, 8, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setBackground(brush1);
        Polje->setItem(4, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setBackground(brush1);
        Polje->setItem(4, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setBackground(brush1);
        Polje->setItem(4, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setBackground(brush1);
        Polje->setItem(4, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setBackground(brush1);
        Polje->setItem(4, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setBackground(brush1);
        Polje->setItem(4, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setBackground(brush1);
        Polje->setItem(4, 6, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setBackground(brush1);
        Polje->setItem(4, 7, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setBackground(brush1);
        Polje->setItem(4, 8, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setBackground(brush1);
        Polje->setItem(5, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setBackground(brush1);
        Polje->setItem(5, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setBackground(brush1);
        Polje->setItem(5, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setBackground(brush1);
        Polje->setItem(5, 3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setBackground(brush1);
        Polje->setItem(5, 4, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setBackground(brush1);
        Polje->setItem(5, 5, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setBackground(brush1);
        Polje->setItem(5, 6, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setBackground(brush1);
        Polje->setItem(5, 7, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setBackground(brush1);
        Polje->setItem(5, 8, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setBackground(brush1);
        Polje->setItem(6, 0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setBackground(brush1);
        Polje->setItem(6, 1, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setBackground(brush1);
        Polje->setItem(6, 2, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setBackground(brush1);
        Polje->setItem(6, 3, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setBackground(brush1);
        Polje->setItem(6, 4, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setBackground(brush1);
        Polje->setItem(6, 5, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setBackground(brush1);
        Polje->setItem(6, 6, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setBackground(brush1);
        Polje->setItem(6, 7, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setBackground(brush1);
        Polje->setItem(6, 8, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setBackground(brush1);
        Polje->setItem(7, 0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setBackground(brush1);
        Polje->setItem(7, 1, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setBackground(brush1);
        Polje->setItem(7, 2, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setBackground(brush1);
        Polje->setItem(7, 3, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setBackground(brush1);
        Polje->setItem(7, 4, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setBackground(brush1);
        Polje->setItem(7, 5, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setBackground(brush1);
        Polje->setItem(7, 6, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setBackground(brush1);
        Polje->setItem(7, 7, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setBackground(brush1);
        Polje->setItem(7, 8, __qtablewidgetitem71);
        Polje->setObjectName(QString::fromUtf8("Polje"));
        Polje->setEnabled(false);
        Polje->setGeometry(QRect(170, 70, 317, 282));
        Polje->setStyleSheet(QString::fromUtf8(""));
        Polje->setRowCount(8);
        Polje->setColumnCount(9);
        Polje->horizontalHeader()->setVisible(false);
        Polje->horizontalHeader()->setDefaultSectionSize(35);
        Polje->verticalHeader()->setVisible(false);
        Polje->verticalHeader()->setDefaultSectionSize(35);
        Polje->verticalHeader()->setMinimumSectionSize(25);
        push_u = new QPushButton(centralWidget);
        push_u->setObjectName(QString::fromUtf8("push_u"));
        push_u->setGeometry(QRect(170, 30, 35, 30));
        push_1 = new QPushButton(centralWidget);
        push_1->setObjectName(QString::fromUtf8("push_1"));
        push_1->setGeometry(QRect(205, 30, 35, 30));
        push_2 = new QPushButton(centralWidget);
        push_2->setObjectName(QString::fromUtf8("push_2"));
        push_2->setGeometry(QRect(240, 30, 35, 30));
        push_3 = new QPushButton(centralWidget);
        push_3->setObjectName(QString::fromUtf8("push_3"));
        push_3->setGeometry(QRect(276, 30, 35, 30));
        push_4 = new QPushButton(centralWidget);
        push_4->setObjectName(QString::fromUtf8("push_4"));
        push_4->setGeometry(QRect(310, 30, 35, 30));
        push_5 = new QPushButton(centralWidget);
        push_5->setObjectName(QString::fromUtf8("push_5"));
        push_5->setGeometry(QRect(346, 30, 35, 30));
        push_6 = new QPushButton(centralWidget);
        push_6->setObjectName(QString::fromUtf8("push_6"));
        push_6->setGeometry(QRect(381, 30, 35, 30));
        push_7 = new QPushButton(centralWidget);
        push_7->setObjectName(QString::fromUtf8("push_7"));
        push_7->setGeometry(QRect(417, 30, 35, 30));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 70, 151, 301));
        Kopiraj = new QPushButton(centralWidget);
        Kopiraj->setObjectName(QString::fromUtf8("Kopiraj"));
        Kopiraj->setGeometry(QRect(560, 170, 98, 27));
        Lepi = new QPushButton(centralWidget);
        Lepi->setObjectName(QString::fromUtf8("Lepi"));
        Lepi->setGeometry(QRect(560, 90, 98, 27));
        Ocena = new QPushButton(centralWidget);
        Ocena->setObjectName(QString::fromUtf8("Ocena"));
        Ocena->setGeometry(QRect(560, 230, 98, 27));
        push_8 = new QPushButton(centralWidget);
        push_8->setObjectName(QString::fromUtf8("push_8"));
        push_8->setGeometry(QRect(453, 30, 35, 30));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 60, 323, 12));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 200, 317, 12));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 165, 317, 12));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 95, 317, 12));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 130, 317, 12));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 235, 317, 12));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 270, 317, 12));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 305, 317, 12));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 340, 317, 12));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 70, 8, 282));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(205, 60, 8, 282));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(240, 70, 8, 282));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(275, 60, 8, 282));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 70, 8, 282));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(345, 70, 8, 282));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(380, 60, 8, 282));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(415, 70, 8, 282));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(450, 70, 8, 282));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(485, 70, 8, 282));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 157, 255);"));
        push_0 = new QPushButton(centralWidget);
        push_0->setObjectName(QString::fromUtf8("push_0"));
        push_0->setGeometry(QRect(170, 30, 35, 30));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 717, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = Polje->isSortingEnabled();
        Polje->setSortingEnabled(false);
        Polje->setSortingEnabled(__sortingEnabled);

        push_u->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        push_1->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        push_2->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        push_3->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        push_4->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        push_5->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        push_6->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        push_7->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        Kopiraj->setText(QApplication::translate("MainWindow", "prilepi", 0, QApplication::UnicodeUTF8));
        Lepi->setText(QApplication::translate("MainWindow", "kopiraj", 0, QApplication::UnicodeUTF8));
        Ocena->setText(QApplication::translate("MainWindow", "ocena", 0, QApplication::UnicodeUTF8));
        push_8->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        push_0->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
