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
