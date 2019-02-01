#pragma once
#include <string>
#include <vector>
#include "shape.h"
class polygon :public shape
{
public:
	polygon(const std::string &);
	virtual void create() override;
	virtual std::string sayName() override;
	virtual std::string Export() override;
	virtual void setPoint();
	virtual void animatation(const std::string &) override;
	virtual std::string sayAnimatName() override;
	virtual void animOff() override;
	~polygon();
private:
	std::string Name;
	std::vector<int>points;
	std::string color = "black";
	std::string write1;
	bool animat = false;
	int time, from, to;
	int repeatCount;
	std::string attributeName;
	std::string animatName;
};
