#include "polyline.h"
#include <string>
#include <vector>
#include<iostream>
using namespace std;
polyline::polyline(const std::string &name)
{
	Name = name;
}
string polyline::sayName()
{
	return Name;
}
polyline::~polyline()
{
}
void polyline::create()
{
	setPoint();
	setColor();
}
void polyline::setPoint()
{
	int x, y;
	string holder;
	cout << "entre your point " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "enter the x[" << i + 1 << "] : ";
		cin >> x;
		points.push_back(x);
		cout << "enter the y[" << i + 1 << "] : ";
		cin >> y;
		points.push_back(y);
		cout << "do yoy want to continue (y or n) : ";
		cin >> holder;
		if (holder == "n")
			break;
	}
	cout << " point finishes \n";

}
void polyline::setColor()
{
	string holder;
	cout << "do you want to set stroke (yes or no ) : ";
	cin >> holder;
	if (holder == "yes") {
		cout << "stroke : ";
		cin >> stroke;
	}
	cout << "do you want to set stroke width (yes or no ) : ";
	cin >> holder;
	if (holder == "yes") {
		cout << "stroke color : ";
		cin >> stokewidth;
	}
}



string polyline::Export()
{
	if (animat = false) {
		write1 += "\n<polyline fill=\"" + color + "\" points=\"";
		for (int i = 0; i < points.size(); i++)
		{
			write1 += std::to_string(points[i]);
			write1 += ",";
			write1 += std::to_string(points[i + 1]) + " ";
			i++;
		}
		write1 += "\" ";
		if (stroke.empty() != true)
			write1 += "stroke=\"" + stroke + "\" ";
		if (stokewidth != -10)
			write1 += "stroke-width=\"" + std::to_string(stokewidth) + "\" ";
		write1 += " />";
	}
	if (animat == true) {
		write1 += "\n<polyline fill=\"" + color + "\" points=\"";
		for (int i = 0; i < points.size(); i++)
		{
			write1 += std::to_string(points[i]);
			write1 += ",";
			write1 += std::to_string(points[i + 1]) + " ";
			i++;
		}
		write1 += "\" ";
		if (stroke.empty() != true)
			write1 += "stroke=\"" + stroke + "\" ";
		if (stokewidth != -10)
			write1 += "stroke-width=\"" + std::to_string(stokewidth) + "\" ";
		write1 += " >";
		write1 += "\n<animate attributeType=\"XML\" attributeName=\"" + attributeName + "\" from=\"" + std::to_string(from) + "\" to=\"" + std::to_string(to) + "\" dur=\"" +
			std::to_string(time) + "s\" repeatCount=\"" + std::to_string(repeatCount) + "\" />";
		write1 += "\n</polyline>";
	}
	return write1;
}
void polyline::animatation(const string &name)
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
string polyline::sayAnimatName()
{
	string holder;
	if (animat == false)
		return holder;
	else
		return animatName;
}
void polyline::animOff()
{
	animat == false;
}
