#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);


	srand(time(0));


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

//int  thebest, stavka;
//
//float res1, res2, res3, bonus1, bonus2, bonus3, salary1, salary2, salary3, manager1, manager2, manager3;
//
//stavka = 200;
//
//cout << "Ведіть зарплту для першого менеджера: "; cin >> manager1;
//cout << "Ведіть зарплату для другого менеджера: ";  cin >> manager2;
//cout << "Ведіть зарплату для третього менеджера: ";  cin >> manager3;
//
//if (manager1 <= 500) {
//	bonus1 = manager1 * (3.0 / 100);
//	salary1 = stavka + bonus1;
//}
//else if (manager1 <= 1000) {
//	bonus1 = manager1 * (5.0 / 100);
//	salary1 = stavka + bonus1;
//}
//else {
//	bonus1 = manager1 * (8.0 / 100);
//	salary1 = stavka + bonus1;
//}
//
//
//if (manager2 <= 500) {
//	bonus2 = manager2 * (3.0 / 100);
//	salary2 = stavka + bonus2;
//}
//else if (manager2 <= 1000) {
//	bonus2 = manager2 * (5.0 / 100);
//	salary2 = stavka + bonus2;
//}
//else {
//	bonus2 = manager2 * (8.0 / 100);
//	salary2 = stavka + bonus2;
//}
//
//
//if (manager3 <= 500) {
//	bonus3 = manager3 * (3.0 / 100);
//	salary3 = stavka + bonus3;
//}
//else if (manager3 <= 1000) {
//	bonus3 = manager3 * (5.0 / 100);
//	salary3 = stavka + bonus3;
//}
//else {
//	bonus3 = manager3 * (8.0 / 100);
//	salary3 = stavka + bonus3;
//}
//
//
//
//if (salary1 > salary2 && salary1 > salary3) {
//	thebest = manager1;
//}
//else if (salary2 > salary1 && salary2 > salary3) {
//	thebest = manager2;
//}
//else {
//	thebest = manager3;
//}
//
//cout << "Зарплата першого менеджера: " << salary1 << endl;
//cout << "Зарплата другого менеджера: " << salary2 << endl;
//cout << "Зарплата третього менеджера: " << salary3 << endl;
//cout << "Найкращий менеджер: " << thebest << endl;

//typedef unsigned char Pupsik;
	//Pupsik t;


	/// 22.05.2026

	



	//Дано вещественное число A и целое число N(> 0).Используя один
	//	цикл, вывести все целые степени числа A от 1 до N.


	//float a, res;
	//cin >> a;
	//res = a;

	//int n = 10;
	//for (size_t i = 0; i < n; i++)
	//{
	//	cout << res << endl;
	//	res *= a;
	//}


//23.05.2026 Home Work 3
//Календарь на рік
//int k = 3;
//for (size_t month = 1; month <= 12; month++)
//{
//	int daysinmonth = 31;
//
//	SetColor(White, Black);
//
//	cout << "\n\n=== Month " << month << "===" << endl;
//
//	if (month == 4 || month == 6 || month == 9 || month == 11)
//	{
//		daysinmonth = 30;
//	}
//	else if (month == 2)
//	{
//		daysinmonth = 28;
//	}
//
//
//	SetColor(White, Black);
//	cout << " Mo Tu We TH Fr";
//	SetColor(White, LightRed);
//	cout << " Sa Su" << endl;
//	SetColor(Black, White);
//
//	
//	for (int d = 1 - k; d <= daysinmonth; d++)
//	{
//		if (d <= 0)
//			cout << "   ";
//		else
//		{
//			int dayofweek = (d + k) % 7;
//
//			if (dayofweek == 6 || dayofweek == 0)
//			{
//				SetColor(LightRed, White);
//			}
//			else
//			{
//				SetColor(Black, White);
//			}
//
//			cout << setw(3) << d;
//
//			if (dayofweek == 0)
//			{
//				cout << endl;
//			}
//		}
//	}
//
//	k = (k + daysinmonth) % 7;
//
//	cout << endl;
//
//	SetColor(White, Black);
//}




//while (5)
//{

//}

//for (size_t i = 1; i <= 10; i++)
//	cout << i << endl;
//

//int i = 1;
//while (i <= 10)
//	cout << i++ << endl;
//

//do
//{

//} while (true);

/// 25.05.2026 Lesson 4

	//int a, sum = 0;
	//do
	//{
	//	cin >> a; 
	//	sum += a;
	//} while (a != 0);
	//cout << sum << endl;
//
//for (size_t i = 0; i < 10; i++)
//{
//	cout << rand() % 10 + 10 << endl;
//}

//
//int students = 4, subject = 3;
//int grade;
//int total = 0;
//int sub1 = 0;
//int sub2 = 0;
//int sub3 = 0;
//
//
//SetColor(LightRed, Black);
//cout << "Ведіть оцінку для студента (від 2 до 5): " << endl;
//SetColor(White, Black);
//
//for (size_t i = 1; i <=  students; i++)
//{
//	int students3 = 0;
//	SetColor(LightGreen, Black);
//	cout << "Студент" << i << "(Ведіть 3 оцінки через пробіл:) " << endl;
//	SetColor(White, Black);
//	
//	for (size_t j = 1; j <= subject; j++)
//	{
//		cin >> grade;
//
//		if (grade == 5)
//		{
//			total++;
//		}
//		if (grade == 3)
//		{
//			students3++;
//		}
//		if (grade == 2)
//		{
//			if (j == 1)
//			{
//				sub1++;
//			}
//			else if (j == 2)
//			{
//				sub2++;
//			}
//			else if (j == 3)
//			{
//				sub3++;
//			}
//		}
//
//	}
//
//	SetColor(LightBlue, Black);
//	cout << "Трійок у студента" << " " << students3 << endl;
//	SetColor(White, Black);
//}
//SetColor(Yellow, Black);
//cout << "----- Результат -----" << endl;
//SetColor(White, Black);
//
//cout << "Предмет 1" << " " << sub1 << endl;
//cout << "Предмет 2 " << " " << sub2 << endl;
//cout << "Предмет 3" << " " << sub3 << endl;
//SetColor(Yellow, Black);
//cout << "---------------------" << endl;
//SetColor(White, Black);


//26.05.2026 Home Work 4


//Старинная задача.
//Плата за быка 10 рублей, за корову – 5 рублей, за телёнка – полтинник(0, 5 рубля).
//Определить, можно ли ровно на M рублей купить ровно N голов скота.Если это
//возможно, вывести "yes", в противном случае – "no".

//float m;
//int n;
//cout << "Ведіть сумму: " << endl;
//cin >> m;
//cout << "Ведіть кількість голів: " << endl;
//cin >> n;
//
//long long total = m * 100;
//long long bull = 1000;
//long long cow = 500;
//long long calf = 50;
//
//bool found = false;
//
//for (size_t x = 0; x * bull <= total; x++)
//{
//	for (size_t  y = 0; x * bull + y * cow <= total; y++)
//	{
//		int z = n - x - y;
//
//		if (z >= 0 && (x * bull + y * cow + z * calf == total))
//		{
//			found = true;
//			break;
//		}
//	}
//}
//
//if (found)
//{
//	cout << "yes" << endl;
//}
//else
//{
//	cout << "no" << endl;
//}

//Даны натуральное число n и целые числа b1, b2, ..., bn.
//Найти номер последнего числа, большего 100. Известно, что та -
//кие числа среди заданных имеются.

//int n;
//cout << "Ведіть кількість чисел" << endl;
//cin >> n;
//
//srand(time(0));
//
//int index = 0;
//cout << "Згенеровані числа: " << endl;
//for (int i = 1; i <= n; i++)
//{
//	int random = rand() % 200 + 1;
//
//	cout << i << "-е число: " << random << endl;
//
//	if (random > 100)
//	{
//		index = i;
//	}
//}
//
//cout << "Номер останього числа більшого за 100: " << index << endl;


//В некоторой стране используются денежные купюры до -
//стоинством в 1, 2, 4, 8, 16, 32 и 64. Дано натуральное число n.
//Как наименьшим количеством таких денежных купюр можно вы -
//платить суммы n, n + 1, ..., n + 10 (указать количество каждой из
//	используемых для выплаты купюр) ? Предполагается, что имеется
//	достаточно большое количество купюр всех достоинств.


//int n;
//cout << "Ведіть додатне число: " << endl;
//cin >> n;
//
//cout << "Результат" << endl;
//
//for (int sum = n;  sum <= n + 10;  sum++)
//{
//	cout << "Сумма: " << sum << " = ";
//
//	int temp = sum;
//
//
//	int k64 = temp / 64; temp %= 64;
//	int k32 = temp / 32; temp %= 32;
//	int k16 = temp / 16; temp %= 16;
//	int k8 = temp / 8; temp %= 8;
//	int k4 = temp / 4; temp %= 4;
//	int k2 = temp / 2; temp %= 2;
//	int k1 = temp / 1; 
//	
//
//	bool a = true;
//
//	if (k64 > 0) { cout << "64 x" << k64 << " "; a = false; }
//	if (k32 > 0) { cout << "32 x" << k32 << " "; a = false; }
//	if (k16 > 0) { cout << "16 x" << k16 << " "; a = false; }
//	if (k8 > 0) { cout << "8 x" << k8 << " "; a = false; }
//	if (k4 > 0) { cout << "4 x" << k4 << " "; a = false; }
//	if (k2 > 0) { cout << "2 x" << k2 << " "; a = false; }
//	if (k1 > 0) { cout << "1 x" << k1 << " "; a = false; }
//	
//	if (a)
//	{
//		cout << "0 купюр";
//	}
//
//	cout << endl;
//}

//29.05.2026 Lesson 5

//const int size = 10;
//int a[size]; //= { 1,2,4,5,6 };
//int count = 0;
//int min = 0, max = 9;
//for (size_t i = 0; i < size; i++)
//{
//	a[i] = rand() % (max - min + 1) + min;
//	cin >> a[i];
//}
//for (size_t i = 0; i < size; i++)
//{
//	cout << a[i] << " ";
//}
//cout << endl;
//
//const int size = 10;
//int a[size];
//int b[size];
//int max_znachenya = a[0];
//int j = 0;
//int index = 0;
//int min = 0, max = 10;
//
//for (size_t i = 0; i < size; i++)
//{
//	a[i] = rand() % (max - min + 1) + min;
//}for (size_t i = 0; i < size; i++)
//{
//	cout << a[i] << " ";
//}
//int t = a[0];
//a[0] = a[size - 1];
//a[size - 1] = t;
//
//cout << endl;
//
//for (size_t i = 0; i < size; i++)
//{
//	cout << a[i] << " ";
//}
//cout << endl;

//Бульбашкове сортування
//const int size = 10;
//int a[size];
//for (size_t i = 0; i < size - 1; i++)
//{
//	for (size_t j = 0; j < size - 1 - i; j++)
//	{
//		if (a[j] > a[j + 1])
//		{
//			int t = a[j];
//			a[j] = a[j + 1];
//			a[j + 1] = t;
//		}
//		
//	}
//}
//for (size_t i = 0; i < size; i++)
//{
//	cout << a[i] << " ";
//}

//for (size_t i = 0; i < size - 1; i++)
//{
//	for (size_t j = 0; j < size - 1 - i; j++)
//	{
//		if (a[j] > a[j + 1])
//		{
//			swap(a[i], a[i + 1]);
//		}
//	}
//}

//Перевернутий список
//const int size = 10;
//int a[size];
//int b[size];
//int j = 0;
//int min = 0, max = 10;
//for (size_t i = 0; i < size; i++)
//{
//	a[i] = rand() % (max - min + 1) + min;
//}
//for (size_t i = 0; i < size; i++)
//{
//	cout << a[i] << " ";
//}
//for (int i = size - 1; i >= 0;  i++)
//{
//	cout << a[i] << " ";
//}
//cout << endl;
//for (size_t i = 0; i < size / 2; i++)
//{
//	int g = a[i];
//	a[i] = a[size - 1 - i];
//	a[size - 1 - i] = g;
//}
//
//for (size_t i = 0; i < size; i++)
//{
//	cout << a[i] << " ";
//}


//30.05.26 Home Work 5
//
// 
// Завдання 1
//Написати програму "довідник".Створити два одновимірні масиви.
// Один масив зберігає номери мобільних телефонів, другий — домашні телефонні номери.Реалізувати меню для користувача :
//Відсортувати за номерами мобільних;
//Відсортувати за домашніми номерами телефонів;
//Вивести список користувачів;
//Вихід.
 

const int size = 5;
int mobile_numbers[size] = {379836, 9287363, 93763, 38595985, 948336};
int home_numbers[size] = {772266, 8373363, 9393, 938838, 389371};
string  names[size] = { "Каріна", "Олег", "Дмитро", "Іван", "Марія" };
int choice;
while (true)
{
	SetColor(Yellow, Black);
	cout << "Довідник" << endl;
	cout << "Оберіть дію" << endl;
	cout << "1. Відсортувати за номерами мобільних: " << endl;
	cout << "2. Відсортувати за домашніми номерами телефонів: " << endl;
	cout << "3. Вивести список користувачів: " << endl;
	cout << "4. Вихід: " << endl;
	cout << "Зробіть ваш вибір (1-4): ";
	SetColor(White, Black);
	cin >> choice;

	if (choice == 1)
	{
		for (int i = size; i > 1; i--)
		{
			int max_index = 0;
			for (int  j = 1; j < i; j++)
			{
				if (mobile_numbers[j] > mobile_numbers[max_index])
				{
					max_index = j;
				}
			}
			if (max_index != i - 1)
			{
				if (max_index != 0)
				{
					int start = 0;
					int end = max_index;
					while (start < end)
					{
						int mob = mobile_numbers[start];
						mobile_numbers[start] = mobile_numbers[end];
						mobile_numbers[end] = mob;

						int home = home_numbers[start];
						home_numbers[start] = home_numbers[end];
						home_numbers[end] = home;

						string name = names[start];
						names[start] = names[end];
						names[end] = name;

						start++;
						end--;
					}
				}

				int start = 0;
				int end = i - 1;
				while (start < end)
				{
					int mob = mobile_numbers[start];
					mobile_numbers[start] = mobile_numbers[end];
					mobile_numbers[end] = mob;

					int home = home_numbers[start];
					home_numbers[start] = home_numbers[end];
					home_numbers[end] = home;

					string name = names[start];
					names[start] = names[end];
					names[end] = name;

					start++;
					end--;
				}
			}
		}
		cout << "Довідник успішно відсортовано за мобільними номерами: ";

		cout << "Оновлений список: ";
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ". " << names[i]
				<< " -> Мобільний: " << mobile_numbers[i]
				<< ", Домашній: " << home_numbers[i] << endl;
		}
	}
	else if (choice == 2)
	{
		for (int i = size; i > 1; i--)
		{
			int max_index = 0;
			for (int j = 1; j < i; j++)
			{
				if (home_numbers[j] > home_numbers[max_index])
				{
					max_index = j;
				}
			}
			if (max_index != i - 1)
			{
				if (max_index != 0)
				{
					int start = 0;
					int end = max_index;
					while (start < end)
					{
						int mob = mobile_numbers[start];
						mobile_numbers[start] = mobile_numbers[end];
						mobile_numbers[end] = mob;

						int home = home_numbers[start];
						home_numbers[start] = home_numbers[end];
						home_numbers[end] = home;

						string name = names[start];
						names[start] = names[end];
						names[end] = name;

						start++;
						end--;
					}
				}

				int start = 0;
				int end = i - 1;
				while (start < end)
				{
					int mob = mobile_numbers[start];
					mobile_numbers[start] = mobile_numbers[end];
					mobile_numbers[end] = mob;

					int home = home_numbers[start];
					home_numbers[start] = home_numbers[end];
					home_numbers[end] = home;

					string name = names[start];
					names[start] = names[end];
					names[end] = name;

					start++;
					end--;
				}
			}
		}
		cout << "Довідник успішно відсортовано за домашінми номерами: ";

		cout << "Оновлений список користувачів:";
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ". " << names[i]
				<< " -> Мобільний: " << mobile_numbers[i]
				<< ", Домашній: " << home_numbers[i] << endl;
		}
	}
	else if (choice == 3)
	{
		cout << "Список користувачів довідника: ";
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ". " << names[i]
				<< "-> Мобільний: " << mobile_numbers[i]
				<< ", Домашній: " << home_numbers[i] << endl;
		}
	}
	else if (choice == 4)
	{
		cout << "Допобачення!";
		break;
	}
	else
	{
		cout << "Неправильний вибір! Ведіть число від 1 до 4.";
	}
}


//Завдання 2
//Написати програму, що реалізує сортування масиву методом удосконаленого сортування 
//бульбашковим методом.Удосконалення полягає в тому, щоб аналізувати кількість перестановок на кожному кроці, 
//якщо ця кількість дорівнює нулю, то продовжувати сортування немає сенсу — масив відсортовано.

const int size = 10;
int a[size];
for (size_t i = 0; i < size - 1; i++)
{
	bool swapp = false;
	for (size_t j = 0; j < size - 1 - i; j++)
	{
		if (a[j] > a[j + 1])
		{
			int t = a[j];
			a[j] = a[j + 1];
			a[j + 1] = t;

			swapp = true;
		}
	}
	if (!swapp)
	{
		break;
	}
}
for (size_t i = 0; i < size; i++)
{
	cout << a[i] << " ";
}
cout << endl;


//Завдання 3
//Є стопка оладок різного радіуса.Єдина операція, що проводиться з ними — між будь - якими двома 
//вставляємо лопатку і змінюємо порядок оладок над лопаткою на зворотний.
//Необхідно за мінімальну кількість таких операцій відсортувати знизу вгору за зменшенням радіуса.
//
const int  size = 10;
int a[size] = {2, 8, 10 , 6, 4, 2 ,1};

for (int i = size; i < 1; i--)
{
	int max_index = 0;
	for (int j = 1; j < i; j++)
	{
		if (a[j] > a[max_index])
		{
			max_index = i;
		}
	}
	if (max_index != i - 1)
	{
		if (max_index != 0)
		{
			int start = 0;
			int end = max_index;
			while (start < end)
			{
				int temp = a[start];
				a[start] = a[end];
				a[end] = temp;

				start++;
				end--;
			}
		}

		int start = 0;
		int end = i - 1;
		while (start < end)
		{
			int temp = a[start];
			a[start] = a[end];
			a[end] = temp;

			start++;
			end--;
		}
	}
}

for  (int i = 0; i < size; i++)
{
	cout << a[i] << " ";
}



	return 0;
}