#pragma once
#include "shape.h"
#include <string>
class rect : public shape
{
public:
	rect();
	 virtual void setXandY()override;
	 virtual void setColor()override;
   virtual void setSize();
	~rect();
private:
	float X, Y;
	std::string color;
  std::string strokecolor;
  std::string opacity;
  float hight,widht;
};
