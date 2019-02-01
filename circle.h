#pragma once
#include "shape.h"
#include <string>
class circle :public shape
{
public:
	circle(const std::string &);
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
	~circle();
private:
	std::string name;
	int X, Y;
	int Raduc;
	std::string color="black";
	std::string strokecolor ;
	float opacity=-10;
	float strokewidth=-10;
	std::string write1;
	bool animat = false;
	int time ,from, to;
	int repeatCount;
	std::string animatName;
};
