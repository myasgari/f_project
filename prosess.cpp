#include <iostream>
#include "shape.h"
#include "rect.h"
#include "circle.h"
#include"ellipse.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int enterChois()
{
	cout << "1-create\t2-erase\t3-erase all\t4-list\t5-export" << endl;
	char chose;
	cin >> chose;
	return chose;
}
void create(vector<shape *>&shape)
{
	cout << "which object do want to draw ?" << endl;
	cout << "1-circle\t2-rect\tellipse" << endl;
	int in;
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
void list(vector<shape *>&shap)
{
	for (shape *shapeptr : shap)
	{
		cout << "rect = ";
		rect *type = dynamic_cast<rect *>(shapeptr);
		if (type != nullptr)
			type->sayName();
		delete shapeptr;
	}
	for (shape *shapeptr : shap)
	{
		cout << "circle = ";
		circle *type = dynamic_cast<circle *>(shapeptr);
		if (type != nullptr)
			type->sayName();
		delete shapeptr;
	}
	for (shape *shapeptr : shap)
	{
		cout << "ellipse = ";
		ellipse *type = dynamic_cast<ellipse *>(shapeptr);
		if (type != nullptr)
			type->sayName();
		delete shapeptr;
	}
}
