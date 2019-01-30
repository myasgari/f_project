#include <iostream>
#include "shape.h"
#include "rect.h"
#include "circle.h"
#include"ellipse.h"
#include <vector>
#include <fstream>
#include <string>
#include <typeinfo>
using namespace std;

int enterChois()
{
	cout << "1-create  2-erase  3-erase all  4-list  5-export  6-exit" << endl;
    int chose;
	cin >> chose;
	return chose;
}
void create(vector<shape *>&shape)
{
	cout << "which object do want to draw ?" << endl;
	cout << "1-circle  2-rect  3-ellipse" << endl;
	int in;
	cin >> in;
	cout << "enter the object name :";
	string name;
	cin >> name;
	if (in == 1)
		shape.push_back(new circle(name));
	if (in == 2)
		shape.push_back(new rect(name));
	if (in == 3)
		shape.push_back(new ellipse(name));
	shape[shape::Count]->create();
}
void list(const vector<shape *>&shap)
{
	for (int i = 0; i < shap.size(); i++)
	{
		cout << "name : ";
		shap[i]->sayName();
		cout << " , type : " << typeid(*shap[i]).name() << endl;
	}
}
void erase(vector<shape *>&shape)
{
	int i = 0;
	list(shape);
	cout << "which object do want to delete : ";
	string name;
	cin >> name;
	for (i; i < shape.size(); i++) {
		if (name == (shape[i]->sayName()))
			break;
	}
	for (i; i < shape.size(); i++) {
		shape[i] = shape[i + 1];
	}
	shape::Count -= 1;
	shape.pop_back();
}
void createFile(vector<shape *>&shape,fstream &pic)
{
	pic << setprecision(2) << fixed;
	string write = "<?xml version=\"1.0\" standalone=\"no\"?>\n<!DOCTYPE svg PUBLIC \" -//W3C//DTD SVG 1.1//EN\"\n\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n<svg width=\"400\" height=\"400\"\nxmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">";
	pic << write;
	for (int i = 0; i < shape.size(); i++)
		pic << shape[i]->Export();
	pic << "\n</svg>";
	cout << "export finish succefully" << endl;
}
