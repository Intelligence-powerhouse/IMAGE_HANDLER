/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *importImage;
    QPushButton *saveImage;
    QFrame *frame;
    QLabel *function;
    QPushButton *phantomTank;
    QPushButton *pictureCoding;
    QPushButton *blackWhite;
    QPushButton *pictureDecoding;
    QPushButton *lightChange;
    QPushButton *pictureMirror;
    QPushButton *pictureSketch;
    QPushButton *pictureRotate;
    QLabel *display;
    QLabel *preview;
    QPushButton *pictureImport_1;
    QPushButton *pictureImport_2;
    QLineEdit *keyEdit;
    QLineEdit *pictureEdit;
    QLabel *keyLabel;
    QLabel *pictureLabel;
    QPushButton *picture1;
    QPushButton *picture2;
    QPushButton *lighter;
    QPushButton *darker;
    QPushButton *left;
    QPushButton *right;
    QLineEdit *pictureEdit_2;
    QLineEdit *keyEdit_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1600, 900);
        importImage = new QPushButton(Widget);
        importImage->setObjectName("importImage");
        importImage->setGeometry(QRect(380, 740, 151, 61));
        saveImage = new QPushButton(Widget);
        saveImage->setObjectName("saveImage");
        saveImage->setGeometry(QRect(1160, 740, 151, 61));
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 20, 151, 761));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        function = new QLabel(frame);
        function->setObjectName("function");
        function->setGeometry(QRect(30, 60, 101, 41));
        phantomTank = new QPushButton(frame);
        phantomTank->setObjectName("phantomTank");
        phantomTank->setGeometry(QRect(20, 120, 93, 28));
        pictureCoding = new QPushButton(frame);
        pictureCoding->setObjectName("pictureCoding");
        pictureCoding->setGeometry(QRect(20, 170, 93, 28));
        blackWhite = new QPushButton(frame);
        blackWhite->setObjectName("blackWhite");
        blackWhite->setGeometry(QRect(20, 270, 93, 28));
        pictureDecoding = new QPushButton(frame);
        pictureDecoding->setObjectName("pictureDecoding");
        pictureDecoding->setGeometry(QRect(20, 220, 93, 28));
        lightChange = new QPushButton(frame);
        lightChange->setObjectName("lightChange");
        lightChange->setGeometry(QRect(20, 320, 93, 28));
        pictureMirror = new QPushButton(frame);
        pictureMirror->setObjectName("pictureMirror");
        pictureMirror->setGeometry(QRect(20, 380, 93, 28));
        pictureSketch = new QPushButton(frame);
        pictureSketch->setObjectName("pictureSketch");
        pictureSketch->setGeometry(QRect(20, 430, 93, 28));
        pictureRotate = new QPushButton(frame);
        pictureRotate->setObjectName("pictureRotate");
        pictureRotate->setGeometry(QRect(20, 480, 93, 28));
        display = new QLabel(Widget);
        display->setObjectName("display");
        display->setGeometry(QRect(260, 190, 512, 288));
        display->setAutoFillBackground(false);
        display->setScaledContents(true);
        preview = new QLabel(Widget);
        preview->setObjectName("preview");
        preview->setGeometry(QRect(970, 190, 512, 288));
        preview->setMaximumSize(QSize(3600, 16777215));
        preview->setScaledContents(true);
        pictureImport_1 = new QPushButton(Widget);
        pictureImport_1->setObjectName("pictureImport_1");
        pictureImport_1->setGeometry(QRect(610, 740, 151, 61));
        pictureImport_2 = new QPushButton(Widget);
        pictureImport_2->setObjectName("pictureImport_2");
        pictureImport_2->setGeometry(QRect(880, 740, 151, 61));
        keyEdit = new QLineEdit(Widget);
        keyEdit->setObjectName("keyEdit");
        keyEdit->setGeometry(QRect(520, 670, 821, 41));
        pictureEdit = new QLineEdit(Widget);
        pictureEdit->setObjectName("pictureEdit");
        pictureEdit->setGeometry(QRect(520, 620, 821, 41));
        keyLabel = new QLabel(Widget);
        keyLabel->setObjectName("keyLabel");
        keyLabel->setGeometry(QRect(430, 670, 51, 31));
        pictureLabel = new QLabel(Widget);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setGeometry(QRect(410, 630, 81, 19));
        picture1 = new QPushButton(Widget);
        picture1->setObjectName("picture1");
        picture1->setGeometry(QRect(610, 740, 151, 61));
        picture2 = new QPushButton(Widget);
        picture2->setObjectName("picture2");
        picture2->setGeometry(QRect(880, 740, 151, 61));
        lighter = new QPushButton(Widget);
        lighter->setObjectName("lighter");
        lighter->setGeometry(QRect(610, 740, 151, 61));
        darker = new QPushButton(Widget);
        darker->setObjectName("darker");
        darker->setGeometry(QRect(880, 740, 151, 61));
        left = new QPushButton(Widget);
        left->setObjectName("left");
        left->setGeometry(QRect(610, 740, 151, 61));
        right = new QPushButton(Widget);
        right->setObjectName("right");
        right->setGeometry(QRect(880, 740, 151, 61));
        pictureEdit_2 = new QLineEdit(Widget);
        pictureEdit_2->setObjectName("pictureEdit_2");
        pictureEdit_2->setGeometry(QRect(520, 620, 821, 41));
        keyEdit_2 = new QLineEdit(Widget);
        keyEdit_2->setObjectName("keyEdit_2");
        keyEdit_2->setGeometry(QRect(520, 670, 821, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        importImage->setText(QCoreApplication::translate("Widget", "\345\257\274\345\205\245", nullptr));
        saveImage->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        function->setText(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\346\270\205\345\215\225", nullptr));
        phantomTank->setText(QCoreApplication::translate("Widget", "\345\271\273\345\275\261\345\235\246\345\205\213", nullptr));
        pictureCoding->setText(QCoreApplication::translate("Widget", "\345\233\276\347\211\207\345\212\240\345\257\206", nullptr));
        blackWhite->setText(QCoreApplication::translate("Widget", "\351\273\221\347\231\275\345\233\276\347\211\207", nullptr));
        pictureDecoding->setText(QCoreApplication::translate("Widget", "\345\233\276\347\211\207\350\247\243\345\257\206", nullptr));
        lightChange->setText(QCoreApplication::translate("Widget", "\344\272\256\345\272\246\350\260\203\350\212\202", nullptr));
        pictureMirror->setText(QCoreApplication::translate("Widget", "\345\233\276\345\203\217\351\225\234\345\203\217", nullptr));
        pictureSketch->setText(QCoreApplication::translate("Widget", "\345\233\276\347\211\207\347\264\240\346\217\217", nullptr));
        pictureRotate->setText(QCoreApplication::translate("Widget", "\345\233\276\347\211\207\346\227\213\350\275\254", nullptr));
        display->setText(QString());
        preview->setText(QString());
        pictureImport_1->setText(QCoreApplication::translate("Widget", "\350\241\250\345\261\202\345\233\276\347\211\207", nullptr));
        pictureImport_2->setText(QCoreApplication::translate("Widget", "\351\207\214\345\261\202\345\233\276\347\211\207", nullptr));
        keyLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\257\206\351\222\245</span></p></body></html>", nullptr));
        pictureLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\212\240\345\257\206\345\233\276\347\211\207</span></p></body></html>", nullptr));
        picture1->setText(QCoreApplication::translate("Widget", "\350\241\250\345\261\202\345\233\276\347\211\207", nullptr));
        picture2->setText(QCoreApplication::translate("Widget", "\351\207\214\345\261\202\345\233\276\347\211\207", nullptr));
        lighter->setText(QCoreApplication::translate("Widget", "\350\241\250\345\261\202\345\233\276\347\211\207", nullptr));
        darker->setText(QCoreApplication::translate("Widget", "\351\207\214\345\261\202\345\233\276\347\211\207", nullptr));
        left->setText(QCoreApplication::translate("Widget", "\350\241\250\345\261\202\345\233\276\347\211\207", nullptr));
        right->setText(QCoreApplication::translate("Widget", "\351\207\214\345\261\202\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
