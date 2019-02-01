pragma once
#include "shape.h"
#include <string>
class scatter:public shape
{
public:
	scatter(const std::string &);
	virtual void create() override;
	virtual void setXandY();
	virtual void setsize();
	virtual std::string sayName() override;
	virtual std::string Export() override;
	virtual void animatation(const std::string &) override;
	virtual std::string sayAnimatName() override;
	virtual void animOff() override;
	~scatter();
private:
	std::string Name;
	int X, Y;
	int hight, widht;
	std::string write1;
};
