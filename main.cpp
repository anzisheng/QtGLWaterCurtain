#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::addLibraryPath("./plugins"); //增加搜索路径
    QTranslator oTranslator; //翻译
    const bool translatorLoaded = oTranslator.load(":/qt_zh_CN");
    Q_UNUSED(translatorLoaded);//即Q_UNUSED()函数在程序中没有实质性的作用，用来避免编译器警告。
    a.installTranslator(&oTranslator);
    a.setQuitOnLastWindowClosed(false);



    MainWindow w;
    w.show();
    return QCoreApplication::exec();
}
