#pragma once
#include "shape.h"
#include <string>
class circle :public shape
{
public:
	circle(const std::string &);
	virtual void create() override;
	virtual void sayName() override;
	virtual void setXandY() override;
	virtual void setColor() override;
	virtual void setSize() override;
	virtual void setStorkeWidth() override;
	virtual std::string Export() override;
	~circle();
private:
	std::string name;
	float X, Y;
	float Raduc;
	std::string color;
	std::string strokecolor ;
	float opacity=-10;
	float strokewidth=-10;
	std::string write1;
};
