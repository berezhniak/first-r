#include"Main.h"

int main()
{
	setlocale(LC_ALL, "ukr");

	// �������� ������:
	string Storage = "�����";
	string Material = "��������";
	int Stored = 20;
	int MaxStored = 30;

	
	// ������ �� � �������:
	void AddContainer();  // ����������� ���������
	{
		if (Stored < 30)
			Stored += 1;
	}
	bool RemoveContainer(); // ³���������� ���������
	{   if (Stored > 1)
		Stored -= 1;
	}

	cout << Storage << " " << Material << endl;
	cout << "�i���i��� ����������:\t" << Stored << endl;
	cout << "����������� ������� ����������:\t" << MaxStored << endl;

	cout << "������ ��������� " << endl;
	AddContainer();
	cout << "�i���i��� ����������:\t"
		<< Stored << endl;
	



	

}



	
	