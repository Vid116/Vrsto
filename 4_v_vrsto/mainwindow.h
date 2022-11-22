#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

typedef struct
{
    int ocena;
    int stolpec;
    int alpha;
    int beta;
} mmrezultat;

namespace Ui {
class MainWindow;
}

class MainWindow;

class StiriVrsta
{
    public:
        typedef struct
        {
            char array[8][9];
            int ocenitev;
            bool uporaba;
        } tab;

        typedef struct
        {
            int zelen;
            int rdec;
        } ocena;

        ocena oceni(tab&);
        int Odigrajmm(tab& , int , int );
        tab odigraj(tab,int,int, MainWindow *);
        mmrezultat minimax(tab,int,int,int,int/*,tab[]*/);
        bool preverjaj(tab);


};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    StiriVrsta::tab kopiraj();
    void lepi(StiriVrsta::tab);
    bool klik(int);
    void pocisti();
    void msBox();
    int stolpec(int);
    ~MainWindow();
    
private slots:

    void on_push_0_clicked();

    void on_push_1_clicked();

    void on_push_2_clicked();

    void on_push_3_clicked();

    void on_push_4_clicked();

    void on_push_5_clicked();

    void on_push_6_clicked();

    void on_push_7_clicked();

    void on_push_8_clicked();

    void on_Kopiraj_clicked();

    void on_Lepi_clicked();

    void on_Ocena_clicked();



private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
