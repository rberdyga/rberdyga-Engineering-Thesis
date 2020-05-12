#include "mainwindow.h"

#include "dcmtk/dcmimgle/dcmimage.h"
#include "dcmtk/dcmimgle/dipixel.h"
#include "dcmtk/dcmimgle/diimage.h"
#include "dcmtk/dcmimgle/dimo1img.h"
#include "dcmtk/dcmimgle/dimo2img.h"
#include "dcmtk/dcmdata/dctk.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto *image = new DicomImage("test.dcm");

    std::cout << "hell yeah!";

    MainWindow w;
    w.show();
    return QApplication::exec();
}
