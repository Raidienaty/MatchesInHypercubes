#include "SecondDim.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdlib>     
#include <time.h> 

using namespace std;

SecondDim::SecondDim()
{
	cout << "Created Second Dimensional Hyper cube\n";
}
	
SecondDim::~SecondDim()
{
	cout << "in Second Dimensional deconstructor\n";
}

vector<vector<int>> SecondDim::createHC()
{
	vector<vector<int>> twoHC(2, vector<int>(2, 1));

	return twoHC;
}

void SecondDim::printHC()
{
	vector<vector<int>> twoHC = createHC();

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			printf("twoHC[%d][%d] = %d\n", a, b, twoHC[a][b]);
		}
	}

	auto hc = chooseMatches();
}

vector<vector<int>> SecondDim::chooseMatches(vector<vector<int>> currHC)
{

	int randPoints[10];

	srand(time(NULL));

	for (int i = 0; i < dimSize; i++)
	{
		randPoints[i] = rand() % 1;
		cout << randPoints[i] << endl;
	}

	return currHC;
}

vector<vector<int>> SecondDim::chooseMatches()
{

	vector<vector<int>> newHC = createHC();

	int randPoints[2]; //vector<pair<pair<int, int>, pair<int, int>>>matches, vector<pair<pair<int, int>, pair<int, int>>>potentialMatches;
	int sum = 0, pair<int, int> pointA, pair<int, int>pointB;

	srand(time(0));

	printf("Dim size: %d\n", dimSize);

	for (int i = 0; i < dimSize; i++)
	{
		randPoints[i] = rand() % 2;
		cout << randPoints[i] << endl;
		sum += randPoints[i];
	}

	pointA = make_pair < randPoints[0], randPoints[1] > ;

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			if (a + b == (sum - 1) || a + b == (sum + 1))
			{
				printf("twoHC[%d][%d] is adjacent to newHC[%d][%d]\n", a, b, randPoints[0], randPoints[1]);
				
				pointB = make_pair<a, b>;

				//potentialMatches.push_back(pointA, pointB);
			}
		}
	}

	//int randomChoice = rand() % 2;
	/*
	for (int i = 0; i < potentialMatches.size(); i++)
	{
		cout << potentialMatches[i].first << endl;
	}*/

	return newHC;
}

