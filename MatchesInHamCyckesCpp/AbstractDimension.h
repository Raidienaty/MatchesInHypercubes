#pragma once
#include <iostream>
#include <vector>
class AbstractDimension
{
public:
	AbstractDimension();
	~AbstractDimension();
	virtual void printHC() = 0;
	void chooseMatches();
	void setDimSize(int size);

protected:
	void createHC();
	int dimSize;
};

