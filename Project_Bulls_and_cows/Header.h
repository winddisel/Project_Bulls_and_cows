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
	cout << endl << "Кол-о коров = " << GameResult1.cow << endl;
	cout << endl << "Кол-о быков = " << GameResult1.bull << endl;
	cout << "Кол-во попыток = " << GameResult1.Try;
}

void Help()
{
	system("cls");
	cout << "Программа загадывает четырёхзначное число и играющий должен угадать его.\n\
После ввода пользователем числа программа сообщает,\nсколько цифр числа угадано(быки) и сколько цифр угадано\
и стоит на нужном месте(коровы).\nПосле отгадывания числа на экран необходимо вывести количество сделанных\
пользователем попыток.";
	system("pause>NULL");
	system("cls");
}

void Exit() {
	system("cls");
	printResult();
	system("pause>NULL");
	exit(0);
}