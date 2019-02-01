#pragma once
#include "shape.h"
#include <string>
class line :public shape
{
public:
	line(const std::string &);
	virtual void create() override;
	virtual std::string sayName() override;
	virtual std::string Export() override;
	virtual void setXandY();
	virtual void setColor();
	virtual void animatation(const std::string &) override;
	virtual std::string sayAnimatName() override;
	virtual void animOff() override;
private:
	int x1, y1, x2, y2;
	std::string Name;
	std::string color = "black";
	int strokeWidht = -10;
	std::string write1;
	bool animat = false;
	int time, from, to;
	int repeatCount;
	std::string attributeName;
	std::string animatName;
};
