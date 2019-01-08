#pragma once
#include "shape.h"
#include <string>
class circle :public shape
{
public:
	circle(const std::string &);
	virtual void sayName() override;
	virtual void setXandY() override;
	virtual void setColor() override;
	virtual void setSize() override;
	virtual void setStorkeWidth() override;
	~circle();
private:
	std::string name;
	float X, Y;
	float Raduc;
	std::string color;
	float strokecolor;
	float opacity;
	float strokewidth;
};
