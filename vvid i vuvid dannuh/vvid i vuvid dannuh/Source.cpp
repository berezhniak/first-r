#include"Main.h"

int main()
{
	setlocale(LC_ALL, "ukr");

	string TypeBuilding = "�������";
	string Material = "��������";
	int Floor = 2;
	float Square = 85.5;

	cout << TypeBuilding << " " << Material << endl;
	cout << "�i���i��� ������i�:\t" << Floor << endl;
	cout << "����� �������:\t" << Square << endl;

	cout << "��i�i�� ����� ������� �� ������:\t";
		cin >> Square;

	cout << TypeBuilding << " " << Material << endl;
	cout << "�i���i��� ������i�:\t" << Floor << endl;
	cout << "����� �������:\t" << Square << endl;

	cout << "��i�i�� ��� ������� �� �������:\t";
	cin >> Material;

	cout << TypeBuilding << " " << Material << endl;
	cout << "�i���i��� ������i�:\t" << Floor << endl;
	cout << "����� �������:\t" << Square << endl;
}