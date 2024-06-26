

#ifndef WIDGET_H
#define WIDGET_H
#include <key.h>
#include <QWidget>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QImage>
#include <QImageReader>
#include <QImageWriter>
#include <QPixmap>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QEventLoop>
#include <QBuffer>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_importImage_clicked();

    void on_blackWhite_clicked();

    void on_pictureImport_2_clicked();

    void on_pictureSketch_clicked();

    void on_phantomTank_clicked();



    void on_pictureImport_1_clicked();

    void on_saveImage_clicked();

    void on_pictureMirror_clicked();

    void on_pictureCoding_clicked();

    void on_pictureRotate_clicked();

    void on_keyEdit_returnPressed();

    void on_lightChange_clicked();

    void on_pictureDecoding_clicked();


    void on_keyEdit_2_returnPressed();

private:
    Ui::Widget *ui;
    QImage displayImg;
    QImage image1;
    QImage image2;
    QImage previewImg;
    QString Key;
    bool coding=false;
    bool decoding=false;
    bool inner = false;
    bool outter = false;
    QImage backgroundImg;


};
#endif // WIDGET_H
