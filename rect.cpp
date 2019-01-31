#include "rect.h"
#include <iostream>
#include <string>


using namespace std;
rect::rect(const string &name)
{
	this->name = name;
}
rect::~rect()
{
}
void rect::setXandY()
{
	cout << "please enter the x and y for your position in picture" << endl;
	cout << "enter x = ";
	cin >> X;
	cout << "enter y = ";
	cin >> Y;
}
void rect::setColor()
{
	string holdstroke;
	string holdopacity;
	cout << "please enter the color of your regtangel" << endl;
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
void rect::setSize()
{
	cout << "enter the hight and widht of regtangel" << endl;
	cout << "enter the hight = ";
	cin >> hight;
	cout << "enter the widht = ";
	cin >> widht;
}
void rect::setStorkeWidth()
{
		cout << "stroke width = ";
		cin >> strokewidth;
}
string rect::sayName()
{
	return name;
}
void rect::create()
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
string rect::Export()
{
	if (animat == false) {
		write1 = "\n\<rect x=\"" + std::to_string(X) + "\" y=\"" + std::to_string(Y) + "\" width =\"" + std::to_string(widht) + "\" height =\"" +
			std::to_string(hight) + "\" fill =\"" + color + "\" ";
		if (opacity != -10)
			write1 += "opacity =\"" + std::to_string(opacity) + "\"";
		if (strokewidth = !- 10)
			write1 += "stroke-width =\"" + std::to_string(strokewidth) + "\" ";
		if (strokecolor.empty() != true)
			write1 += " stroke = \"" + strokecolor + "\"";
		write1 += "/>";
	}
		if (animat == true) {
			write1 = "\n\<rect x=\"" + std::to_string(X) + "\" y=\"" + std::to_string(Y) + "\" width =\"" + std::to_string(widht) + "\" height =\"" +
				std::to_string(hight) + "\" fill =\"" + color + "\" ";
			if (opacity != -10)
				write1 += "opacity =\"" + std::to_string(opacity) + "\"";
			if (strokewidth = !- 10)
				write1 += "stroke-width =\"" + std::to_string(strokewidth) + "\" ";
			if (strokecolor.empty() != true)
				write1 += " stroke = \"" + strokecolor + "\"";
			write1 += " >";
			write1 += "\n<animate attributeType=\"XML\" attributeName=\""+attributeName +"\" from=\"" + std::to_string(from) + "\" to=\"" + std::to_string(to) + "\" dur=\"" +
				std::to_string(time) + "s\" repeatCount=\"" + std::to_string(repeatCount) + "\" />";
			write1 += "\n</rect>";
		}

	return write1;
}
void rect::animatation()
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
