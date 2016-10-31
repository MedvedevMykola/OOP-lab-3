#include "stdafx.h"
#include "CRectangle.h"

CRectangle::CRectangle() {
	cout << "Rectangle" << endl;
	while (true) {
		cout << endl << "Enter side a" << endl;
		cin >> sideA;
		cout << "Enter side b" << endl;
		cin >> sideB;
		if (sideA > 0 && sideB > 0)break;
		cout << "Error try again" << endl;
	}
	angle = angle*M_PI / 180;
}

double CRectangle::Square(void) {
	return sideA * sideB;
}

double CRectangle::Perimeter(void) {
	return 2 * (sideA + sideB);
}