#include "stdafx.h"
#include "CTriangle.h"

CTriangle::CTriangle() {
	cout << "Triangle" << endl;
	while (true) {
		cout << endl << "Enter side a" << endl;
		cin >> sideA;
		cout << "Enter side b" << endl;
		cin >> sideB;
		cout <<"Enter side c" << endl;
		cin >> sideC;
		cout <<"Enter the angle in degrees(between a and b)" << endl;
		cin >> angle;
		if (sideA > 0 && sideB > 0 && sideC > 0 && ((sideA == sideB && sideA == sideC) && angle != 60)) { cout << "Error try again (A=B=C and angle !=60)" << endl; continue; }
		if (sideA > 0 && sideB > 0 && sideC > 0 && angle > 0 && (sideA+sideB>sideC && sideA + sideC>sideB && sideC + sideB>sideA))break;
		cout << "Error try again" << endl;
	}
	angle = angle*M_PI / 180;
}

double CTriangle::Square(void) {
	return 0.5*sideA * sideB * sin(angle);
}

double CTriangle::Perimeter(void) {
	return (sideA + sideB + sideC);
}