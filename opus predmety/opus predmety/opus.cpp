#include"Main.h"

int main()
{

	setlocale(LC_ALL, "ukr");
	// Будинок
	string Mark = "Будинок";
	string Model = "Цегляний";

	int StageCount = 2;

	float Squere = 85.5;
	//character out ( виведення символу)
	cout << Mark << " " << Model << endl;
	cout << "Кiлькiсть поверхiв:\t" << StageCount << endl;
	cout << "Площа будинку:\t" << Squere << endl;
}