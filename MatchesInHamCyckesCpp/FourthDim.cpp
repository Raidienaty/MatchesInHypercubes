#include "FourthDim.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

FourthDim::FourthDim()
{
	cout << "Created Fourth Dimensional Hyper cube\n";
}

FourthDim::~FourthDim()
{
	cout << "in Fourth Dimensional deconstructor\n";
}

vector<vector<vector<vector<int>>>> FourthDim::createHC()
{
	vector<vector<int>> twoHCDef(2, vector<int>(2, 1));
	vector<vector<vector<int>>> threeHC(3, vector<vector<int>>(twoHCDef));
	vector<vector<vector<vector<int>>>> fourHC(4, vector<vector<vector<int>>>(threeHC));

	return fourHC;
}

void FourthDim::printHC()
{
	vector<vector<vector<vector<int>>>> fourHC = createHC();
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			for (int c = 0; c < 2; c++)
			{
				for (int d = 0; d < 2; d++)
				{
					printf("fourHC[%d][%d][%d][%d] = %d\n", a, b, c, d, fourHC[a][b][c][d]);
				}
			}
		}
	}
}

vector<vector<vector<vector<int>>>> FourthDim::chooseMatches()
{
	return vector<vector<vector<vector<int>>>>();
}
