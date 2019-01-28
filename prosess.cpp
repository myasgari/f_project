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
