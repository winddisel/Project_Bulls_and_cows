#pragma once
int Core(int arc[], int size, int popitka, char res);
void printArc(int i, int arc[], int arc2[]);
void printArc(int i, int arc2[], char c);
void printResult();
void Help();
void Exit();
using namespace std;
#include <windows.h>
#include <time.h>

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

void printArc(int i, int arc2[],char c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << c;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout<<" " << arc2[i] << endl;
}

void printResult()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << endl << "\t\t\tКол-о коров    = " << GameResult1.cow << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	if (GameResult1.bull > 4) GameResult1.bull = 4;
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
 пользователем попыток.\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "Для выхода из игры нажмите 0, или наберите exit";
	system("pause>NULL");
	system("cls");
}

void Exit() {
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E R . ."<<endl;
	Sleep(600);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E R . " << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E R" << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E" << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V" << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O" << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M " << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A" << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G" << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            " << endl;
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t           ." << endl;
	Sleep(150);
	system("cls");
	cout << endl << endl << "\t\t\t          ." << endl;
	Sleep(100);
	system("cls");
	cout << endl << endl << "\t\t\t         ." << endl;
	Sleep(80);
	system("cls");
	cout << endl << endl << "\t\t\t        ." << endl;
	Sleep(80);
	system("cls");
	cout << endl << endl << "\t\t\t       ." << endl;
	Sleep(60);
	system("cls");
	cout << endl << endl << "\t\t\t      ." << endl;
	Sleep(60);
	system("cls");
	cout << endl << endl << "\t\t\t     ." << endl;
	Sleep(50);
	system("cls");
	cout << endl << endl << "\t\t\t   ." << endl;
	Sleep(50);
	system("cls");
	cout << endl << endl << "\t\t\t ." << endl;
	Sleep(40);
	system("cls");
	cout << endl << endl << "\t\t." << endl;
	Sleep(40);
	system("cls");
	cout << endl << endl << "\t." << endl;
	Sleep(20);
	system("cls");
	cout << endl << endl << "." << endl;
	Sleep(20);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printResult();
	system("pause>NULL");
	exit(0);
}