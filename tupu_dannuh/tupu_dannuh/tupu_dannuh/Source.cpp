#include"Main.h"

int main()
{
	setlocale(LC_ALL, "ukr");

	// Атрибути складу:
	string Storage = "Склад";
	string Material = "Цегляний";
	int Stored = 20;
	int MaxStored = 30;

	
	// Методи дій зі складом:
	void AddContainer();  // Завантажити контейнер
	{
		if (Stored < 30)
			Stored += 1;
	}
	bool RemoveContainer(); // Відвантажити контейнер
	{   if (Stored > 1)
		Stored -= 1;
	}

	cout << Storage << " " << Material << endl;
	cout << "Кiлькiсть контейнерів:\t" << Stored << endl;
	cout << "Максимальна кількість контейнерів:\t" << MaxStored << endl;

	cout << "Додати контейнер " << endl;
	AddContainer();
	cout << "Кiлькiсть контейнерів:\t"
		<< Stored << endl;
	



	

}



	
	