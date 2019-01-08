#pragma once
#include "shape.h"
#include <string>
class ellipse :public shape
{
public:
	ellipse(const std::string &);
	virtual void create() override;
	virtual void sayName() override;
	virtual void setXandY() override;
	virtual void setColor() override;
	virtual void setSize() override;
	virtual void setStorkeWidth() override;
	~ellipse();
private:
	std::string name;
	float X, Y;
	std::string color;
	float opacity;
	float strokecolor;
	float strokewidth;
	float hight, widht;
};
