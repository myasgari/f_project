#include "rect.h"
#include <iostream>
#include <string>

using namespace std;
rect::rect(const string &name)
{
	this ->name =name;
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
  std::string holdstroke;
  std::string holdopacity;
  cout<<"please enter the color of your regtangel"<<endl;
  cin>>color;
  cout<<"entre thr color of the stroke *if you do not want it enter no*"<<endl;
  cin>>holdstroke;
  if ("no" != holdstroke){
    strokecolor = holdstroke;
  }
  cout<<"entre thr color of the stroke *if you do not want it enter no*"<<endl;
  cin>>holdopacity;
  if ("no" != holdopacity){
    opacity=holdopacity;
  }
}
void rect::setSize()
{
  cout<<"enter the hight and widht of regtangel"<<endl;
  cout<< "enter the hight = ";
  cin>>hight;
  cout<<"enter the widht = ";
  cin>>widht;
}
void rect::strokewidth()
{

}
