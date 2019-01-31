#include "polygon.h"
#include <string>
#include <iostream>
using namespace std;

polygon::polygon(const string &name)
{
	Name = name;
}
polygon::~polygon()
{
}
string polygon::sayName()
{
	return Name;
}
void polygon::create()
{
	setPoint();
}
void polygon::setPoint()
{
	int x,y;
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
	cout << "do want to set color (yes or no) : ";
	cin >> holder;
	if (holder == "yes")
		cin >> color;
}
string polygon::Export()
{
	write1 += "\n<polygon points=\"";
	for (int i = 0; i < points.size(); i++)
	{
		write1 += std::to_string(points[i]);
		write1 += ",";
		write1 += std::to_string(points[i + 1])+" ";
		i++;
	}
	write1 += "\" fill=\"" + color + "\" ";
	write1 += " />";
	return write1;
}
void polygon::animatation()
{

}
