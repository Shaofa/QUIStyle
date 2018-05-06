/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox_3;
    QRadioButton *radioButton_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(725, 940);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(80, 30, 60, -1);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(20);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_3->addWidget(checkBox_2, 1, 2, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_3->addWidget(checkBox, 1, 1, 1, 1);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_3->addWidget(radioButton, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_3->addWidget(radioButton_2, 0, 2, 1, 1);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_3->addWidget(checkBox_3, 1, 3, 1, 1);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_3->addWidget(radioButton_3, 0, 3, 1, 1);


        gridLayout_2->addWidget(groupBox, 4, 0, 1, 1);

        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableWidget, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);

        gridLayout_2->addWidget(pushButton_3, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 1, 0, 1, 1);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 2, 0, 1, 1);

        treeWidget = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(200);

        gridLayout_2->addWidget(treeWidget, 6, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "TabBar1", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox2", 0));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox1", 0));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton1", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton2", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "CheckBox3", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton3", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "C1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "C2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "C3", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "item11", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "item12", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "item13", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "item21", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "item22", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "item23", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
        lineEdit_4->setText(QApplication::translate("MainWindow", "LineEdit", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ComboBox Item1", 0)
         << QApplication::translate("MainWindow", "ComboBox Item2", 0)
         << QApplication::translate("MainWindow", "ComboBox Item3", 0)
         << QApplication::translate("MainWindow", "ComboBox Item4", 0)
         << QApplication::translate("MainWindow", "ComboBox Item5", 0)
         << QApplication::translate("MainWindow", "ComboBox Item6", 0)
         << QApplication::translate("MainWindow", "ComboBox Item7", 0)
         << QApplication::translate("MainWindow", "ComboBox Item8", 0)
         << QApplication::translate("MainWindow", "ComboBox Item9", 0)
         << QApplication::translate("MainWindow", "ComboBox Item10", 0)
         << QApplication::translate("MainWindow", "ComboBox Item11", 0)
        );
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "col2", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "col1", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Root", 0));

        const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "child1", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(2, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "child2", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(2, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem3->setText(1, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "child3", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(2, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWindow", "item", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "child4", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "child5", 0));
        treeWidget->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "TabBar2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
