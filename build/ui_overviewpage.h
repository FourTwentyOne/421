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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_7;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QLabel *label10_15;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label10_13;
    QSpacerItem *horizontalSpacer;
    QLabel *label10_14;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_6;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QListView *listTransactions;
    QFrame *frame_7;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QLabel *labelNumTransactions;
    QLabel *label_2;
    QLabel *label_5;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(892, 553);
        gridLayout_7 = new QGridLayout(OverviewPage);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        frame_3 = new QFrame(OverviewPage);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(0);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 100));
        frame_4->setMaximumSize(QSize(16777215, 100));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(0);
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label10_15 = new QLabel(frame_4);
        label10_15->setObjectName(QString::fromUtf8("label10_15"));
        label10_15->setMinimumSize(QSize(255, 65));
        label10_15->setMaximumSize(QSize(255, 65));
        label10_15->setScaledContents(false);
        label10_15->setAlignment(Qt::AlignCenter);
        label10_15->setMargin(0);
        label10_15->setIndent(0);
        label10_15->setOpenExternalLinks(true);

        gridLayout->addWidget(label10_15, 0, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        label10_13 = new QLabel(frame_4);
        label10_13->setObjectName(QString::fromUtf8("label10_13"));
        label10_13->setMinimumSize(QSize(200, 55));
        label10_13->setMaximumSize(QSize(200, 55));
        label10_13->setScaledContents(false);
        label10_13->setAlignment(Qt::AlignCenter);
        label10_13->setMargin(0);
        label10_13->setIndent(0);
        label10_13->setOpenExternalLinks(true);

        gridLayout->addWidget(label10_13, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label10_14 = new QLabel(frame_4);
        label10_14->setObjectName(QString::fromUtf8("label10_14"));
        label10_14->setMinimumSize(QSize(255, 65));
        label10_14->setMaximumSize(QSize(255, 65));
        label10_14->setScaledContents(false);
        label10_14->setAlignment(Qt::AlignCenter);
        label10_14->setMargin(0);
        label10_14->setIndent(0);
        label10_14->setOpenExternalLinks(true);

        gridLayout->addWidget(label10_14, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 6, 1, 1);


        gridLayout_3->addWidget(frame_4, 2, 0, 1, 2);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(421, 0));
        frame_2->setMaximumSize(QSize(421, 16777215));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(-1);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_6->setLineWidth(0);
        gridLayout_6 = new QGridLayout(frame_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_6);

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


        gridLayout_3->addWidget(frame_2, 0, 1, 2, 1);

        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Plain);
        frame_7->setLineWidth(0);
        gridLayout_2 = new QGridLayout(frame_7);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(frame_7);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(-1);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 1, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));

        gridLayout_4->addWidget(labelBalance, 1, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 2, 1, 1, 1);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));

        gridLayout_4->addWidget(labelStake, 2, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 3, 1, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));

        gridLayout_4->addWidget(labelUnconfirmed, 3, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        labelNumTransactions = new QLabel(frame);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));

        gridLayout_4->addWidget(labelNumTransactions, 4, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 4, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        gridLayout_4->addWidget(label_5, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_5 = new QFrame(frame_7);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(0);
        gridLayout_5 = new QGridLayout(frame_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(180, 180));
        label_7->setMaximumSize(QSize(180, 180));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/res/images/logo.png")));
        label_7->setScaledContents(true);

        gridLayout_5->addWidget(label_7, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        gridLayout_2->addWidget(frame_5, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_7, 0, 0, 2, 1);


        gridLayout_7->addWidget(frame_3, 0, 0, 2, 2);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label10_15->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://www.unnamed.exchange/CoinInfo?id=421\"><img src=\":/images/res/images/exchange.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label10_13->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://discord.gg/f5R29Wr\"><img src=\":/images/res/images/discord.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label10_14->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://421blocks.nerdlabs001.com\"><img src=\":/images/res/images/explorer.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Recent Transactions</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Balance:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Stake:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Unconfirmed:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelNumTransactions->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#f8f5f5\";>0 </p></body>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";># of Transactions></p></body>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";>Nug Count</p></body>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
