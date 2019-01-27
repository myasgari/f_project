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
	virtual std::string Export() override;
	~ellipse();
private:
	std::string name;
	float X, Y;
	std::string color;
	float opacity=-10;
	std::string strokecolor;
	float strokewidth=-10;
	float hight, widht;
	std::string write1;
};
