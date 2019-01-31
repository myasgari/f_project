#pragma once
#include <string>
class shape
{
public:
	shape();
	virtual void create() = 0 ;
//	virtual void setXandY() = 0;
//	virtual void setColor() = 0;
//	virtual void setSize() = 0;
//	virtual void setStorkeWidth() = 0;
	virtual std::string sayName() = 0;
	virtual std::string Export() = 0;
	virtual void animatation() = 0;
	static int Count;
	~shape();
private:
	std::string write;
};
