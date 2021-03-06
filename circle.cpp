#include "circle.h"
#include <string>
#include <iostream>


using namespace std;
circle::circle(const string &name)
{
	this->name = name;
}
circle::~circle()
{
}
string circle::sayName()
{
	return name;
}
void circle::setXandY()
{
	cout << "please enter the x and y for your position in picture" << endl;
	cout << "enter x = ";
	cin >> X;
	cout << "enter y = ";
	cin >> Y;
}
void circle::setColor()
{
	string holdstroke;
	string holdopacity;
	cout << "please enter the color of your circle" << endl;
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
void circle::setSize()
{
	cout << "enter the Raduc of your circle" << endl;
	cout << "Raduc = ";
	cin >> Raduc;
}
void circle::setStorkeWidth()
{
		cout << "stroke width = ";
		cin >> strokewidth;
}
void circle::create()
{
	string holder;
	setXandY();
	setSize();
	cout << "Do you want to set color (yes or no): ";
	cin >> holder;
	if ("no" != holder)
		setColor();
	cout << "Do you want set stroke width (yes or no) : ";
	cin >> holder;
	if ("no" != holder)
		setStorkeWidth();
}
string circle::Export()
{
	if (animat == false) {
		write1 = "\n<circle cx=\"" + std::to_string(X) + "\" cy=\"" + std::to_string(Y) + "\" r=\"" + std::to_string(Raduc) + "\" fill =\"" + color + "\"";
		if (opacity != -10)
			write1 += "opacity =\"" + std::to_string(opacity) + "\"";
		if (strokewidth = !- 10)
			write1 += "stroke-width =\"" + std::to_string(strokewidth) + "\" ";
		if (strokecolor.empty() != true)
			write1 += " stroke = \"" + strokecolor + "\"";
		write1 += "/>";
	}
	if (animat == true) {
		write1 = "\n<circle cx=\"" + std::to_string(X) + "\" cy=\"" + std::to_string(Y) + "\" r=\"" + std::to_string(Raduc) + "\" fill =\"" + color + "\"";
		if (opacity != -10)
			write1 += "opacity =\"" + std::to_string(opacity) + "\"";
		if (strokewidth = !- 10)
			write1 += "stroke-width =\"" + std::to_string(strokewidth) + "\" ";
		if (strokecolor.empty() != true)
			write1 += " stroke = \"" + strokecolor + "\"";
		write1 += ">";
		write1 += "\n<animate attributeType=\"XML\" attributeName=\"r\" from=\"" + std::to_string(from) + "\" to=\"" + std::to_string(to) + "\" dur=\"" +
			std::to_string(time) + "s\" repeatCount=\"" + std::to_string(repeatCount) + "\" />";
		write1 += "\n</circle>";
	}
	return write1;
}
void circle::animatation(const string &name)
{
	animatName = name;
	animat = true;
	cout << "plz enter the time duration of object : ";
	cin >> time;
	cout << "enter animation start from : ";
	cin >> from;
	cout << "to : ";
	cin >> to;
	cout << "and at end plz enter repeatCount : ";
	cin >> repeatCount;
}
string circle::sayAnimatName()
{
	string holder;
	if (animat == false)
		return holder;
	else
		return animatName;
}
void circle::animOff()
{
	animat == false;
}
