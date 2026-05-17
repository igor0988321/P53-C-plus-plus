#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	//cout << "Hello World!" << endl;
	//cout << "My name Ruslan" << endl;

	//type name;

	// bool - 1 byte

	// char - 1 byte

	//short - 2 byte
	//int - 4 byte
	//long - 4 byte
	// long long - 8 byte

	//float - 4 byte (7 digits)
	// double - 8 byte (15 digits)
	// long double - 16 byte (19 digits)


	//char t = 'a';
	//cout << (char)(t + 3.5) << endl;

	//cout << 5 /3 << endl;


	//unsigned int b = 3000000000;
	// cout << b << enddl;

	// - + ++ --
	// + - * / % += -= *= /= %=
	// !
	// < > <= >= == !=  && ||
	// () [] {} . , :: ~ ?
	
	//int a = 5, b = 4, c;
	// c = a++ * (--b + a-- / ++b);
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	 
	// cout << 10 % 5 << endl;

	//a = a + b;
	// a += b;

	// cout << (int)(15.2 / 4) << endl;
	
	//c = !a;
	//cout << c << endl;
	
	//int a, b, c;
	//cin >> a;
	//cin >> b;
	//c = (a + b) / 2;
	//cout << c << endl;

	//cout << pow(2.2, 3.258) << endl;

	//Завдання 1
	//Користувач вводить із клавіатури час у секундах.Необхідно написати програму, 
	//яка переведе введені користувачем секунди в години, хвилини, секунди і виведе їх на екран.


	//int a, b, c;
	//cin >> a;

	//b = a / 3600;
	//a = a % 3600;
	//c = a / 60;
	//a = a % 60;

	//cout << "Hour:" << b << endl;
	//cout << "Minute:" << c << endl;
	//cout << "Second:" << a << endl;

	//Завдання 2
	//Написати програму, яка перетворює введене з клавіатури дробове число в грошовий формат.
	//Наприклад, число 12, 5 має бути перетворено до вигляду 12 грн. 50 коп.


	//double money, b, c;

	//cin >> money;
	//int hrivni = money;

	//b = money - hrivni;

	//c = b * 100;
	//int kopiyka = c;

	//cout << hrivni << "гривень" << endl;
	//cout << kopiyka << "копійок" << endl;


	//Завдання 3
	//Написати програму, що обчислює, з якою швидкістю бігун пробіг дистанцію.

	double hour, distance, hour2, speed,  secund, b;

	cout << "Ведіть довжину дистанції (метрів)" << endl;
	cin >> distance;
	cout << "Ведіть час (хв.сек)" << endl;
	cin >> hour;

	int minutes = hour;
	b = hour - minutes;
	secund = b * 100;

	hour2 = minutes * 60 + secund;

	speed = (distance / hour2) * 3.6;

	cout << "Обчислення швидкості бігу" << endl;
	cout << "Ведіть довжину дистанції (метрів) = "<< " " << distance << endl;
	cout << "Ведіть час (хв.сек)" << hour << endl;
	cout << "Дистанція:"<< " " << distance << " " << "м" << endl;
	cout << "Час:"<< " " << minutes << " " << "хв" << " " << " " << secund << " " << "сек" << " " << "=" << " " << hour2 << " " << "сек" << endl;
	cout << "Ви бігли зі швидкістю"<< " " << speed << " " << " " << "км/год" << endl;

	return 0;
}