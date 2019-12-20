#pragma once
#include "AbstractDimension.h"
#include <algorithm>
#include <vector>

using namespace std;

class SixthDim : public AbstractDimension
{
public:
	SixthDim();
	~SixthDim();
	void printHC();
	vector<vector<vector<vector<vector<vector<int>>>>>> chooseMatches();

protected:
	vector<vector<vector<vector<vector<vector<int>>>>>> createHC();
};

