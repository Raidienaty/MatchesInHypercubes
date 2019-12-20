#include "NinthDim.h"
#include <algorithm>
#include <vector>

using namespace std;

NinthDim::NinthDim()
{
	cout << "Created Ninth Dimensional Hyper cube\n";
}

NinthDim::~NinthDim()
{
	cout << "in Ninth Dimensional destructor\n";
}

vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> NinthDim::createHC()
{
	vector<vector<int>> twoHCDef(2, vector<int>(2, 1));
	vector<vector<vector<int>>> threeHC(3, vector<vector<int>>(twoHCDef));
	vector<vector<vector<vector<int>>>> fourHC(4, vector<vector<vector<int>>>(threeHC));
	vector<vector<vector<vector<vector<int>>>>> fiveHC(5, vector<vector<vector<vector<int>>>>(fourHC));
	vector<vector<vector<vector<vector<vector<int>>>>>> sixHC(6, vector<vector<vector<vector<vector<int>>>>>(fiveHC));
	vector<vector<vector<vector<vector<vector<vector<int>>>>>>> sevenHC(6, vector<vector<vector<vector<vector<vector<int>>>>>>(sixHC));
	vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>> eightHC(7, vector<vector<vector<vector<vector<vector<vector<int>>>>>>>(sevenHC));
	vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> nineHC(8, vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>(eightHC));

	return nineHC;
}

void NinthDim::printHC()
{
	vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> nineHC = createHC();

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
									for (int i = 0; i < 2; i++)
									{
										printf("nineHC[%d][%d][%d][%d][%d][%d][%d][%d][%d] = %d\n", a, b, c, d, e, f, g, h, i, nineHC[a][b][c][d][e][f][g][h][i]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> NinthDim::chooseMatches()
{
	return vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>>();
}
