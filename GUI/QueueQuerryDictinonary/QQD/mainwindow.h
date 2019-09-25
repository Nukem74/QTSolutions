#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_SELECT_button_clicked();

    void on_AVG_button_clicked();

    void on_BETWEEN_button_clicked();

    void on_COUNT_button_clicked();

    void on_CREATE_button_clicked();

    void on_DATABASE_button_clicked();

    void on_DATABASES_button_clicked();

    void on_DESCRIBE_button_clicked();

    void on_DISTINCT_button_clicked();

    void on_DROP_button_clicked();

    void on_INSERT_button_clicked();

    void on_FOREIGN_button_clicked();

    void on_FROM_button_clicked();

    void on_GROUP_BY_button_clicked();

    void on_HAVING_button_clicked();

    void on_IN_button_clicked();

    void on_INTO_button_clicked();

    void on_JOIN_button_clicked();

    void on_KEY_button_clicked();

    void on_LIKE_button_clicked();

    void on_MAX_button_clicked();

    void on_MIN_button_clicked();

    void on_ORDERED_BY_button_clicked();

    void on_PRIMARY_button_clicked();

    void on_REFERENCE_button_clicked();

    void on_SET_button_clicked();

    void on_SHOW_button_clicked();

    void on_SOURCE_button_clicked();

    void on_SUM_button_clicked();

    void on_TABLE_button_clicked();

    void on_TABLES_button_clicked();

    void on_UPDATE_button_clicked();

    void on_USE_button_clicked();

    void on_VALUES_button_clicked();

    void on_VIEW_button_clicked();

    void on_WHERE_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
