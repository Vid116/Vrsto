#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidgetItem>
#include <QMessageBox>
#include <Windows.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



QBrush *igralec2=new QBrush((Qt::red));
QBrush *igralec1=new QBrush((Qt::green));
bool igra=0;
StiriVrsta::tab polje;

StiriVrsta::tab MainWindow::kopiraj()
{
    int i,ii;
    StiriVrsta::tab mreza;
    for(i=0;i<8;i++)
        for(ii=0;ii<9;ii++)
        {
            if(ui->Polje->item(i,ii)->background()==Qt::red)
                mreza.array[i][ii]=2;
            else
            {
                if(ui->Polje->item(i,ii)->background()==Qt::green)
                    mreza.array[i][ii]=1;
                else
                    mreza.array[i][ii]=0;
            }
        }
    return mreza;
}

void MainWindow::lepi(StiriVrsta::tab mreza)
{
    int i,ii;
    for(i=0;i<8;i++)
        for(ii=0;ii<9;ii++)
        {
            if(mreza.array[i][ii]==2)
                ui->Polje->item(i,ii)->setBackground(Qt::red);
            else
            {
                if(mreza.array[i][ii]==1)
                    ui->Polje->item(i,ii)->setBackground(Qt::green);
                else
                    ui->Polje->item(i,ii)->setBackground(Qt::white);
            }
        }
}

StiriVrsta::ocena StiriVrsta::oceni(tab &mreza)
{
    int p,pp,st=1;
    ocena OP;
    OP.zelen=0;
    OP.rdec=0;
    for(p=0;p<8;p++)
    {
        for(pp=0;pp<9;pp++)
        {
            if(mreza.array[p][pp]!=0)
            {
                if(pp<7)//vodoravno
                {
                    if(mreza.array[p][pp]==mreza.array[p][pp+1])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p][pp+1]!=0)
                        st=0;
                    }
                    if(mreza.array[p][pp]==mreza.array[p][pp+2])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p][pp+2]!=0)
                        st=0;
                    }
                    if(pp!=7)
                        if(mreza.array[p][pp]==mreza.array[p][pp+3])
                            st=st+1;
                    if(st==4)
                    {
                        if(mreza.array[p][pp]==1)
                            OP.zelen+=100;
                        if(mreza.array[p][pp]==2)
                            OP.rdec+=100;
                    }
                    if(st==3)
                    {
                        if(pp!=7)
                            if(mreza.array[p][pp+3]!=mreza.array[p][pp])
                                if(mreza.array[p][pp+3]==0)
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                    if(mreza.array[p+1][pp+3]!=0 || p==9)
                                    {
                                        if(mreza.array[p][pp]==1)
                                            OP.zelen+=2;
                                        if(mreza.array[p][pp]==2)
                                            OP.rdec+=2;
                                    }
                                }
                        if(mreza.array[p][pp+2]!=mreza.array[p][pp])
                            if(mreza.array[p][pp+2]==0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                                if(mreza.array[p+1][pp+2]!=0 || p==9)
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                }
                            }
                        if(mreza.array[p][pp+1]!=mreza.array[p][pp])
                            if(mreza.array[p][pp+1]==0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                                if(mreza.array[p+1][pp+1]!=0 || p==9)
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                }
                            }
                        if(pp>0 && mreza.array[p][pp+3]==0)
                        {
                            if(mreza.array[p][pp-1]==0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                                if(mreza.array[p+1][pp-1]!=0 || p==9)
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                }
                            }
                        }
                    }
                st=1;
                }
                if(pp<7 && p<6)//diagonalno-desno
                {
                    if(mreza.array[p][pp]==mreza.array[p+1][pp+1])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p+1][pp+1]!=0)
                        st=0;
                    }
                    if(mreza.array[p][pp]==mreza.array[p+2][pp+2])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p+2][pp+2]!=0)
                        st=0;
                    }
                    if(pp!=7 && p!=7)
                    if(mreza.array[p][pp]==mreza.array[p+3][pp+3])
                        st=st+1;
                    if(st==4)
                    {
                        if(mreza.array[p][pp]==1)
                            OP.zelen+=100;
                        if(mreza.array[p][pp]==2)
                            OP.rdec+=100;
                    }
                    if(st==3)
                    {
                        if(pp!=7 && p!=7)
                            if(mreza.array[p+3][pp+3]==0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                                if(mreza.array[p+4][pp+3]!=0 || p==6)
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                }
                            }
                        if(mreza.array[p+1][pp+1]==0)
                        {
                            if(mreza.array[p][pp]==1)
                                OP.zelen+=2;
                            if(mreza.array[p][pp]==2)
                                OP.rdec+=2;
                            if(mreza.array[p+2][pp+1]!=0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                            }
                        }
                        if(mreza.array[p+2][pp+2]==0)
                        {
                            if(mreza.array[p][pp]==1)
                                OP.zelen+=2;
                            if(mreza.array[p][pp]==2)
                                OP.rdec+=2;
                            if(mreza.array[p+3][pp+2]!=0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                            }
                        }
                        if(mreza.array[p-1][pp-1]==0 && mreza.array[p+3][pp+3]!=mreza.array[p][pp])
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                    if(mreza.array[p][pp-1]!=0)
                                    {
                                        if(mreza.array[p][pp]==1)
                                            OP.zelen+=2;
                                        if(mreza.array[p][pp]==2)
                                            OP.rdec+=2;
                                    }
                                }
                    }
                st=1;
                }
                if(pp>1 && p<6)//diagonalno-levo
                {
                    if(mreza.array[p][pp]==mreza.array[p+1][pp-1])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p+1][pp-1]!=0)
                        st=0;
                    }
                    if(mreza.array[p][pp]==mreza.array[p+2][pp-2])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p+2][pp-1]!=0)
                        st=0;
                    }
                    if(pp!=2 && p!=7)
                    if(mreza.array[p][pp]==mreza.array[p+3][pp-3])
                        st=st+1;
                    if(st==4)
                    {
                        if(mreza.array[p][pp]==1)
                            OP.zelen+=100;
                        if(mreza.array[p][pp]==2)
                            OP.rdec+=100;
                    }
                    if(st==3)
                    {
                        if(pp!=2 && p!=7)
                            if(mreza.array[p+3][pp-3]==0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                                if(mreza.array[p+3][pp-3]!=0 || p==6)
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                }
                            }
                        if(mreza.array[p+2][pp-2]==0)
                        {
                            if(mreza.array[p][pp]==1)
                                OP.zelen+=2;
                            if(mreza.array[p][pp]==2)
                                OP.rdec+=2;
                            if(mreza.array[p+3][pp-2]!=0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                            }
                        }
                        if(mreza.array[p+1][pp-1]==0)
                        {
                            if(mreza.array[p][pp]==1)
                                OP.zelen+=2;
                            if(mreza.array[p][pp]==2)
                                OP.rdec+=2;
                            if(mreza.array[p+2][pp-1]!=0)
                            {
                                if(mreza.array[p][pp]==1)
                                    OP.zelen+=2;
                                if(mreza.array[p][pp]==2)
                                    OP.rdec+=2;
                            }
                        }
                                if(mreza.array[p-1][pp+1]==0 && mreza.array[p+3][pp-3]!=mreza.array[p][pp])
                                {
                                    if(mreza.array[p][pp]==1)
                                        OP.zelen+=2;
                                    if(mreza.array[p][pp]==2)
                                        OP.rdec+=2;
                                    if(mreza.array[p][pp+1]!=0)
                                    {
                                        if(mreza.array[p][pp]==1)
                                            OP.zelen+=2;
                                        if(mreza.array[p][pp]==2)
                                            OP.rdec+=2;
                                    }
                                }
                    }
                st=1;
                }
                if(p<6)//navpično
                {
                    if(mreza.array[p][pp]==mreza.array[p+1][pp])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p+1][pp]!=0)
                        st=0;
                    }
                    if(mreza.array[p][pp]==mreza.array[p+2][pp])
                        st=st+1;
                    else
                    {
                        if(mreza.array[p+2][pp]!=0)
                        st=0;
                    }
                    if(p!=7)
                    if(mreza.array[p][pp]==mreza.array[p+3][pp])
                        st=st+1;
                    if(st==4)
                    {
                        if(mreza.array[p][pp]==1)
                            OP.zelen+=100;
                        if(mreza.array[p][pp]==2)
                            OP.rdec+=100;
                    }
                    if(st==3)
                    {
                        if(p!=0)
                        if(mreza.array[p-1][pp]==0)
                        {
                            if(mreza.array[p][pp]==1)
                                OP.zelen+=3;
                            if(mreza.array[p][pp]==2)
                                OP.rdec+=3;
                        }
                    }
                st=1;
                }
            }
        }
    }
    return OP;
}

void MainWindow::on_Ocena_clicked()
{
    StiriVrsta bla;
    StiriVrsta::ocena OP;
    StiriVrsta::tab mreza=kopiraj();
    OP= bla.oceni(mreza);
    ui->textEdit->clear();
    ui->textEdit->setText("rdeci: "+QString::number(OP.rdec)+'\n'+"zeleni: "+QString::number(OP.zelen));
}


int StiriVrsta::Odigrajmm(tab &Ppolje, int stolpec, int igralec)
{
    int p;

    if(Ppolje.array[0][stolpec]!=0)
        return -1;

    for(p=0;p<=8;p++)
    {
        if(Ppolje.array[p][stolpec]!=0 || p==8)
        {
            Ppolje.array[p-1][stolpec]=igralec;
            break;
        }
    }
}

StiriVrsta::tab StiriVrsta::odigraj(tab polje,int stolpec, int igralec, MainWindow *w)
{
    int p;
    tab Ppolje;
    Ppolje=polje;
    for(p=0;p<=8;p++)
    {
        w->lepi(polje);
        if(p>0)
        Ppolje=polje;
        if(Ppolje.array[p][stolpec]!=0 || p==8)
        {
            Ppolje.array[p-1][stolpec]=igralec;
            w->lepi(Ppolje);
            w->repaint();
            break;
        }
        Ppolje.array[p][stolpec]=igralec;
        w->lepi(Ppolje);
        w->repaint();
        Sleep(100);
    }
    return Ppolje;
}

mmrezultat StiriVrsta::minimax(tab polje, int globina, int igralec, int alpha, int beta)
{
    const int zacetna = 77777;
    tab Ppolje;
    Ppolje=polje;
    int i,noviigralec,p;
    ocena St;
    mmrezultat rezultat;
    rezultat.alpha=alpha;
    rezultat.beta=beta;
    mmrezultat ocena2;
    mmrezultat pom[9];
    if(igralec==1)
        for(i=0;i<9;i++)
            pom[i].ocena=77777;
    else
        for(i=0;i<9;i++)
            pom[i].ocena=-77777;
    rezultat.ocena=77777;
    rezultat.stolpec=0;

    for(i=0;i<9;i++)
    {
        p=Odigrajmm(Ppolje, i, igralec);
        if(p==-1)
            continue;
        if (globina > 0 && preverjaj(Ppolje)==0)
        {
            //zamenjaj igralca
            if(igralec==1)
                noviigralec=2;
            else
                noviigralec=1;

            //širi v globino
            ocena2=minimax(Ppolje, globina-1, noviigralec, rezultat.alpha, rezultat.beta);
            rezultat.alpha=ocena2.alpha;
            rezultat.beta=ocena2.beta;
        }
        else
        {
            //smo v najvisji globini, izvedemo le staticno oceno
            St=oceni(Ppolje);
            ocena2.ocena=St.rdec - St.zelen;
            ocena2.stolpec=i;
            if(igralec==1)
            {
                if(rezultat.beta>ocena2.ocena)
                    rezultat.beta=ocena2.ocena;
            }
            if(igralec==2)
            {
                if(rezultat.alpha<ocena2.ocena)
                    rezultat.alpha=ocena2.ocena;
            }
        }
        if (igralec==2)
        {
            if (ocena2.ocena > rezultat.ocena || rezultat.ocena==zacetna)
            {
                rezultat.ocena=ocena2.ocena;
                rezultat.stolpec=i;
            }
        }
        else
        {
            if (ocena2.ocena < rezultat.ocena || rezultat.ocena==zacetna)
            {
                rezultat.ocena=ocena2.ocena;
                rezultat.stolpec=i;
            }
        }
        if(ocena2.ocena==rezultat.ocena)
        {
            pom[i].ocena=ocena2.ocena;
            pom[i].stolpec=i;
        }
        if(rezultat.alpha>rezultat.beta)
        {
            ocena2.alpha=alpha;
            ocena2.beta=beta;
            return ocena2;
        }
        Ppolje=polje;
    }
    if(igralec==2)
    {
        for(i=0;i<8;i++)
        {
            if(pom[i].ocena>pom[i+1].ocena)
                pom[i+1]=pom[i];
            pom[i].alpha=rezultat.alpha;
            pom[i].beta=rezultat.beta;
        }
        pom[8].alpha=rezultat.alpha;
        pom[8].beta=rezultat.beta;
        for(i=8;i>0;i--)
        {
            if(pom[i].ocena>pom[i-1].ocena)
                pom[i-1]=pom[i];
        }
    }
    if(igralec==1)
    {
        for(i=0;i<8;i++)
        {
            if(pom[i].ocena<pom[i+1].ocena)
                pom[i+1]=pom[i];
            pom[i].beta=rezultat.beta;
            pom[i].alpha=rezultat.alpha;
        }
        pom[8].beta=rezultat.beta;
        pom[8].alpha=rezultat.alpha;
        for(i=8;i>0;i--)
        {
            if(pom[i].ocena<pom[i-1].ocena)
                pom[i-1]=pom[i];
        }
    }
    rezultat=pom[rand()%9];
    while(rezultat.ocena==77777 || rezultat.ocena==-77777)
    {
        rezultat=pom[rand()%9];
    }
    if(igralec==1)
    {
        rezultat.alpha=rezultat.ocena;
        rezultat.beta=beta;
    }
    if(igralec==2)
    {
        rezultat.beta=rezultat.ocena;
        rezultat.alpha=alpha;
    }
    return rezultat;
}

void MainWindow::on_Kopiraj_clicked()
{
    int i,ii,poz=0;
    QString prilepi=ui->textEdit->toPlainText();
    StiriVrsta::tab mreza;
    for(i=0;i<8;i++)
        for(ii=0;ii<9;ii++)
        {
            if(prilepi[poz]=='\n')
            {
                ii--;
            }
            if(prilepi[poz]=='2')
                mreza.array[i][ii]=2;
            else
            {
                if(prilepi[poz]=='1')
                    mreza.array[i][ii]=1;
                if(prilepi[poz]=='0')
                    mreza.array[i][ii]=0;
            }

            poz++;
        }
    lepi(mreza);
}

void MainWindow::on_Lepi_clicked()
{
    ui->textEdit->clear();
    StiriVrsta::tab pom=kopiraj();
    int i,ii;
    QString dozdej;
    for(i=0;i<8;i++)
    {
        for(ii=0;ii<9;ii++)
        {
            dozdej=ui->textEdit->toPlainText();
            ui->textEdit->setText(dozdej+QString::number(pom.array[i][ii]));
        }
        dozdej=ui->textEdit->toPlainText();
        ui->textEdit->setText(dozdej+"\n");
    }
}

bool StiriVrsta::preverjaj(tab mreza)
{
    int p,pp,st=1;
    bool zmaga=0;
    for(p=0;p<8;p++)
    {
        for(pp=0;pp<9;pp++)
        {
            if(mreza.array[p][pp]!=0)
            {
                if(pp<6)//vodoravno
                {
                        if(mreza.array[p][pp]==mreza.array[p][pp+1])
                            st=st+1;
                        if(mreza.array[p][pp]==mreza.array[p][pp+2])
                            st=st+1;
                        if(mreza.array[p][pp]==mreza.array[p][pp+3])
                            st=st+1;
                    if(st==4)
                    {
                        zmaga=1;
                        break;
                    }
                st=1;
                }
                if(pp<6 && p<5)//diagonalno-desno
                {
                    if(mreza.array[p][pp]==mreza.array[p+1][pp+1])
                        st=st+1;
                    if(mreza.array[p][pp]==mreza.array[p+2][pp+2])
                        st=st+1;
                    if(mreza.array[p][pp]==mreza.array[p+3][pp+3])
                        st=st+1;
                    if(st==4)
                    {
                        zmaga=1;
                        break;
                    }
                st=1;
                }
                if(pp>2 && p<5)//diagonalno-levo
                {
                    if(mreza.array[p][pp]==mreza.array[p+1][pp-1])
                        st=st+1;
                    if(mreza.array[p][pp]==mreza.array[p+2][pp-2] && mreza.array[p][pp]!=0)
                        st=st+1;
                    if(mreza.array[p][pp]==mreza.array[p+3][pp-3])
                        st=st+1;
                    if(st==4)
                    {
                        zmaga=1;
                        break;
                    }
                st=1;
                }
                if(p<5)//navpično
                {
                    if(mreza.array[p][pp]==mreza.array[p+1][pp])
                        st=st+1;
                    if(mreza.array[p][pp]==mreza.array[p+2][pp])
                        st=st+1;
                    if(mreza.array[p][pp]==mreza.array[p+3][pp])
                        st=st+1;
                    if(st==4)
                    {
                        zmaga=1;
                        break;
                    }
                st=1;
                }
            }
        }
        if(zmaga==1)
            break;
    }
    return zmaga;
}

void MainWindow::pocisti()
{
    int i,ii;
    for(i=0;i<8;i++)
        for(ii=0;ii<9;ii++)
            ui->Polje->item(i,ii)->setBackground(Qt::white);
}

void MainWindow::msBox()
{
    QMessageBox Box;
    Box.setWindowTitle("Konec");
    if(igra==1)
        Box.setText("Zmagal je zelen");
    else
        Box.setText("Zmagal je rdeci");
    Box.addButton("Se eno?",QMessageBox::RejectRole);
    Box.addButton("Adijo",QMessageBox::AcceptRole);
    int gumb= Box.exec();
    if(gumb==0)//še eno
        pocisti();
    if(gumb==1)//adijo
        exit(0);
}


void MainWindow::klik(int stolpec)
{
    int i;
    StiriVrsta bla;
    StiriVrsta::tab polje;
        QMessageBox Box;
        for(i=7;i>=0;i--)
          if(ui->Polje->item(i,stolpec)->background()==Qt::white)
              break;
        if(i<0)
        {
            Box.setWindowTitle("Debil");
            Box.setText("Ta stolpec je poln!");
            Box.setStandardButtons(QMessageBox::Ok);
            Box.exec();
        }
        else
        {
            if(igra==0)
            {
                polje=kopiraj();
                polje=bla.odigraj(polje,stolpec,1, this);
                lepi(polje);
                igra=1;
                polje=kopiraj();
                if(bla.preverjaj(polje)==1)
                {
                    msBox();
                }
            }
            if(igra==1)
            {
                polje=kopiraj();
                mmrezultat poteza=bla.minimax(polje,6,2,-7777,7777);
                polje=bla.odigraj(polje,poteza.stolpec,2,this);
                lepi(polje);
                igra=0;
                if(bla.preverjaj(polje)==1)
                {
                    msBox();
                }
            }
        }
}

void MainWindow::on_push_0_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(0);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();
}

void MainWindow::on_push_1_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(1);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();
}

void MainWindow::on_push_2_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(2);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();
}

void MainWindow::on_push_3_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(3);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();
}

void MainWindow::on_push_4_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(4);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();

}

void MainWindow::on_push_5_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(5);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();

}

void MainWindow::on_push_6_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(6);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();

}

void MainWindow::on_push_7_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(7);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();

}

void MainWindow::on_push_8_clicked()
{
    ui->push_0->hide();
    ui->push_1->hide();
    ui->push_2->hide();
    ui->push_3->hide();
    ui->push_4->hide();
    ui->push_5->hide();
    ui->push_6->hide();
    ui->push_7->hide();
    ui->push_8->hide();
    klik(8);
    ui->push_0->show();
    ui->push_1->show();
    ui->push_2->show();
    ui->push_3->show();
    ui->push_4->show();
    ui->push_5->show();
    ui->push_6->show();
    ui->push_7->show();
    ui->push_8->show();
}
