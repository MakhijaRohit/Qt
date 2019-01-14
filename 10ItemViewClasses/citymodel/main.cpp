#include <QApplication>
#include <QHeaderView>
#include <QTableView>

#include "citymodel.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QStringList cities;
    cities << "Indore" << "Pune" << "Mumbai" << "Delhi"
           << "Ujjain" << "Jaipur" << "Kota" << "Ajmer"
           << "Amritsar" << "Agra" << "Ratnagiri" << "Shirpur"
           << "Nashik" << "Dhule" << "Shirdi" << "Jammu";

    CityModel cityModel;
    cityModel.setCities(cities);

    QTableView tableView;
    tableView.setModel(&cityModel);
    tableView.setAlternatingRowColors(true);
    tableView.setWindowTitle(QObject::tr("Cities"));
    tableView.show();

    return app.exec();
}
