#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "shape.h"
#include "line.h"
using namespace std;
line::line(const string &name)
{
	Name = name;
}
void line::create()
{
	setXandY();
	setColor();
}
string line::sayName()
{
	return Name;
}
void line::setXandY()
{
	cout << "enter the position of your line " << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
}
void line::setColor()
{
	cout << "Do you want to set color (yes or no) :";
	string holder;
	cin >> holder;
	if (holder != "no")
		cin >> color;
	cout << "and do you want to set stroke width (yes or no) : ";
	cin >> holder;
	if (holder != "no")
		cin >> strokeWidht;
}
string line::Export()
{
	write1 += "\n<line x1=\"" + std::to_string(x1) + "\" y1=\"" + std::to_string(y1) + "\" x2=\"" + std::to_string(x2) + "\" y2=\"" + std::to_string(y2) + "\" stroke=\"" + color + "\" ";
	if (strokeWidht != -10)
		write1 += "stroke-width=\"" + std::to_string(strokeWidht) + "\" ";
	write1 += "/>";
	return write1;
}
