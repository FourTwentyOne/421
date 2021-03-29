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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_12;
    QFrame *frame_10;
    QGridLayout *gridLayout_6;
    QFrame *frame_11;
    QGridLayout *gridLayout_8;
    QFrame *frame_4;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label10_13;
    QLabel *label10_14;
    QLabel *label10_15;
    QSpacerItem *horizontalSpacer;
    QLabel *label10_16;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frame_2;
    QGridLayout *gridLayout_9;
    QFrame *frame_3;
    QGridLayout *gridLayout_5;
    QFrame *frame_7;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QLabel *labelBalance;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *labelNumTransactions;
    QLabel *labelStake;
    QLabel *label;
    QLabel *labelUnconfirmed;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frame_5;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QFrame *frame_8;
    QGridLayout *gridLayout_4;
    QFrame *frame_9;
    QGridLayout *gridLayout_3;
    QListView *listTransactions;
    QFrame *frame_6;
    QGridLayout *gridLayout;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(924, 515);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        gridLayout_12 = new QGridLayout(OverviewPage);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(2, 2, 2, 2);
        frame_10 = new QFrame(OverviewPage);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_10);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, -1);
        frame_11 = new QFrame(frame_10);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        frame_4 = new QFrame(frame_11);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(500, 64));
        frame_4->setMaximumSize(QSize(16777215, 200));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(0);
        gridLayout_7 = new QGridLayout(frame_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        label10_13 = new QLabel(frame_4);
        label10_13->setObjectName(QString::fromUtf8("label10_13"));
        label10_13->setMinimumSize(QSize(200, 55));
        label10_13->setMaximumSize(QSize(200, 55));
        label10_13->setScaledContents(false);
        label10_13->setAlignment(Qt::AlignCenter);
        label10_13->setMargin(0);
        label10_13->setIndent(0);
        label10_13->setOpenExternalLinks(true);

        gridLayout_7->addWidget(label10_13, 0, 1, 2, 1);

        label10_14 = new QLabel(frame_4);
        label10_14->setObjectName(QString::fromUtf8("label10_14"));
        label10_14->setMinimumSize(QSize(200, 55));
        label10_14->setMaximumSize(QSize(255, 65));
        label10_14->setScaledContents(false);
        label10_14->setAlignment(Qt::AlignCenter);
        label10_14->setMargin(0);
        label10_14->setIndent(0);
        label10_14->setOpenExternalLinks(true);

        gridLayout_7->addWidget(label10_14, 0, 3, 1, 1);

        label10_15 = new QLabel(frame_4);
        label10_15->setObjectName(QString::fromUtf8("label10_15"));
        label10_15->setMinimumSize(QSize(200, 55));
        label10_15->setMaximumSize(QSize(255, 65));
        label10_15->setScaledContents(false);
        label10_15->setAlignment(Qt::AlignCenter);
        label10_15->setMargin(0);
        label10_15->setIndent(0);
        label10_15->setOpenExternalLinks(true);

        gridLayout_7->addWidget(label10_15, 0, 7, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 2, 1, 1);

        label10_16 = new QLabel(frame_4);
        label10_16->setObjectName(QString::fromUtf8("label10_16"));
        label10_16->setMinimumSize(QSize(200, 55));
        label10_16->setMaximumSize(QSize(255, 65));
        label10_16->setScaledContents(false);
        label10_16->setAlignment(Qt::AlignCenter);
        label10_16->setMargin(0);
        label10_16->setIndent(0);
        label10_16->setOpenExternalLinks(true);

        gridLayout_7->addWidget(label10_16, 0, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 8, 1, 1);


        gridLayout_8->addWidget(frame_4, 1, 0, 1, 1);

        frame_2 = new QFrame(frame_11);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(2, 2, 2, 2);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(0);
        gridLayout_5 = new QGridLayout(frame_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, 2, 2, 2);
        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Plain);
        frame_7->setLineWidth(0);
        gridLayout_2 = new QGridLayout(frame_7);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        frame = new QFrame(frame_7);
        frame->setObjectName(QString::fromUtf8("frame"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        frame->setFont(font);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(-1);
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));

        gridLayout_10->addWidget(labelBalance, 1, 2, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);

        gridLayout_10->addWidget(label_5, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);

        gridLayout_10->addWidget(label_2, 4, 1, 1, 1);

        labelNumTransactions = new QLabel(frame);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));

        gridLayout_10->addWidget(labelNumTransactions, 4, 2, 1, 1);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));

        gridLayout_10->addWidget(labelStake, 2, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_10->addWidget(label, 1, 1, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setText(QString::fromUtf8("<body><p style=\"color:#f8f5f5\";>0 BTC</p></body>"));

        gridLayout_10->addWidget(labelUnconfirmed, 3, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(42, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_10->addWidget(label_3, 3, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_10->addWidget(label_6, 2, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_10, 1, 3, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        frame_5 = new QFrame(frame_7);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(0);
        gridLayout_11 = new QGridLayout(frame_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(200, 200));
        label_7->setMaximumSize(QSize(250, 250));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/res/images/logo.png")));
        label_7->setScaledContents(true);

        gridLayout_11->addWidget(label_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        gridLayout_2->addWidget(frame_5, 0, 0, 1, 1);


        gridLayout_5->addWidget(frame_7, 0, 0, 2, 1);


        gridLayout_9->addWidget(frame_3, 0, 0, 1, 1);

        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_8);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(0, 400));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_9);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        listTransactions = new QListView(frame_9);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy1);
        listTransactions->setMinimumSize(QSize(420, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(85, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush4(QColor(76, 76, 76, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush6(QColor(250, 250, 250, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        listTransactions->setPalette(palette);
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        listTransactions->setFont(font3);
        listTransactions->setStyleSheet(QString::fromUtf8("background:transparent;"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setFrameShadow(QFrame::Plain);
        listTransactions->setLineWidth(0);

        gridLayout_3->addWidget(listTransactions, 0, 0, 1, 1);

        frame_6 = new QFrame(frame_9);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMaximumSize(QSize(16777215, 40));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_6->setLineWidth(0);
        gridLayout = new QGridLayout(frame_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);

        gridLayout_3->addWidget(frame_6, 1, 0, 1, 1);


        gridLayout_4->addWidget(frame_9, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_8, 0, 1, 1, 1);


        gridLayout_8->addWidget(frame_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_11, 0, 0, 1, 1);


        gridLayout_12->addWidget(frame_10, 0, 0, 1, 1);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label10_13->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://discord.gg/f5R29Wr\"><img src=\":/images/res/images/discord.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label10_14->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://421blocks.nerdlabs001.com\"><img src=\":/images/res/images/explorer.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label10_15->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://www.unnamed.exchange/CoinInfo?id=421\"><img src=\":/images/res/images/swap.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label10_16->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><a href=\"https://www.unnamed.exchange/CoinInfo?id=421\"><img src=\":/images/res/images/exchange.png\"/></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";>Nug Count</p></body>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#000000\";># of Transactions></p></body>", 0, QApplication::UnicodeUTF8));
        labelNumTransactions->setText(QApplication::translate("OverviewPage", "<body><p style=\"color:#f8f5f5\";>0 </p></body>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Balance:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Unconfirmed:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Stake:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
