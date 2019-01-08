#pragma once
#include "shape.h"
#include <string>
class rect : public shape
{
public:
	rect(const std::string &);
	virtual void setXandY()override;
	virtual void setColor()override;
	virtual void setSize() override;
	virtual void setStorkeWidth()override;
	virtual void sayName() override;
	~rect();
private:
	float X, Y;
	std::string color;
	float strokecolor;
	float opacity;
	float hight, widht;
	float strokewidth;
	std::string name;
};
