#include "ThirdDim.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

ThirdDim::ThirdDim()
{
	cout << "Created Third Dimensional Hyper cube\n";
}

ThirdDim::~ThirdDim()
{
	cout << "in Third Dimensional deconstructor\n";
}

vector<vector<vector<int>>> ThirdDim::createHC()
{
	vector<vector<int>> twoHCDef(2, vector<int>(2, 1));
	vector<vector<vector<int>>> threeHC(3, vector<vector<int>>(twoHCDef));

	return threeHC;
}

void ThirdDim::printHC()
{
	vector<vector<vector<int>>> threeHC = createHC();
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			for (int c = 0; c < 2; c++)
			{
				printf("threeHC[%d][%d][%d] = %d\n", a, b, c, threeHC[a][b][c]);
			}
		}
	}
}

vector<vector<vector<int>>> ThirdDim::chooseMatches()
{
	return vector<vector<vector<int>>>();
}
