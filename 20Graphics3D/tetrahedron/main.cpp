#include <QApplication>
#include <iostream>

#include "tetrahedron.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    if(!QGLFormat::hasOpenGL())
    {
        std::cerr << "Open GL ka Support nhi hai isme" << std::endl;
        return 1;
    }

    Tetrahedron tetrahedron;
    tetrahedron.setWindowTitle(QObject::tr("ROHIT MAKHIJA - Qt OpenGL - Tetrahedron"));
    tetrahedron.resize(1920,1080);
    tetrahedron.show();
    return app.exec();
}
