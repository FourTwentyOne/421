/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QFrame *frame_3;
    QFrame *frame;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_2;
    QLabel *labelNumTransactions;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_5;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QListView *listTransactions;
    QFrame *frame_4;
    QFrame *frame_5;
    QLabel *label_7;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(892, 553);
        frame_3 = new QFrame(OverviewPage);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(9, 9, 841, 521));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 170, 300, 195));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(-1);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 50, 62, 17));
        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setGeometry(QRect(147, 50, 39, 17));
        labelBalance->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 137, 126, 17));
        labelNumTransactions = new QLabel(frame);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));
        labelNumTransactions->setGeometry(QRect(147, 137, 16, 17));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 108, 98, 17));
        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setGeometry(QRect(147, 108, 39, 17));
        labelUnconfirmed->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(9, 79, 47, 17));
        labelStake = new QLabel(frame);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setGeometry(QRect(147, 79, 39, 17));
        labelStake->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(9, 21, 76, 17));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(316, 10, 511, 281));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(-1);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        listTransactions->setPalette(palette);
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(listTransactions);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 399, 821, 111));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 10, 311, 151));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 0, 150, 150));
        label_7->setMinimumSize(QSize(150, 150));
        label_7->setMaximumSize(QSize(150, 150));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/res/images/logo.png")));
        label_7->setScaledContents(true);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";>Balance></p></body>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";># of Transactions></p></body>", 0, QApplication::UnicodeUTF8));
        labelNumTransactions->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#f8f5f5\";>0 </p></body>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";>Unconfirmed></p></body>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";>Stake></p></body>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";>Nug Count</p></body>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OverviewPage", "<body><b><p style=\"color:#000000\";>Recent Transactions<b/></p></body>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
