#include "EighthDim.h"
#include <algorithm>
#include <vector>

using namespace std;

EighthDim::EighthDim()
{
	cout << "Created Eighth Dimensional Hyper cube\n";
}

EighthDim::~EighthDim()
{
	cout << "in Eighth Dimensional deconstructor\n";
}

vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>> EighthDim::createHC()
{
	vector<vector<int>> twoHCDef(2, vector<int>(2, 1));
	vector<vector<vector<int>>> threeHC(3, vector<vector<int>>(twoHCDef));
	vector<vector<vector<vector<int>>>> fourHC(4, vector<vector<vector<int>>>(threeHC));
	vector<vector<vector<vector<vector<int>>>>> fiveHC(5, vector<vector<vector<vector<int>>>>(fourHC));
	vector<vector<vector<vector<vector<vector<int>>>>>> sixHC(6, vector<vector<vector<vector<vector<int>>>>>(fiveHC));
	vector<vector<vector<vector<vector<vector<vector<int>>>>>>> sevenHC(6, vector<vector<vector<vector<vector<vector<int>>>>>>(sixHC));
	vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>> eightHC(7, vector<vector<vector<vector<vector<vector<vector<int>>>>>>>(sevenHC));
	
	return eightHC;
}

void EighthDim::printHC()
{
	vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>> eightHC = createHC();

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
							for (int g = 0; g < 2; g++)
							{
								for (int h = 0; h < 2; h++)
								{
									printf("eightHC[%d][%d][%d][%d][%d][%d][%d][%d] = %d\n", a, b, c, d, e, f, g, h, eightHC[a][b][c][d][e][f][g][h]);
								}
							}
						}
					}
				}
			}
		}
	}
}