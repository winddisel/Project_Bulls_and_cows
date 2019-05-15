#include <iostream>
#include "Header.h"
#include <time.h>
#include <windows.h>
using namespace std;

void main()
{
	setlocale(0, "RUS");
	srand(time(NULL));

	//Начальные значения:
	GameResult1.cow = 0;
	GameResult1.bull = 0;
	GameResult1.Try = 1;
	int ugadai;
	const int size = 4;
	ugadai = rand() % 9999 + 1000;
	int arc_ugadai[size];
	
	Help();       //Старт..
	

	//Получение поэлементно цифр загадонного числа:
	//Запихиваем их в массив аrc_ugadai
	for (int i = 0; i < size; i++)
	{
		arc_ugadai[i] = ugadai % 10;
		ugadai = ugadai / 10;
	}

	Core(arc_ugadai, 4, GameResult1.Try);
	Exit();
	system("pause>NULL");
}

int Core(int arc[], int size, int popitka)
{
	GameResult1.Try = popitka;
	int chislo;
	int arc_chislo[4];
	//int cow = 0, bull = 0;
	cout << endl << endl;
	cout << "Please insert number minimum 1000 ->";
	cin >> chislo;

	if (chislo == 0) Exit();

	for (int i = 0; i < size; i++)
	{
		arc_chislo[i] = chislo % 10;
		chislo = chislo / 10;
		if (arc_chislo[i] == arc[i]) GameResult1.cow++;
		for (int j = 0; j < size; j++)
		{
			if (arc_chislo[i] == arc[j]) GameResult1.bull++;
			if (GameResult1.bull > 4) break;
		}
		printArc(i, arc, arc_chislo);
		//cout << arc[i] << " " << arc_chislo[i] << endl;
	}

	printResult();
	GameResult1.Try++;

	//Если быки и коровы !=4 -> Запускаем рекурсию: 
	if (GameResult1.cow != 4 && GameResult1.bull != 4) return Core(arc, 4, GameResult1.Try);
}




