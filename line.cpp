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
	if (animat == false) {
		write1 += "\n<line x1=\"" + std::to_string(x1) + "\" y1=\"" + std::to_string(y1) + "\" x2=\"" + std::to_string(x2) + "\" y2=\"" + std::to_string(y2) + "\" stroke=\"" + color + "\" ";
		if (strokeWidht != -10)
			write1 += "stroke-width=\"" + std::to_string(strokeWidht) + "\" ";
		write1 += "/>";
	}
	if (animat == true) {
		write1 += "\n<line x1=\"" + std::to_string(x1) + "\" y1=\"" + std::to_string(y1) + "\" x2=\"" + std::to_string(x2) + "\" y2=\"" + std::to_string(y2) + "\" stroke=\"" + color + "\" ";
		if (strokeWidht != -10)
			write1 += "stroke-width=\"" + std::to_string(strokeWidht) + "\" ";
		write1 += " >";
		write1 += "\n<animate attributeType=\"XML\" attributeName=\"" + attributeName + "\" from=\"" + std::to_string(from) + "\" to=\"" + std::to_string(to) + "\" dur=\"" +
			std::to_string(time) + "s\" repeatCount=\"" + std::to_string(repeatCount) + "\" />";
		write1 += "\n</line>";
	}
	return write1;
}
void line::animatation(const string &name)
{
	animatName = name;
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
string line::sayAnimatName()
{
	string holder;
	if (animat == false)
		return holder;
	else
		return animatName;
}
void line::animOff()
{
	animat == false;
}
