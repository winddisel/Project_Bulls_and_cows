#pragma once
int Core(int arc[], int size, int popitka, char res);
void printArc(int i, int arc[], int arc2[]);
void printArc(int i, int arc2[], char c);
void printResult();
void gotoxy(int x, int y);
void GameScreen();
void Help();
void Exit();
using namespace std;
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <ctime>

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
	cout << endl << "\t\t\t���-� �����    = " << GameResult1.cow << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	if (GameResult1.bull > 4) GameResult1.bull = 4;
	cout << endl << "\t\t\t���-� �����    = " << GameResult1.bull << endl;
	cout << "\n\t\t\t���-�� ������� = " << GameResult1.Try;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
}

void gotoxy(int x, int y)
{//�.�������� ������� �� �����������
	COORD p = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void GameScreen()
{//�������
	int x,y;
	int i = 0;
	int Font;
	int Time = 600;

	//������� �������� ���� 200 ��� ��������, ����� ���� � ���������
	while (i < 200)
	{
		x = rand() % 90;
		y = rand() % 25;
		gotoxy(x, y);
		
		Font = rand() % 20;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Font);
		cout << "Cows&Bulls";
		
		Sleep(Time);
		
		//����������:

		if (i == 5) Time=Time >> 2;
		if (i == 20) Time = Time >> 2;
		if (i == 40) Time = Time >> 2;
		if (i == 50) Time = Time >> 1;
		if (i == 60) Time = Time >> 1;
		if (i == 70) Time = Time >> 1;

		i++;
	}

	_getch();
}

void Help()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "��������� ���������� ������������� ����� � �������� ������ ������� ���.\n\
����� ����� ������������� ����� ��������� ��������,\n������� ���� ����� �������(";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << ") � ������� ���� ������� � ����� �� ������ �����(";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "������";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout<<").\n����� ����������� ����� �� ����� ���������� ������� ���������� ���������\
 ������������� �������.\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "��� ������ �� ���� ������� 0, ��� �������� exit";
	system("pause>NULL");
	system("cls");
}

void Exit() {
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E R";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << ". .. .." << endl;
	Sleep(600);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E R";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << ". .." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	Sleep(200);
	system("cls");
	cout << endl << endl << "\t\t\t            G A M E    O V E R" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "." << endl;
	Sleep(200);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
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