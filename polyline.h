#pragma once
#include <string>
#include <vector>
#include "shape.h"
class polyline :public shape
{
public:
	polyline(const std::string &);
	virtual void create() override;
	virtual std::string sayName() override;
	virtual std::string Export() override;
	virtual void setPoint();
	virtual void setColor();
	virtual void animatation(const std::string &) override;
	virtual std::string sayAnimatName() override;
	virtual void animOff() override;
	~polyline();
private:
	std::string Name;
	std::vector<int>points;
	std::string color = "none";
	std::string write1;
	std::string stroke;
	int stokewidth = -10;
	bool animat = false;
	int time, from, to;
	int repeatCount;
	std::string attributeName;
	std::string animatName;
};
