#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQueue>
#include <QMap>

QQueue<QString> que;
QMultiMap<QString, QString> map;
QString* temp = new QString();

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


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    *temp = arg1;
}

void MainWindow::on_AVG_button_clicked()
{
    *temp += " AVG ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_BETWEEN_button_clicked()
{
    *temp += " BETWEEN ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_COUNT_button_clicked()
{
    *temp += " COUNT ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_CREATE_button_clicked()
{
    *temp += " CREATE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_DATABASE_button_clicked()
{
    *temp += " DATABASE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_DATABASES_button_clicked()
{
    *temp += " DATABASES ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_DESCRIBE_button_clicked()
{
    *temp += " DESCRIBE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_DISTINCT_button_clicked()
{
    *temp += " DISTINCT ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_DROP_button_clicked()
{
    *temp += " DROP ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_INSERT_button_clicked()
{
    *temp += " INSERT ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_FOREIGN_button_clicked()
{
    *temp += " FOREIGN ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_FROM_button_clicked()
{
    *temp += " FROM ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_GROUP_BY_button_clicked()
{
    *temp += " GROUP BY ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_HAVING_button_clicked()
{
    *temp += " HAVING ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_IN_button_clicked()
{
    *temp += " IN ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_INTO_button_clicked()
{
    *temp += " INTO ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_JOIN_button_clicked()
{
    *temp += " JOIN ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_KEY_button_clicked()
{
    *temp += " KEY ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_LIKE_button_clicked()
{
    *temp += " LIKE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_MAX_button_clicked()
{
    *temp += " MAX ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_MIN_button_clicked()
{
    *temp += " MIN ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_ORDERED_BY_button_clicked()
{
    *temp += " ORDERED BY ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_PRIMARY_button_clicked()
{
    *temp += " PRIMARY ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_REFERENCE_button_clicked()
{
    *temp += " REFERENCE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_SET_button_clicked()
{
    *temp += " SET ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_SELECT_button_clicked()
{
    *temp += " SELECT ";
    ui->lineEdit->setText(*temp);
}


void MainWindow::on_SHOW_button_clicked()
{
    *temp += " SHOW ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_SOURCE_button_clicked()
{
    *temp += " SOURCE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_SUM_button_clicked()
{
    *temp += " SUM ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_TABLE_button_clicked()
{
    *temp += " TABLE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_TABLES_button_clicked()
{
    *temp += " TABLES ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_UPDATE_button_clicked()
{
    *temp += " UPDATE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_USE_button_clicked()
{
    *temp += " USE ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_VALUES_button_clicked()
{
    *temp += " VALUES ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_VIEW_button_clicked()
{
    *temp += " VIEW ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_WHERE_button_clicked()
{
    *temp += " WHERE ";
    ui->lineEdit->setText(*temp);
}


void MainWindow::on_ENQUEUE_button_clicked()
{
    que.enqueue(*temp);
    QListWidgetItem* current = new QListWidgetItem;
    current->setText(*temp);
    ui->QueueList->addItem(current);
    *temp = " ";
}
