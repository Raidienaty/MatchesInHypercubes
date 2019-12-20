#include "AbstractDimension.h"
#include <iostream>
#include <algorithm>

AbstractDimension::AbstractDimension()
{
	std::cout << "Created Abstract Dimension\n";
}

AbstractDimension::~AbstractDimension()
{
	std::cout << "In Abstract Dimension Destructor.\n";
}

void AbstractDimension::createHC()
{
	std::cout << "in original create hypercube\n";
}

void AbstractDimension::printHC()
{
	std::cout << "in original print hypercube\n";
}

void AbstractDimension::chooseMatches()
{
	std::cout << "in original choose matches\n";
}

void AbstractDimension::setDimSize(int size)
{
	printf("in dim size\n");
	dimSize = size;
}
