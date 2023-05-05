#include <iostream>
#include "road.h"
#include <QTWidgets>
class MainWindow : public QMainWindow {
public:
	MainWindow(Road* _road);
private:
	QLabel* widthLabel;

};

MainWindow::MainWindow(Road* _road) {
	resize(1110, 330);
	setWindowTitle("Road in Window");
	widthLabel = new QLabel(this);
	widthLabel->setGeometry(0, 0, 1000, 300);
	widthLabel->setFont(QFont("Times", 72, QFont::Bold));
	widthLabel->setText("Width: " + QString::number(_road->Width));

}
int main(int argc, char* argv[]) {

	using namespace std;
	cout << "Test v6.03: OK.\n";
	Road road;
	cout << "Before Road width" << road.Width << endl;
	road.Width = 3;
	cout << "After Road width" << road.Width << endl;

	QApplication app(argc, argv);
	MainWindow mainWin(&road);
	mainWin.show();

	return app.exec();
}
test63.pro
QT + widgets
SOURCES += main.cpp road.cpp road.h
road.cpp
#include "road.h"

Road::Road() {
	Length = 330;
	Width = 1;
}
road.h
#ifndef ROAD_H
#define ROAD_H

class Road {
public:
	Road();
	double Length;
	int    Width;
};
#endif
