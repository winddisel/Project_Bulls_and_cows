#pragma once
int Core(int arc[], int size, int popitka);
void printResult();
void Help();
void Exit();
using namespace std;

struct GameResult
{
	int cow;
	int bull;
	int Try;
}GameResult1;

void printResult()
{
	cout << endl << "���-� ����� = " << GameResult1.cow << endl;
	cout << endl << "���-� ����� = " << GameResult1.bull << endl;
	cout << "���-�� ������� = " << GameResult1.Try;
}

void Help()
{
	system("cls");
	cout << "��������� ���������� ������������� ����� � �������� ������ ������� ���.\n\
����� ����� ������������� ����� ��������� ��������,\n������� ���� ����� �������(����) � ������� ���� �������\
� ����� �� ������ �����(������).\n����� ����������� ����� �� ����� ���������� ������� ���������� ���������\
������������� �������.";
	system("pause>NULL");
	system("cls");
}

void Exit() {
	system("cls");
	printResult();
	system("pause>NULL");
	exit(0);
}