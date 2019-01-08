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
void circle::sayName()
{
	cout << name<<" ";
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
	string holdstrokwidth;
	cout << "if you want stroke width enter yes else enter no " << endl;
	cin >> holdstrokwidth;
	if ("no" != holdstrokwidth) {
		cout << "stroke width = ";
		cin >> strokewidth;
	}
}
