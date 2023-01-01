#include"Main.h"

int main()
{
	setlocale(LC_ALL, "ukr");

	string TypeBuilding = "Будинок";
	string Material = "Цегляний";
	int Floor = 2;
	float Square = 85.5;

	cout << TypeBuilding << " " << Material << endl;
	cout << "Кiлькiсть поверхiв:\t" << Floor << endl;
	cout << "Площа будинку:\t" << Square << endl;

	cout << "Змiнiть площу будинку на бажану:\t";
		cin >> Square;

	cout << TypeBuilding << " " << Material << endl;
	cout << "Кiлькiсть поверхiв:\t" << Floor << endl;
	cout << "Площа будинку:\t" << Square << endl;

	cout << "Змiнiть тип будинку на бажаний:\t";
	cin >> Material;

	cout << TypeBuilding << " " << Material << endl;
	cout << "Кiлькiсть поверхiв:\t" << Floor << endl;
	cout << "Площа будинку:\t" << Square << endl;
}