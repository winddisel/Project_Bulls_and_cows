#pragma once
int Core(int arc[], int size, int popitka);
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

void printResult()
{
	cout << endl << "\t\t\t���-� ����� = " << GameResult1.cow << endl;
	cout << endl << "\t\t\t���-� ����� = " << GameResult1.bull << endl;
	cout << "\n\t\t\t���-�� ������� = " << GameResult1.Try;
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
 ������������� �������.";
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