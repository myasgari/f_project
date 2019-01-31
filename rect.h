#pragma once
#include "shape.h"
#include <string>
class rect : public shape
{
public:
	rect(const std::string &);
	virtual void create() override;
	virtual void setXandY();
	virtual void setColor();
	virtual void setSize() ;
	virtual void setStorkeWidth();
	virtual std::string sayName() override;
	virtual std::string Export() override;
	virtual void animatation() override;
	~rect();
private:
	int X, Y;
	std::string color="black";
	std::string strokecolor ;
	float opacity=-10;
	int hight, widht;
	float strokewidth=-10;
	std::string name;
	std::string write1;
	bool animat = false;
	int time, from, to;
	int repeatCount;
	std::string attributeName;
};
