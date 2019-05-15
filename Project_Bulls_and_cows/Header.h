#pragma once
int Core(int arc[], int size, int popitka);
void printArc(int i, int arc[], int arc2[]);
void printResult();
void Help();
void Exit();
using namespace std;
#include <windows.h>

struct GameResult
{
	int cow;
	int bull;
	int Try;
}GameResult1;

void printArc(int i, int arc[],int arc2[])
{
	cout << arc[i] << " " << arc2[i] << endl;
}

void printResult()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << endl << "\t\t\tКол-о коров    = " << GameResult1.cow << endl;
	cout << endl << "\t\t\tКол-о быков    = " << GameResult1.bull << endl;
	        cout << "\n\t\t\tКол-во попыток = " << GameResult1.Try;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
}

void Help()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "Программа загадывает четырёхзначное число и играющий должен угадать его.\n\
После ввода пользователем числа программа сообщает,\nсколько цифр числа угадано(";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "быки";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << ") и сколько цифр угадано и стоит на нужном месте(";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "коровы";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout<<").\nПосле отгадывания числа на экран необходимо вывести количество сделанных\
 пользователем попыток.";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	system("pause>NULL");
	system("cls");
}

void Exit() {
	system("cls");
	cout << endl<<endl<<"\t\t\t            G A M E    O V E R . ."<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printResult();
	system("pause>NULL");
	exit(0);
}