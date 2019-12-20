#include "AbstractDimension.h"
#include "SecondDim.h"
#include "ThirdDim.h"
#include "FourthDim.h"
#include "FifthDim.h"
#include "SixthDim.h"
#include "SeventhDim.h"
#include "EighthDim.h"
#include "NinthDim.h"
#include <iostream>
#include <algorithm>

using namespace std;

//method defs
shared_ptr<AbstractDimension> dimensionObjFactory(int dimCode);

int main()
{
	int input = 2;

	shared_ptr<AbstractDimension> absHC = dimensionObjFactory(input);

	absHC->setDimSize(2);

	absHC->printHC();

	

	return 0;
}

shared_ptr<AbstractDimension> dimensionObjFactory(int dimCode)
{
	shared_ptr<AbstractDimension> dim = nullptr;

	switch (dimCode)
	{
	case 2:
		dim = shared_ptr<SecondDim>(new SecondDim());
		break;
	case 3:
		dim = shared_ptr<ThirdDim>(new ThirdDim());
		break;
	case 4:
		dim = shared_ptr<FourthDim>(new FourthDim());
		break;
	case 5:
		dim = shared_ptr<FifthDim>(new FifthDim());
		break;
	case 6:
		dim = shared_ptr<SixthDim>(new SixthDim());
		break;
	case 7:
		dim = shared_ptr<SeventhDim>(new SeventhDim());
		break;
	case 8:
		dim = shared_ptr<EighthDim>(new EighthDim());
		break;
	case 9:
		dim = shared_ptr<NinthDim>(new NinthDim());
		break;
	default:
		break;
	}

	return dim;
}