#pragma once
class shape
{
public:
	shape();
	virtual void setXandY() = 0;
	virtual void setColor() = 0;
	virtual void setSize() = 0;
	~shape();
};
