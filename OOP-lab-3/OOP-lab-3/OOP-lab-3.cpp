#include "stdafx.h"
#include "CFigure.h"
#include "CTriangle.h"
#include "CRectangle.h"
#include "CRomb.h"
#include <cstdio>
#include <cstdlib>

int main()
{
	int t;
	printf("Menu:\n1. Start program\n2. Exit\n\nMake your choice ");
	cin >> t;
	switch (t) {
	case 1: {
		CFigure* objects[3] = {
			new CRomb(),
			new CRectangle(),
			new CTriangle()
		};

		printf("Square of Romb: %Lf\n", objects[0]->Square());
		printf("Square of Triangle: %Lf\n", objects[2]->Square());
		printf("Square of Rectangle: %Lf\n\n", objects[1]->Square());
		
		printf("Perimeter of Romb: %Lf\n", objects[0]->Perimeter());
		printf("Perimeter of Triangle: %Lf\n", objects[2]->Perimeter());
		printf("Perimeter of Rectangle: %Lf\n\n", objects[1]->Perimeter());
		system("pause");
		break;
	}
	case 2: return false;
	}

	return true;
}