#include "FifthDim.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

FifthDim::FifthDim()
{
	cout << "Created Fifth Dimensional Hyper cube\n";
}

FifthDim::~FifthDim()
{
	cout << "in Fifth Dimensional deconstructor\n";
}

vector<vector<vector<vector<vector<int>>>>> FifthDim::createHC()
{
	vector<vector<int>> twoHCDef(2, vector<int>(2, 1));
	vector<vector<vector<int>>> threeHC(3, vector<vector<int>>(twoHCDef));
	vector<vector<vector<vector<int>>>> fourHC(4, vector<vector<vector<int>>>(threeHC));
	vector<vector<vector<vector<vector<int>>>>> fiveHC(5, vector<vector<vector<vector<int>>>>(fourHC));

	return fiveHC;
}

void FifthDim::printHC()
{
	vector<vector<vector<vector<vector<int>>>>> fiveHC = createHC();
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			for (int c = 0; c < 2; c++)
			{
				for (int d = 0; d < 2; d++)
				{
					for (int e = 0; e < 2; e++)
					{
						//fiveHC[a][b][c][d][e] = 1;
						printf("fiveHC[%d][%d][%d][%d][%d] = %d\n", a, b, c, d, e, fiveHC[a][b][c][d][e]);
					}
				}
			}
		}
	}
}

vector<vector<vector<vector<vector<int>>>>> FifthDim::chooseMatches()
{
	return vector<vector<vector<vector<vector<int>>>>>();
}
