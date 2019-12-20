#pragma once
#include "AbstractDimension.h"
#include <algorithm>
#include <vector>

using namespace std;

class ThirdDim : public AbstractDimension
{
public:
	ThirdDim();
	~ThirdDim();
	void printHC();
	vector<vector<vector<int>>> chooseMatches();

protected:
	vector<vector<vector<int>>> createHC();
};