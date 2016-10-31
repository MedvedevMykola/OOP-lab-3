#include "stdafx.h"
#include "CRomb.h"


CRomb::CRomb() {
	cout << "Romb" << endl;
	while(true)
	{		
		cout << endl << "Enter side a" << endl;
		cin >> sideA;
		cout << "Enter side b" << endl;
		cin >> sideB;
		cout << "Enter the angle in degrees" << endl;
		cin >> angle;
		if (sideA > 0 && sideB > 0 && angle > 0 && sideA == sideB)break;
		cout << "Error try again" << endl;
	}
	angle = angle*M_PI / 180;
}

double CRomb::Square(void) {
	
	return sideA * sideA * sin(angle);
}

double CRomb::Perimeter(void) {
	return 4 * sideA;
}