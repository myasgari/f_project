#include "ellipse.h"
#include <string>
#include <iostream>
using namespace std;
ellipse::ellipse(const string & name)
{
	this->name = name;
}
void ellipse::sayName()
{
	cout << name << " ";
}
void ellipse::setXandY()
{
	cout << "please enter the x and y for your position in picture" << endl;
	cout << "enter x = ";
	cin >> X;
	cout << "enter y = ";
	cin >> Y;
}
ellipse::~ellipse()
{
}
void ellipse::setColor()
{
	string holdstroke;
	string holdopacity;
	cout << "please enter the color of your ellipse" << endl;
	cin >> color;
	cout << "if you want stroke color enter yes else enter no " << endl;
	cin >> holdstroke;
	if ("no" != holdstroke) {
		cout << "stroke color = ";
		cin >> strokecolor;
	}
	cout << "if you want opacity enter yes else enter no " << endl;
	cin >> holdopacity;
	if ("no" != holdopacity) {
		cout << "opacity = ";
		cin >> opacity;
	}
}
void ellipse::setStorkeWidth()
{
		cout << "stroke width = ";
		cin >> strokewidth;
}
void ellipse::setSize()
{
	cout << "enter the center length and Center Width of ellipse" << endl;
	cout << "enter center length = ";
	cin >> hight;
	cout << "enter the Center Width = ";
	cin >> widht;
}
void ellipse::create()
{
		string holder;
		setXandY();
		setSize();
		cout << "Do you want to set color (yes or no): ";
		cin >> holder;
		if ("no" != holder)
			setColor();
		cout << "Do you want set stroke width (yes or no) :";
		cin >> holder;
		if ("no" != holder)
			setStorkeWidth();
}
string ellipse::Export()
{
	write1 = "\n\<ellipse cx= \"" + std::to_string(X) + "\" cy= \"" + std::to_string(Y) + "\" fill = \"" + color + "\" ";
	if (opacity != -10)
		write1 += "opacity =\"" + std::to_string(opacity) + "\"";
	if (strokewidth = !- 10)
		write1 += "stroke-width =\"" + std::to_string(strokewidth) + "\" ";
	if (strokecolor.empty() != false)
		write1 += "stroke = \"" + strokecolor + "\"";
	return write1;
}
