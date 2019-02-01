#include "scatterline.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



scatterline::scatterline(const string &name)
{
	Name = name;
}
scatterline::~scatterline()
{
}
void scatterline::create()
{
	setXandY();
	setsize();
}
void scatterline::setXandY()
{
	cout << "enter the posion of the chart : " << endl;
	cout << "x : ";
	cin >> X;
	cout << "y : ";
	cin >> Y;
}
void scatterline::setsize()
{
	cout << "plz enter the hight and widht of object : " << endl;
	cout << "hight : ";
	cin >> hight;
	cout << "widht : ";
	cin >> widht;
}
string scatterline::sayName()
{
	return Name;
}
void scatterline::animOff() {}
void scatterline::animatation(const string &name) {}
string scatterline::sayAnimatName()
{
	string a;
	return a;
}
string scatterline::Export()
{
	float x, y;
	fstream data("data.txt", ios::in);
	if (!data) {
		cout << "file could not be open !!!";
		//		exit(EXIT_FAILURE);
	}
	write1 += "\n\<rect x=\"" + std::to_string(X) + "\" y=\"" + std::to_string(Y) + "\" width =\"" + std::to_string(widht) + "\" height =\"" +
		std::to_string(hight) + "\" fill =\"" + "white" + "\" ";
	write1 += "stroke-width =\"3\"  stroke = \"black\" />";
	write1 += "\n<polyline fill=\"none\" points=\"";
	while (!data.eof())
	{
		data >> x >> y;
		write1 += std::to_string(x);
		write1 += ",";
		write1 += std::to_string(y) + " ";
	}
		write1 += "\" ";
		write1 += "stroke=\"lime\" stroke-width=\"" + std::to_string(3) + "\" />";
	data.clear();
	data.seekg(0);
	return write1;
}
