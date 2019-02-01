#pragma once
#include "shape.h"
#include <string>
class ellipse :public shape
{
public:
	ellipse(const std::string &);
	virtual void create() override;
	virtual std::string sayName() override;
	virtual void setXandY() ;
	virtual void setColor() ;
	virtual void setSize() ;
	virtual void setStorkeWidth() ;
	virtual std::string Export() override;
	virtual void animatation(const std::string &) override;
	virtual std::string sayAnimatName() override;
	virtual void animOff() override;
	~ellipse();
private:
	std::string name;
	int X, Y;
	std::string color="black";
	float opacity=-10;
	std::string strokecolor;
	float strokewidth=-10;
	int hight, widht;
	std::string write1;
	bool animat = false;
	int time, from, to;
	int repeatCount;
	std::string attributeName;
	std::string animatName;
};
