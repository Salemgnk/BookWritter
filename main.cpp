#include <QApplication>
#include "bookwriter.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    BookWriter window;
    window.show();
    return app.exec();
}