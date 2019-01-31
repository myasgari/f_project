#include "ellipse.h"
#include <string>
#include <iostream>
using namespace std;
ellipse::ellipse(const string & name)
{
	this->name = name;
}
string ellipse::sayName()
{
	return name ;
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
	if (animat == false) {
		write1 = "\n\<ellipse cx=\"" + std::to_string(X) + "\" cy=\"" + std::to_string(Y) + "\" fill=\"" + color + "\" " + "rx=\"" + std::to_string(widht) + "\" ry=\"" + std::to_string(hight) + "\" ";
		if (opacity != -10)
			write1 += " opacity =\"" + std::to_string(opacity) + "\"";
		if (strokewidth = !- 10)
			write1 += " stroke-width =\"" + std::to_string(strokewidth) + "\" ";
		if (strokecolor.empty() != true)
			write1 += " stroke = \"" + strokecolor + "\" ";
		write1 += "/>";
	}
	if (animat == true) {
		write1 = "\n\<ellipse cx=\"" + std::to_string(X) + "\" cy=\"" + std::to_string(Y) + "\" fill=\"" + color + "\" " + "rx=\"" + std::to_string(widht) + "\" ry=\"" + std::to_string(hight) + "\" ";
		if (opacity != -10)
			write1 += " opacity =\"" + std::to_string(opacity) + "\"";
		if (strokewidth = !- 10)
			write1 += " stroke-width =\"" + std::to_string(strokewidth) + "\" ";
		if (strokecolor.empty() != true)
			write1 += " stroke = \"" + strokecolor + "\" ";
		write1 += " >";
		write1 += "\n<animate attributeType=\"XML\" attributeName=\"" + attributeName + "\" from=\"" + std::to_string(from) + "\" to=\"" + std::to_string(to) + "\" dur=\"" +
			std::to_string(time) + "s\" repeatCount=\"" + std::to_string(repeatCount) + "\" />";
		write1 += "\n</ellipse>";
	}
	return write1;
}
void ellipse::animatation()
{
	animat = true;
	cout << "plz enter the time duration of object : ";
	cin >> time;
	cout << "enter attributeName : ";
	cin >> attributeName;
	cout << "enter ,animation start from : ";
	cin >> from;
	cout << "to : ";
	cin >> to;
	cout << "and at end plz enter repeatCount : ";
	cin >> repeatCount;
}
