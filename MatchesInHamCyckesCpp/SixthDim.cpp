#include "SixthDim.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

SixthDim::SixthDim()
{
	cout << "Created Sixth Dimensional Hyper cube\n";
}

SixthDim::~SixthDim()
{
	cout << "in Sixth Dimensional deconstructor\n";
}

vector<vector<vector<vector<vector<vector<int>>>>>> SixthDim::createHC()
{
	vector<vector<int>> twoHCDef(2, vector<int>(2, 1));
	vector<vector<vector<int>>> threeHC(3, vector<vector<int>>(twoHCDef));
	vector<vector<vector<vector<int>>>> fourHC(4, vector<vector<vector<int>>>(threeHC));
	vector<vector<vector<vector<vector<int>>>>> fiveHC(5, vector<vector<vector<vector<int>>>>(fourHC));
	vector<vector<vector<vector<vector<vector<int>>>>>> sixHC(6, vector<vector<vector<vector<vector<int>>>>>(fiveHC));

	return sixHC;
}

void SixthDim::printHC()
{
	vector<vector<vector<vector<vector<vector<int>>>>>> sixHC = createHC();

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
						for (int f = 0; f < 2; f++)
						{
							printf("sixHC[%d][%d][%d][%d][%d][%d] = %d\n", a, b, c, d, e, f, sixHC[a][b][c][d][e][f]);
						}
					}
				}
			}
		}
	}
}

vector<vector<vector<vector<vector<vector<int>>>>>> SixthDim::chooseMatches()
{
	return vector<vector<vector<vector<vector<vector<int>>>>>>();
}
