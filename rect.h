#pragma once
#include "shape.h"
#include <string>
class rect : public shape
{
public:
	rect(const std::string &);
	virtual void create() override;
	virtual void setXandY()override;
	virtual void setColor()override;
	virtual void setSize() override;
	virtual void setStorkeWidth()override;
	virtual void sayName() override;
	virtual std::string Export() override;
	~rect();
private:
	float X, Y;
	std::string color;
	std::string strokecolor ;
	float opacity=-10;
	float hight, widht;
	float strokewidth=-10;
	std::string name;
	std::string write1;
};
