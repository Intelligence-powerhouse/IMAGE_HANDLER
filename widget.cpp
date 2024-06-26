#include "widget.h"
#include "ui_widget.h"


std::pair<int, int> FindMinMax(const QImage &img)
{
    int minVal = std::numeric_limits<int>::max();
    int maxVal = std::numeric_limits<int>::min();

    for (int y = 0; y < img.height(); ++y)
    {
        for (int x = 0; x < img.width(); ++x)
        {
            QRgb pixel = img.pixel(x, y);
            int gray = qGray(pixel);
            minVal = std::min(minVal, gray);
            maxVal = std::max(maxVal, gray);
        }
    }

    return {minVal, maxVal};
}
QImage adjustLevels(const QImage &img, int change)
{
    QImage output(img.size(), img.format());
    for (int y = 0; y < img.height(); ++y)
    {
        for (int x = 0; x < img.width(); ++x)
        {
            QRgb pixel = img.pixel(x, y);
            int r = qRed(pixel) + change;
            int g = qGreen(pixel) + change;
            int b = qBlue(pixel) + change;

            r = qBound(0, r, 255);
            g = qBound(0, g, 255);
            b = qBound(0, b, 255);

            output.setPixel(x, y, qRgb(r, g, b));
        }
    }
    return output;
}
QPair<QImage, QImage> processImages(QImage &img1,QImage &img2)
{
    for (int i = 0; i < img1.width(); i++)
    {
        for (int j = 0; j < img1.height(); j++)
        {
            QColor color = QColor(img1.pixel(i, j));
            int gray = (int)((color.red() + color.green() + color.blue()) / 3);
            color.setRed(gray);
            color.setGreen(gray);
            color.setBlue(gray);
            img1.setPixel(i, j, color.rgb());
        }
    }
    for (int i = 0; i < img2.width(); i++)
    {
        for (int j = 0; j < img2.height(); j++)
        {
            QColor color = QColor(img2.pixel(i, j));
            int gray = (int)((color.red() + color.green() + color.blue()) / 3);
            color.setRed(gray);
            color.setGreen(gray);
            color.setBlue(gray);
            img2.setPixel(i, j, color.rgb());
        }
    }
    std::pair<int, int> stats1 = FindMinMax(img1);
    std::pair<int, int> stats2 = FindMinMax(img2);

    int img1_change = 128 - stats1.first;
    int img2_change = 127 - stats2.second; // Assuming this logic aligns with your needs

    QImage adjustedImg1 = adjustLevels(img1, img1_change);
    QImage adjustedImg2 = adjustLevels(img2, img2_change);

    return qMakePair(adjustedImg1, adjustedImg2);
}


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , displayImg(QImage())
    ,image1(QImage())
    ,image2(QImage())
    ,previewImg(QImage())
    ,backgroundImg(QImage())
{
    ui->setupUi(this);
    QPalette palette;
    QPixmap background(".//..//..//7.png");
    setAutoFillBackground(true);
    palette.setBrush(QPalette::Window, background);
    setPalette(palette);
    displayImg.load(".//..//..//yuzusoft.png");
    ui->display->setPixmap(QPixmap::fromImage(displayImg));
    ui->pictureImport_1->setVisible(false);
    ui->pictureImport_2->setVisible(false);
    ui->keyEdit->setVisible(false);
    ui->keyEdit_2->setVisible(false);
    ui->pictureEdit_2->setVisible(false);
    ui->pictureEdit->setVisible(false);
    ui->keyLabel->setVisible(false);
    ui->pictureLabel->setVisible(false);
    previewImg=displayImg.copy();
    ui->picture1->setVisible(false);
    ui->picture2->setVisible(false);
    ui->lighter->setVisible(false);
    ui->darker->setVisible(false);
    ui->left->setVisible(false);
    ui->right->setVisible(false);
    ui->left->setText("向左旋转");
    ui->right->setText("向右旋转");
    ui->picture1->setText("表层图片");
    ui->picture2->setText("里层图片");
    ui->pictureImport_1->setText("上下镜像");
    ui->pictureImport_2->setText("左右镜像");
    ui->lighter->setText("加亮");
    ui->darker->setText("加暗");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_importImage_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this,
                QCoreApplication::applicationFilePath());
    displayImg.load(fileName);
    previewImg=displayImg.copy();
    ui->display->setPixmap(QPixmap::fromImage(displayImg));
}

void Widget::on_blackWhite_clicked()
{
    for (int i = 0; i < previewImg.width(); i++)
    {
        for (int j = 0; j < previewImg.height(); j++)
        {
            QColor color = QColor(previewImg.pixel(i, j));
            int gray = (int)((color.red() + color.green() + color.blue()) / 3);
            color.setRed(gray);
            color.setGreen(gray);
            color.setBlue(gray);
            previewImg.setPixel(i, j, color.rgb());
        }
    }
    ui->preview->setPixmap(QPixmap::fromImage(previewImg));
}


void Widget::on_pictureSketch_clicked()
{
    QColor color0;
    QColor color1;
    QColor color2;
    QColor color3;
    int r = 0;
    int g = 0;
    int b = 0;
    int rgb = 0;
    int r1 = 0;
    int g1 = 0;
    int b1 = 0;
    int rgb1 = 0;
    int a = 0;
    for (int i = 1; i < previewImg.width() - 1; i++)
    {
        for (int j = 1; j < previewImg.height() - 1; j++)
        {
            color0 = QColor(previewImg.pixel(i - 1, j - 1));
            color1 = QColor(previewImg.pixel(i - 1, j));
            color2 = QColor(previewImg.pixel(i, j - 1));
            color3 = QColor(previewImg.pixel(i, j));
            r = abs(color0.red() - color3.red());
            g = abs(color0.green() - color3.green());
            b = abs(color0.blue() - color3.blue());
            rgb = r + g + b;
            r1 = abs(color1.red() - color2.red());
            g1 = abs(color1.green() - color2.green());
            b1 = abs(color1.blue() - color2.blue());
            rgb1 = r1 + g1 + b1;
            a = rgb + rgb1;
            a = a > 255 ? 255 : a;
            previewImg.setPixel(i,j, qRgb(a, a, a));

        }
    }
    ui->preview->setPixmap(QPixmap::fromImage(previewImg));
}


void Widget::on_phantomTank_clicked()
{
    // ui->pictureImport_1->setText("表层");
    // ui->pictureImport_2->setText("里层");
    // ui->pictureImport_1->setVisible(true);
    // ui->pictureImport_2->setVisible(true);

    // // 使用局部变量来捕获，确保Lambda表达式中的变量有效
    // bool inner = false;
    // bool outter = false;

    // QEventLoop loop;

    // connect(ui->pictureImport_1, &QPushButton::clicked, this, [this,&inner, &outter, &loop]() {
    //     inner = true;
    //     QString fileName=QFileDialog::getOpenFileName(this,
    //                 QCoreApplication::applicationFilePath());
    //     image1.load(fileName);
    //     if (inner && outter) {
    //         loop.quit();
    //     }
    // });

    // connect(ui->pictureImport_2, &QPushButton::clicked, this, [this,&inner, &outter, &loop]() {
    //     outter = true;
    //     QString fileName=QFileDialog::getOpenFileName(this,
    //                 QCoreApplication::applicationFilePath());
    //     image2.load(fileName);
    //     if (inner && outter) {
    //         loop.quit();
    //     }
    // });

    // loop.exec();
    // inner=false;
    // outter=false;
    // // 处理图片数据
    // QImage image1Scaled = image1.scaled(image2.size());
    // previewImg=image1Scaled.copy();

    // for (int y = 0; y < image1Scaled.height(); ++y) {
    //     for (int x = 0; x < image1Scaled.width(); ++x) {
    //         QRgb pixel1 = image1Scaled.pixel(x, y);
    //         QRgb pixel2 = image2.pixel(x, y);

    //         int pa = qGray(pixel1);
    //         int pb = qGray(pixel2) * 0.35;
    //         if (pa < 100) {
    //             pa = 100;
    //         }
    //         int alpha = 255 - (pa - pb);
    //         if (alpha == 0) {
    //             alpha = 1;
    //         }
    //         int pc = 255 * pb / alpha;

    //         previewImg.setPixel(x, y, qRgba(pc, pc, pc, alpha));
    //     }
    // }
    // // 更新UI
    // ui->preview->setPixmap(QPixmap::fromImage(previewImg));



    ui->picture1->setVisible(true);
    ui->picture2->setVisible(true);
    ui->pictureImport_1->setVisible(false);
    ui->pictureImport_2->setVisible(false);
    ui->lighter->setVisible(false);
    ui->darker->setVisible(false);
    ui->left->setVisible(false);
    ui->right->setVisible(false);
    // 使用局部变量来捕获，确保Lambda表达式中的变量有效
    inner = false;
    outter = false;



    connect(ui->picture1, &QPushButton::clicked, this, [&]() {
        inner = true;
        QString fileName=QFileDialog::getOpenFileName(this,
                    QCoreApplication::applicationFilePath());
        image1.load(fileName);
        if (inner && outter) {
            inner = false;
            outter = false;
            QImage image1Scaled = image1.scaled(image2.size());
            previewImg=image1.copy();
            QImage img1 = image1Scaled.convertToFormat(QImage::Format_ARGB32);
            QImage img2 = image2.convertToFormat(QImage::Format_ARGB32);
            std::pair<QImage,QImage> img = processImages(img1, img2);
            img1=img.first;
            img2=img.second;
            QImage result(img1.width(), img1.height(), QImage::Format_ARGB32);
            for (int y = 0; y < img1.height(); ++y)
            {
                for (int x = 0; x < img1.width(); ++x)
                {


                    QRgb pixel1 = img1.pixel(x, y);
                    QRgb pixel2 = img2.pixel(x, y);
                    int avg1 = (qRed(pixel1) + qGreen(pixel1) + qBlue(pixel1)) / 3;
                    int avg2 = (qRed(pixel2) + qGreen(pixel2) + qBlue(pixel2)) / 3;

                    int alpha = std::max(1, avg2 - avg1 + 255); // 防止除以零
                    int r = qRed(pixel2) * 255 / alpha;
                    int g = qGreen(pixel2) * 255 / alpha;
                    int b = qBlue(pixel2) * 255 / alpha;

                    result.setPixel(x, y, qRgba(r, g, b, alpha));
                }
            }
            previewImg = result;
            ui->preview->setPixmap(QPixmap::fromImage(previewImg));
        }
    });

    connect(ui->picture2, &QPushButton::clicked, this, [&]() {
        outter = true;
        QString fileName=QFileDialog::getOpenFileName(this,
                    QCoreApplication::applicationFilePath());
        image2.load(fileName);
        if (inner && outter) {
            inner = false;
            outter = false;
            QImage image1Scaled = image1.scaled(image2.size());
            previewImg=image1.copy();
            QImage img1 = image1Scaled.convertToFormat(QImage::Format_ARGB32);
            QImage img2 = image2.convertToFormat(QImage::Format_ARGB32);
            std::pair<QImage,QImage> img = processImages(img1, img2);
            img1=img.first;
            img2=img.second;
            QImage result(img1.width(), img1.height(), QImage::Format_ARGB32);
            for (int y = 0; y < img1.height(); ++y)
            {
                for (int x = 0; x < img1.width(); ++x)
                {


                    QRgb pixel1 = img1.pixel(x, y);
                    QRgb pixel2 = img2.pixel(x, y);
                    int avg1 = (qRed(pixel1) + qGreen(pixel1) + qBlue(pixel1)) / 3;
                    int avg2 = (qRed(pixel2) + qGreen(pixel2) + qBlue(pixel2)) / 3;

                    int alpha = std::max(1, avg2 - avg1 + 255); // 防止除以零
                    int r = qRed(pixel2) * 255 / alpha;
                    int g = qGreen(pixel2) * 255 / alpha;
                    int b = qBlue(pixel2) * 255 / alpha;

                    result.setPixel(x, y, qRgba(r, g, b, alpha));
                }
            }
            previewImg = result;
            ui->preview->setPixmap(QPixmap::fromImage(previewImg));
        }
    });
}


void Widget::on_pictureImport_2_clicked()
{


}


void Widget::on_pictureImport_1_clicked()
{


}


void Widget::on_saveImage_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("*.png"));
    previewImg.save(fileName);
}


void Widget::on_pictureMirror_clicked()
{

    ui->pictureImport_1->setVisible(true);
    ui->pictureImport_2->setVisible(true);
    ui->picture1->setVisible(false);
    ui->picture2->setVisible(false);
    ui->lighter->setVisible(false);
    ui->darker->setVisible(false);
    ui->left->setVisible(false);
    ui->right->setVisible(false);
    connect(ui->pictureImport_1,&QPushButton::clicked,this,
            [&](){

                {
                    QPainter painterLeft(&previewImg);
                    painterLeft.drawImage(0, 0, previewImg.mirrored(false, true));
                    painterLeft.end();
                }
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
                ui->preview->setScaledContents(true);
    });
        connect(ui->pictureImport_2,&QPushButton::clicked,this,
            [&](){

                {
                    QPainter painterRight(&previewImg);
                    painterRight.drawImage(0, 0, previewImg.mirrored(true, false));
                    painterRight.end();
                }
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
                ui->preview->setScaledContents(true);
}) ;

}


void Widget::on_pictureCoding_clicked()
{
    ui->keyEdit->setVisible(true);
    ui->pictureEdit->setVisible(true);
    ui->keyLabel->setVisible(true);
    ui->pictureLabel->setVisible(true);
    ui->keyEdit_2->setVisible(false);
    ui->pictureEdit_2->setVisible(false);
    this->Key=ui->keyEdit->text();
    coding=true;
    if(this->Key=="")
    {
        return;
    }
    QByteArray key=Key.toUtf8();
    QByteArray b;//用来存储转换后的图像数据
    QBuffer buffer(&b);//创建对象buffer
    buffer.open(QIODevice::WriteOnly);//只写模式打开buffer
    displayImg.save(&buffer, "PNG");  //以PNG形式保存到buffer
    for (int i = 0; i < b.size(); ++i)
    {
        b[i] = b[i] ^ key[i % key.size()];
    }//循环实现异或加密
    ui->pictureEdit->setText(b.toBase64());//返回Base64编码的字符串
    coding=false;
}


void Widget::on_pictureRotate_clicked()
{

    ui->pictureImport_1->setVisible(false);
    ui->pictureImport_2->setVisible(false);
    ui->picture1->setVisible(false);
    ui->picture2->setVisible(false);
    ui->lighter->setVisible(false);
    ui->darker->setVisible(false);
    ui->left->setVisible(true);
    ui->right->setVisible(true);
    connect(ui->left, &QPushButton::clicked, this,
            [&]()
            {
                previewImg = previewImg.transformed(QTransform().rotate(-90));
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
                ui->preview->setScaledContents(true);
            });
    connect(ui->right, &QPushButton::clicked, this,
            [&]()
            {
                previewImg = previewImg.transformed(QTransform().rotate(90));
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
                ui->preview->setScaledContents(true);
            });

}


void Widget::on_keyEdit_returnPressed()
{
    this->on_pictureCoding_clicked();
}


void Widget::on_lightChange_clicked()
{

    ui->pictureImport_1->setVisible(false);
    ui->pictureImport_2->setVisible(false);
    ui->picture1->setVisible(false);
    ui->picture2->setVisible(false);
    ui->lighter->setVisible(true);
    ui->darker->setVisible(true);
    ui->left->setVisible(false);
    ui->right->setVisible(false);
    int value=0;
    ui->preview->setPixmap(QPixmap::fromImage(previewImg));
    connect(ui->lighter, &QPushButton::clicked, this,
            [&]()
            {
                value=30;
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
                QImage image=previewImg.copy();
                int red, green, blue;
                for (int i = 0; i < image.width(); ++i)
                {
                    for(int j = 0;j < image.height();++j)
                    {
                        red = qRed(image.pixel(i,j)) + value;
                        red = (red < 0x00) ? 0x00 : (red > 0xff) ? 0xff:red;
                        green = qGreen(image.pixel(i,j)) + value;
                        green = (green < 0x00) ? 0x00 : (green > 0xff) ? 0xff: green;
                        blue = qBlue(image.pixel(i,j)) + value;
                        blue = (blue < 0x00) ? 0x00 : (blue > 0xff) ? 0xff: blue;
                        image.setPixel(i,j,qRgba(red,green,blue,qAlpha(image.pixel(i,j))));

                    }
                }
                previewImg = image.copy();
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
            });
    connect(ui->darker, &QPushButton::clicked, this,
            [&]()
            {
                value=-30;
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
                QImage image=previewImg.copy();
                int red, green, blue;
                for (int i = 0; i < image.width(); ++i)
                {
                    for(int j = 0;j < image.height();++j)
                    {
                        red = qRed(image.pixel(i,j)) + value;
                        red = (red < 0x00) ? 0x00 : (red > 0xff) ? 0xff:red;
                        green = qGreen(image.pixel(i,j)) + value;
                        green = (green < 0x00) ? 0x00 : (green > 0xff) ? 0xff: green;
                        blue = qBlue(image.pixel(i,j)) + value;
                        blue = (blue < 0x00) ? 0x00 : (blue > 0xff) ? 0xff: blue;
                        image.setPixel(i,j,qRgba(red,green,blue,qAlpha(image.pixel(i,j))));

                    }
                }
                previewImg = image.copy();
                ui->preview->setPixmap(QPixmap::fromImage(previewImg));
            });

}


void Widget::on_pictureDecoding_clicked()
{
    ui->keyEdit->setVisible(false);
    ui->pictureEdit->setVisible(false);
    ui->keyLabel->setVisible(true);
    ui->pictureLabel->setVisible(true);
    ui->keyEdit_2->setVisible(true);
    ui->pictureEdit_2->setVisible(true);
    QString base64String=ui->pictureEdit_2->text();
    this->Key=ui->keyEdit_2->text();
    decoding=true;
    if(this->Key=="")
    {
        return;
    }
    QByteArray key=Key.toUtf8();
    QByteArray b = QByteArray::fromBase64(base64String.toUtf8());//将base64string类型转换成qbytearray类型
    for (int i = 0; i < b.size(); ++i)
    {
        b[i] = b[i] ^ key[i % key.size()];
    }//同样进行解密
    previewImg.loadFromData(b,"PNG");
    ui->preview->setPixmap(QPixmap::fromImage(previewImg));
    decoding=false;
}




void Widget::on_keyEdit_2_returnPressed()
{
    this->on_pictureDecoding_clicked();
}

