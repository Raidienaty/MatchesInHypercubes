#pragma once
#include "AbstractDimension.h"
#include <algorithm>
#include <vector>

using namespace std;

class SecondDim : public AbstractDimension
{
public:
	SecondDim();
	~SecondDim();
	void printHC();
	vector<vector<int>> chooseMatches(vector<vector<int>> currHC);
	vector<vector<int>> chooseMatches();

protected:
	vector<vector<int>> createHC();
};

