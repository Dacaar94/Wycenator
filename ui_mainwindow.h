/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowy;
    QAction *actionOtw_rz;
    QAction *actionZapisz;
    QAction *actionZapisz_jako;
    QAction *actionWstecz;
    QAction *actionNaprz_d;
    QAction *actionInstrukcja;
    QAction *actionO_programie;
    QAction *actionO_tw_rcy;
    QAction *actionZako_cz;
    QAction *actionKopiuj;
    QAction *actionWytnij;
    QAction *actionWklej;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_19;
    QSpinBox *spinBox;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_7;
    QToolButton *toolButton_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QComboBox *comboBox;
    QToolButton *toolButton_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QToolButton *toolButton_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QLineEdit *lineEdit_8;
    QLabel *label_18;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QToolButton *toolButton_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpinBox *spinBox_4;
    QToolButton *toolButton_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QSpinBox *spinBox_2;
    QToolButton *toolButton_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QSpinBox *spinBox_3;
    QToolButton *toolButton_8;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_2;
    QToolButton *toolButton_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbDalej3;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetbutton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuEdycja;
    QMenu *menuPomoc;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(690, 494);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionNowy = new QAction(MainWindow);
        actionNowy->setObjectName(QString::fromUtf8("actionNowy"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/iconfinder_new-document-empty-file-sheet_2931173.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNowy->setIcon(icon);
        actionOtw_rz = new QAction(MainWindow);
        actionOtw_rz->setObjectName(QString::fromUtf8("actionOtw_rz"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/iconfinder_document-text-file-sheet-doc_2931167.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOtw_rz->setIcon(icon1);
        actionZapisz = new QAction(MainWindow);
        actionZapisz->setObjectName(QString::fromUtf8("actionZapisz"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/iconfinder_save-guardar-diskette_2931176.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZapisz->setIcon(icon2);
        actionZapisz_jako = new QAction(MainWindow);
        actionZapisz_jako->setObjectName(QString::fromUtf8("actionZapisz_jako"));
        actionZapisz_jako->setIcon(icon2);
        actionWstecz = new QAction(MainWindow);
        actionWstecz->setObjectName(QString::fromUtf8("actionWstecz"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/iconfinder_undo-back-arrow_2931166 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWstecz->setIcon(icon3);
        actionNaprz_d = new QAction(MainWindow);
        actionNaprz_d->setObjectName(QString::fromUtf8("actionNaprz_d"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/iconfinder_redo-forward-arrow_2931165.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNaprz_d->setIcon(icon4);
        actionInstrukcja = new QAction(MainWindow);
        actionInstrukcja->setObjectName(QString::fromUtf8("actionInstrukcja"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/iconfinder_help-support-question-faq_2931179.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInstrukcja->setIcon(icon5);
        actionO_programie = new QAction(MainWindow);
        actionO_programie->setObjectName(QString::fromUtf8("actionO_programie"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/iconfinder_user-account-profile-human-avatar-face-head-_2931147.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionO_programie->setIcon(icon6);
        actionO_tw_rcy = new QAction(MainWindow);
        actionO_tw_rcy->setObjectName(QString::fromUtf8("actionO_tw_rcy"));
        actionO_tw_rcy->setIcon(icon6);
        actionZako_cz = new QAction(MainWindow);
        actionZako_cz->setObjectName(QString::fromUtf8("actionZako_cz"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/img/iconfinder_exit-enter-leave-door-in_2931189.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZako_cz->setIcon(icon7);
        actionKopiuj = new QAction(MainWindow);
        actionKopiuj->setObjectName(QString::fromUtf8("actionKopiuj"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/iconfinder_copy-duplicate-multiply-clone_2931153.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKopiuj->setIcon(icon8);
        actionWytnij = new QAction(MainWindow);
        actionWytnij->setObjectName(QString::fromUtf8("actionWytnij"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/img/iconfinder_cut-scissor-clippers-shear_2931169.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWytnij->setIcon(icon9);
        actionWklej = new QAction(MainWindow);
        actionWklej->setObjectName(QString::fromUtf8("actionWklej"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/iconfinder_paste-clipboard-copy_2931174.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWklej->setIcon(icon10);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabBarAutoHide(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_3 = new QVBoxLayout(tab_1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(7);
        formLayout->setContentsMargins(50, -1, 50, -1);
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(tab_1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(tab_1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(tab_1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(tab_1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(tab_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(tab_1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_3 = new QLabel(tab_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        lineEdit_5 = new QLineEdit(tab_1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(tab_1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_12->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_12);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        formLayout_2->setHorizontalSpacing(0);
        formLayout_2->setVerticalSpacing(30);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_9);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label_6);

        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setLayoutDirection(Qt::LeftToRight);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, radioButton);

        radioButton_2 = new QRadioButton(tab_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, radioButton_2);


        verticalLayout_4->addLayout(formLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        radioButton_3 = new QRadioButton(tab_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_7->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(tab_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_7->addWidget(radioButton_4);

        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_19);

        spinBox = new QSpinBox(tab_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_7->addWidget(spinBox);

        toolButton = new QToolButton(tab_3);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setCursor(QCursor(Qt::WhatsThisCursor));
        toolButton->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_7->addWidget(toolButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);

        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_6->addWidget(checkBox);

        lineEdit_7 = new QLineEdit(tab_3);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_6->addWidget(lineEdit_7);

        toolButton_2 = new QToolButton(tab_3);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_6->addWidget(toolButton_2);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_5->addWidget(label_12);

        comboBox = new QComboBox(tab_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        toolButton_3 = new QToolButton(tab_3);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_5->addWidget(toolButton_3);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_4->addWidget(label_13);

        lineEdit_9 = new QLineEdit(tab_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        horizontalLayout_4->addWidget(lineEdit_9);

        toolButton_4 = new QToolButton(tab_3);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_4->addWidget(toolButton_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_3->addWidget(label_14);

        lineEdit_8 = new QLineEdit(tab_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_3->addWidget(lineEdit_8);

        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_3->addWidget(label_18);

        radioButton_5 = new QRadioButton(tab_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        horizontalLayout_3->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(tab_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        horizontalLayout_3->addWidget(radioButton_6);

        toolButton_5 = new QToolButton(tab_3);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_3->addWidget(toolButton_5);


        verticalLayout_5->addLayout(horizontalLayout_3);

        line = new QFrame(tab_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        spinBox_4 = new QSpinBox(tab_3);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout_8->addWidget(spinBox_4);

        toolButton_6 = new QToolButton(tab_3);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        toolButton_6->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_8->addWidget(toolButton_6);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_9->addWidget(label_16);

        spinBox_2 = new QSpinBox(tab_3);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_9->addWidget(spinBox_2);

        toolButton_7 = new QToolButton(tab_3);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        toolButton_7->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_9->addWidget(toolButton_7);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_10->addWidget(label_17);

        spinBox_3 = new QSpinBox(tab_3);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_10->addWidget(spinBox_3);

        toolButton_8 = new QToolButton(tab_3);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        toolButton_8->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_10->addWidget(toolButton_8);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_13->addWidget(checkBox_2);

        toolButton_9 = new QToolButton(tab_3);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        toolButton_9->setCursor(QCursor(Qt::WhatsThisCursor));

        horizontalLayout_13->addWidget(toolButton_9);


        verticalLayout_5->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_11->addWidget(pushButton_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        pbDalej3 = new QPushButton(tab_3);
        pbDalej3->setObjectName(QString::fromUtf8("pbDalej3"));
        pbDalej3->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_11->addWidget(pbDalej3);


        verticalLayout_5->addLayout(horizontalLayout_11);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetbutton = new QPushButton(centralwidget);
        resetbutton->setObjectName(QString::fromUtf8("resetbutton"));

        horizontalLayout->addWidget(resetbutton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 690, 21));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuEdycja = new QMenu(menubar);
        menuEdycja->setObjectName(QString::fromUtf8("menuEdycja"));
        menuPomoc = new QMenu(menubar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        menuInfo = new QMenu(menuPomoc);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_5->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_3->setBuddy(lineEdit_5);
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuEdycja->menuAction());
        menubar->addAction(menuPomoc->menuAction());
        menuPlik->addAction(actionNowy);
        menuPlik->addAction(actionOtw_rz);
        menuPlik->addAction(actionZapisz);
        menuPlik->addAction(actionZapisz_jako);
        menuPlik->addSeparator();
        menuPlik->addAction(actionZako_cz);
        menuEdycja->addAction(actionWstecz);
        menuEdycja->addAction(actionNaprz_d);
        menuEdycja->addAction(actionKopiuj);
        menuEdycja->addAction(actionWytnij);
        menuEdycja->addAction(actionWklej);
        menuPomoc->addAction(menuInfo->menuAction());
        menuPomoc->addAction(actionInstrukcja);
        menuInfo->addAction(actionO_programie);
        menuInfo->addAction(actionO_tw_rcy);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNowy->setText(QCoreApplication::translate("MainWindow", "Nowy", nullptr));
        actionOtw_rz->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz", nullptr));
        actionZapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        actionZapisz_jako->setText(QCoreApplication::translate("MainWindow", "Zapisz jako", nullptr));
        actionWstecz->setText(QCoreApplication::translate("MainWindow", "Wstecz", nullptr));
        actionNaprz_d->setText(QCoreApplication::translate("MainWindow", "Naprz\303\263d", nullptr));
        actionInstrukcja->setText(QCoreApplication::translate("MainWindow", "Instrukcja", nullptr));
        actionO_programie->setText(QCoreApplication::translate("MainWindow", "O programie", nullptr));
        actionO_tw_rcy->setText(QCoreApplication::translate("MainWindow", "O tw\303\263rcy", nullptr));
        actionZako_cz->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz", nullptr));
        actionKopiuj->setText(QCoreApplication::translate("MainWindow", "Kopiuj", nullptr));
#if QT_CONFIG(shortcut)
        actionKopiuj->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWytnij->setText(QCoreApplication::translate("MainWindow", "Wytnij", nullptr));
#if QT_CONFIG(shortcut)
        actionWytnij->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWklej->setText(QCoreApplication::translate("MainWindow", "Wklej", nullptr));
#if QT_CONFIG(shortcut)
        actionWklej->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Imi\304\231:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nazwisko:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nr Tel.:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "E-mail:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Adres:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Dalej", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Inwestor", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Zdj\304\231cie l", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Zdj\304\231cie", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Opis Nowy obiekt", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Opis Modernizacja", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Nowy obiekt", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Modernizacja", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Wstecz", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Dalej", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Opcja", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Typ budynku:", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Parterowy", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Pi\304\231trowy", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 pi\304\231ter:", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Powierzchnia U\305\274ykowa:", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "m2", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Gara\305\274", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("MainWindow", "m2", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Typ ogrzewania:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Wybierz", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Ogrzewanie pod\305\202ogowe", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Grzejniki", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Ogrzewanie pod\305\202ogowe + grzejniki", nullptr));

        toolButton_3->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Powierchni ogrzewania pod\305\202ogowego:", nullptr));
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("MainWindow", "m2", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Powierzchnia ogrzewana grzejnikami: ", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("MainWindow", "m2", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Grzejniki elektryczne:", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Tak", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Nie", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 mieszka\305\204c\303\263w:", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 uj\304\231\304\207 ciep\305\202ej+ zimnej wody:", nullptr));
        toolButton_7->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 uj\304\231\304\207 zimnej wody:", nullptr));
        toolButton_8->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Wycena kanalizacji", nullptr));
        toolButton_9->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Wstecz", nullptr));
        pbDalej3->setText(QCoreApplication::translate("MainWindow", "Dalej", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "CO/CWU", nullptr));
        resetbutton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menuPlik->setTitle(QCoreApplication::translate("MainWindow", "Plik", nullptr));
        menuEdycja->setTitle(QCoreApplication::translate("MainWindow", "Edycja", nullptr));
        menuPomoc->setTitle(QCoreApplication::translate("MainWindow", "Pomoc", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
