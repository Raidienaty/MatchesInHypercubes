#pragma once
#include "AbstractDimension.h"
#include <algorithm>
#include <vector>

using namespace std;

class EighthDim : public AbstractDimension
{
public:
	EighthDim();
	~EighthDim();
	void printHC();
	vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> chooseMatches();

protected:
	vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>> createHC();
};

