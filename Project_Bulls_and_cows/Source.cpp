#include <iostream>
#include "Header.h"
#include <time.h>
using namespace std;

/*Написать игру «Быки и коровы». Программа "загадывает" четырёхзначное число и играющий должен угадать его. 
После ввода пользователем числа программа сообщает, сколько цифр числа угадано (быки) и сколько цифр угадано
и стоит на нужном месте (коровы). После отгадывания числа на экран необходимо вывести количество сделанных 
пользователем попыток. В программе необходимо использовать рекурсию.*/


void main()
{
	int popitka = 1;
	int ugadai;
	const int size = 4;
	setlocale(0, "RUS");
	srand(time(NULL));
	ugadai = rand() % 9000 + 1000;
	int arc_ugadai[size];
	//cout <<"Загаданное число -> "<< ugadai<<endl;
	for (int i = 0; i < size; i++)
	{
		arc_ugadai[i] = ugadai % 10;
		ugadai = ugadai / 10;
	}

	bullcaw(arc_ugadai, 4, popitka);

	system("pause");
}

int bullcaw(int arc[], int size, int popitka)
{
	int cow = 0, bull = 0;
	cout << endl << endl;
	int chislo;
	int arc_chislo[4];
	cout << "Please insert number minimum 1000 ->";
	cin >> chislo;

	for (int i = 0; i < size; i++)
	{
		arc_chislo[i] = chislo % 10;
		chislo = chislo / 10;
		if (arc_chislo[i] == arc[i]) cow++;
		for (int j = 0; j < size; j++)
		{
			if (arc_chislo[i] == arc[j]) bull++;
			if (bull > 4) break;
		}
		cout << arc[i] << " " << arc_chislo[i] << endl;
	}

	cout << endl << "Кол-о коров = " << cow << endl;
	cout << endl << "Кол-о быков = " << bull << endl;
	cout << "Кол-во попыток = " << popitka;
	popitka++;
	if (cow != 4 && bull != 4) return bullcaw(arc, 4, popitka);
}
