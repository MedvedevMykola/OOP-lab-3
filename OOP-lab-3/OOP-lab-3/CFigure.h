#pragma once
#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <utility>
#define M_PI       3.14159265358979323846   // pi
using std::cin;
using std::cout;
using std::endl;
// Абстрактний базовий клас
class CFigure {
protected:
	double sideA, sideB, sideC; // Довжина сторін
	double angle; // Кут між сторонами
public:
	virtual double Square(void) = 0;
	virtual double Perimeter(void) = 0;
};