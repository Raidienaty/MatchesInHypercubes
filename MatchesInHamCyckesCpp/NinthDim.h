#pragma once
#include "AbstractDimension.h"
#include <algorithm>
#include <vector>

using namespace std;

class NinthDim : public AbstractDimension
{
public:
	NinthDim();
	~NinthDim();
	void printHC();
	vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> chooseMatches();

protected:
	vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> createHC();
};

