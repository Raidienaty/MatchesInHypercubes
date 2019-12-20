#pragma once
#include "AbstractDimension.h"
#include <algorithm>
#include <vector>

using namespace std;

class SeventhDim : public AbstractDimension
{
public:
	SeventhDim();
	~SeventhDim();
	void printHC();
	vector<vector<vector<vector<vector<vector<vector<int>>>>>>> chooseMatches();

protected:
	vector<vector<vector<vector<vector<vector<vector<int>>>>>>> createHC();
};

