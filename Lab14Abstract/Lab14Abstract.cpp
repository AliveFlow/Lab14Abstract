#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Fond
{
protected:
	int value = 0;
public:

	virtual void Add() = 0;

};

class Vznos : public Fond
{
public:
	void Add() override
	{
		int add1 = 10000;
		value = value + add1;
		cout << "Счет фонда блягодаря взносам компании пополнился на : " << add1 << endl;
		cout << "Счет фонда теперь равен: " << value <<endl;
		cout << "Вся сумма была списана на помощь людям, спасибо! " << endl;
	}
};

class Blag : public Fond
{
public:
	void Add() override
	{
		int add2 = 100000;
		value = value + add2;
		cout << "Счет фонда в результате благотворительных взносов пополнился на : " << add2 << endl;
		cout << "Счет фонда теперь равен: " << value << endl;
		cout << "Вся сумма была списана на помощь людям, спасибо! " << endl;
	}
};

class Mec :public Fond
{
public:
	void Add() override
	{
		int add3 = 1234;
		value = value + add3;
		cout << "Счет фонда в результате сборов пополнился на : " << add3 << endl;
		cout << "Счет фонда теперь равен: " << value << endl;
		cout << "Вся сумма была списана на помощь людям, спасибо! " << endl;
	}
};

class Pozhertv : public Fond
{
public:
	void Add() override
	{
		int add4 = 2234;
		value = value + add4;
		cout << "Счет фонда в результате пожертвований пополнился на : " << add4 << endl;
		cout << "Счет фонда теперь равен: " << value << endl;
		cout << "Вся сумма была списана на помощь людям, спасибо! "<< endl;
	}

};

class People
{
public:
	void Add(Fond *fond)
	{
		fond->Add();
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	int input;
	cout << "Начальный счет фонда в рублях равен: " << 0 << endl;
	cout << "Выберете однократное пополнение валютного фонда: " << endl;
	cout << "1. Вносить взнос банка\n";
	cout << "2. Пополнить из благотворительного фонда\n";
	cout << "3. Пополнить сбором\n";
	cout << "4. Внести взнос пожертвованием\n";
	cout << "Selection: ";

	cin >> input;
	People pe;
	Vznos a;
	Blag b;
	Mec c;
	Pozhertv d;
	switch (input) {
	case 1:
       pe.Add(&a);
		break;
	case 2:

		pe.Add(&b);
		break;
	case 3:
		pe.Add(&c);
		break;
	case 4:
		pe.Add(&d);
		break;
	default:
		cout << "Error,closing...\n";
		break;
	}

}