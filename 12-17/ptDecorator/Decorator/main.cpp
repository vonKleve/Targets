// Decorator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ptDecorator.h"

int main()
{
	using namespace std;

	Weapon * gun = new StandardWeapon();

	gun->aim();
	gun->fire();

	cout << endl << endl;
	
	Zoom * svd = new Zoom(gun);
	svd->aim();
	svd->fire();

	cout << endl << endl;

	Silencer * ninja = new Silencer(svd);
	// or we can upgrade old one
	// Slencer * ninja = new Silencer(gun);

	ninja->aim();
	ninja->fire();

	cout << endl << endl;

	AttGrenade * ak74 = new AttGrenade(gun);

	ak74->aim();
	ak74->fire();
	ak74->fireG();

	cout << endl << endl;

	system("pause");
	return 0;
}

