#include <QApplication>
#include <iostream>

#include "teapots.h"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    if(!QGLFormat::hasOpenGL())
    {
        std::cerr << "This system has no OpenGL support" << std::endl;
        return 1;
    }

    if(!QGLFramebufferObject::hasOpenGLFramebufferObjects())
    {
        std::cerr << "This system has no framebuffer object support" << std::endl;
        return 1;
    }

    Teapots teapots;
    teapots.setWindowTitle(QObject::tr("ROHIT MAKHIJA Qt OpenGL - Teapots"));
    teapots.resize(1920, 1080);
    teapots.show();

    return app.exec();
}
