#include<iostream>
#include<Windows.h>

using namespace std;

//enum Color
//{
//	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
//	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
//};
//
//void SetColor(int text, int background)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
//}

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

	//double hour, distance, hour2, speed,  secund, b;

	//cout << "Ведіть довжину дистанції (метрів)" << endl;
	//cin >> distance;
	//cout << "Ведіть час (хв.сек)" << endl;
	//cin >> hour;

	//int minutes = hour;
	//b = hour - minutes;
	//secund = b * 100;

	//hour2 = minutes * 60 + secund;

	//speed = (distance / hour2) * 3.6;

	//cout << "Обчислення швидкості бігу" << endl;
	//cout << "Ведіть довжину дистанції (метрів) = "<< " " << distance << endl;
	//cout << "Ведіть час (хв.сек)" << hour << endl;
	//cout << "Дистанція:"<< " " << distance << " " << "м" << endl;
	//cout << "Час:"<< " " << minutes << " " << "хв" << " " << " " << secund << " " << "сек" << " " << "=" << " " << hour2 << " " << "сек" << endl;
	//cout << "Ви бігли зі швидкістю"<< " " << speed << " " << " " << "км/год" << endl;


	//18.05.2026 Lesson 2
//SetColor(LightRed, Blue);
//cout << "klaj fejwerf" << endl;
//
//SetColor(White, Blue);




//int a, b, c;
//cin >> a >> b >> c;

//if (a % 2 == 0)
//{
//	cout << "a is even" << endl;
//}
//else
//{
//	cout << "a is odd" << endl;
//}

// 3 1 2
//if (a > b && a > c)
//{
//	cout << a << endl;
//}
//else if (b > c)
//{
//	cout << b << endl;
//}
//else
//{
//	cout << c << endl;
//}

// 2+3

//float a, b;
//char op;
//cin >> a >> op >> b;

//switch (op)
//{
//case '+': cout << a + b << endl; break;
//case '-': cout << a - b << endl; break;
//case '*': cout << a * b << endl; break;
//case '/': cout << a / b << endl; break;
//default: 
//	cout << "Error. Use correct symbol (+, -, *, /)" << endl;
//	break;	
//}

//if (op == '+')
//{
//	cout << a + b << endl;
//}
//else if (op == '-')
//{
//	cout << a - b << endl;
//}
//else if (op == '*')
//{
//	cout << a * b << endl;
//}
//else if (op == '/')
//{
//	cout << a / b << endl;
//}
//else
//{
//	cout << "Error. Use correct symbol (+, -, *, /)" << endl;
//}


//int m;
//cin >> m;
//switch (m) {
//case 1: case 2: case 12: cout << "Winter"; break;
//case 3: case 4:	case 5:  cout << "Spring"; break;

//case 6: cout << "Summer"; break;
//case 7: cout << "Summer"; break;
//case 8: cout << "Summer"; break;

//case 9: cout << "Autumn"; break;
//case 10: cout << "Autumn"; break;
//case 11: cout << "Autumn"; break;
//default: cout << "Error" << endl;
//}
//return 0;


	
//Завдання 1
//Користувач вводить дві дати(день, місяць, рік у вигляді цілих чисел).Необхідно визначити і вивести кількість днів між цими 
//двома датами.Для розрахунків враховувати високосні роки, 
//а також коректне число днів у місяцях(березень — 31, вересень — 30, лютий невисокосного року — 28 і т.д.).

//int d1, m1, y1, d2, m2, y2;
//
//cout << "Ведіть першу дату "; cin >> d1 >> m1 >> y1;
//
//cout << "Ведіть другу дату "; cin >> d2 >> m2 >> y2;
//
//int res = y1 - 1;
//long long day1 = res * 365 + (res / 4) - (res / 100) + (res / 400);
//
//
//switch (m1 - 1) {
//	case 11: day1 += 30;
//	case 10: day1 += 31;
//	case 9: day1 += 30;
//	case 8: day1 += 31;
//	case 7: day1 += 31;
//	case 6: day1 += 30;
//	case 5: day1 += 31;
//	case 4: day1 += 30;
//	case 3: day1 += 31;
//	case 2: day1 += 28;
//	case 1: day1 += 31;
//
//}
//
//day1 += d1;
//
//
//if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)) {
//	if (m1 > 2) {
//		day1 += 1;
//	}
//}
//
//
//int res2 = y2 - 1;
//long long day2 = res2 * 365 + (res2 / 4) - (res2 / 100) + (res2 / 400);
//
//
//switch (m2 - 1) {
//case 11: day2 += 30;
//case 10: day2 += 31;
//case 9: day2 += 30;
//case 8: day2 += 31;
//case 7: day2 += 31;
//case 6: day2 += 30;
//case 5: day2 += 31;
//case 4: day2 += 30;
//case 3: day2 += 31;
//case 2: day2 += 28;
//case 1: day2 += 31;
//
//}
//
//
//day2 += d2;
//
//
//if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)) {
//	if (m2 > 2) {
//		day2 += 1;
//	}
//}
//
//long long result = abs(day2 - day1);
//
//cout << "Кількість днів між датами: " << result << endl;


//Завдання 2
//Зарплата менеджера становить 200$ + відсоток від продажів(продажі до 500$ — 3 %, від 500 до 1000 — 5 %, понад 1000 — 8 %).
//Користувач вводить із клавіатури рівень продажів для трьох менеджерів.
//Визначити їхню зарплату, визначити найкращого менеджера, нарахувати йому премію 200$, вивести підсумки на екран.

int  thebest, stavka;

float res1, res2, res3, bonus1, bonus2, bonus3, salary1, salary2, salary3, manager1, manager2, manager3;

stavka = 200;

cout << "Ведіть зарплту для першого менеджера: "; cin >> manager1;
cout << "Ведіть зарплату для другого менеджера: ";  cin >> manager2;
cout << "Ведіть зарплату для третього менеджера: ";  cin >> manager3;

if (manager1 <= 500) {
	bonus1 = manager1 * (3.0 / 100);
	salary1 = stavka + bonus1;
}
else if (manager1 <= 1000) {
	bonus1 = manager1 * (5.0 / 100);
	salary1 = stavka + bonus1;
}
else {
	bonus1 = manager1 * (8.0 / 100);
	salary1 = stavka + bonus1;
}


if (manager2 <= 500) {
	bonus2 = manager2 * (3.0 / 100);
	salary2 = stavka + bonus2;
}
else if (manager2 <= 1000) {
	bonus2 = manager2 * (5.0 / 100);
	salary2 = stavka + bonus2;
}
else {
	bonus2 = manager2 * (8.0 / 100);
	salary2 = stavka + bonus2;
}


if (manager3 <= 500) {
	bonus3 = manager3 * (3.0 / 100);
	salary3 = stavka + bonus3;
}
else if (manager3 <= 1000) {
	bonus3 = manager3 * (5.0 / 100);
	salary3 = stavka + bonus3;
}
else {
	bonus3 = manager3 * (8.0 / 100);
	salary3 = stavka + bonus3;
}



if (salary1 > salary2 && salary1 > salary3) {
	thebest = manager1;
}
else if (salary2 > salary1 && salary2 > salary3) {
	thebest = manager2;
}
else {
	thebest = manager3;
}

cout << "Зарплата першого менеджера: " << salary1 << endl;
cout << "Зарплата другого менеджера: " << salary2 << endl;
cout << "Зарплата третього менеджера: " << salary3 << endl;
cout << "Найкращий менеджер: " << thebest << endl;



	return 0;
}