#pragma once
#include<iostream>
#include<Windows.h>

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

//type name(param)
//{
//	body;
//}


void starLine(int size = 10, char symbol = '*')
{
	for (size_t i = 0; i < size; i++)
	{
		cout << symbol;
	}
	cout << endl;
}


template<class T>
double avg3(T a, T b, T c)
{
	return (a + b + c) / 3.;
}


template<class T>
void printArray(T arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T arr[], int size, T minValue = 0, T maxValue = 9)
{
	cout << "template setArray" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = T();
	}
}


void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	cout << "int setArray" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}


template<class T>
void bublleSort(T arr[], int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

template<class T>
int findArray(T arr[], int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}

	return -1;
}



int linearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[], int size, int key)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int midle = left + (right - left) / 2;
		if (arr[midle] == key)
		{
			return midle;
		}
		if (arr[midle] < key)
		{
			left = midle + 1;
		}
		else
		{
			right = midle - 1;
		}
	}
	return -1;
}

int binarytoDecimal(long long binary)
{
	int decimal = 0;
	int power = 0;

	while (binary > 0)
	{
		int lastDigit = binary % 10;
		decimal += lastDigit * pow(2, power);
		binary /= 10;
		power++;
	}
	return decimal;
}


long long decimalTobinary(int decimal)
{
	long long binary = 0;
	long long place = 1;

	while (decimal > 0)
	{
		int temp = decimal % 2;
		binary += temp * place;
		decimal /= 2;
		place *= 10;
	}
	return binary;
}

template<class T>
T maxValueArray(T arr[], int size)
{
	T maxValue = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}
	return maxValue;
}

template<class T>
int countValueArray(T arr[], int size, T key)
{
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			count++;
		}
	}
	return count;
}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}


void rec()
{
	static int a = 0;
	a++;
	rec();
}

void printArray2D(int arr[10][10], int row, int col)
{

}

template<class T>
T fff()
{
	T a = 9;
	//
}

const char Empty = ' ';
const char player_1 = 'X';
const char player_2 = 'O';

void clearscreen()
{
	system("cls");
}

void drawBoard(const char board[3][3])
{
	clearscreen();
	cout << "\n      Хрестики - нулики \n\n";
	cout << "        1     2     3 \n";
	cout << "     +-----+-----+-----+\n";
	for (int i = 0; i < 3; ++i)
	{
		cout << "  " << i + 1 << "  |  " << board[i][0]
			<< "  |  " << board[i][1] << "  |  " << board[i][2] << "  |\n";
		cout << "     +-----+-----+-----+\n";
	}
	cout << endl;
}

bool checkWin(const char board[3][3], char player)
{
	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
	}
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;

	return false;
}

bool check(const char board[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == Empty) return false;
		}
	}
	return true;
}

void move(char board[3][3], char player)
{
	int row, col;
	while (true)
	{
		cout << "Гравець " << player << ", ваш хід. \n";
		cout << "Веди номер рядка та стовпчика: ";
		cin >> row >> col;

		row--;
		col--;

		if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == Empty)
		{
			board[row][col] = player;
			break;
		}
		else
		{
			cout << "Не коректний хід";
		}
	}
}

void playGame()
{
	char board[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = Empty;
		}
	}
	
	char player = player_1;
	bool gameOver = false;

	while (!gameOver)
	{
		drawBoard(board);
		move(board, player);

		if (checkWin(board, player))
		{
			drawBoard(board);
			cout << "Вітаємо! Гравцеь " << player << "переміг";
			gameOver = true;
		}
		else if (check(board))
		{
			drawBoard(board);
			cout << "Нічия!";
			gameOver = true;
		}
		else
		{
			if (player == player_1) {
				player = player_2;
			}
			else {
				player = player_1;
			}
		}
	}

}


void sortArray_2(int arr[], int size, bool desc = false)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if ((desc && arr[j] < arr[j + 1]) || (!desc && arr[j] > arr[j + 1])) {
				swap(arr[j], arr[j + 1]);

			}
		}
	}
}

void sortHals(int arr[], int size)
{
	int mid = size / 2;
	for (int i = 1; i < mid; ++i)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

	for (int i = mid + 1; i < size; ++i)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= mid && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void inc(int* a)
{
	++(*a);
}

template<class T>
T* addValueArray(T* arr, int* size, T value)
{
	T* temp = new T[*size + 1];
	for (size_t i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = value;
	delete[] arr;
	(*size)++;
	return temp;
}

int* SumProdArray(int* arr, int size)
{
	int* res = new int[2] {0, 1};

	for (size_t i = 0; i < size; i++)
	{
		res[0] += arr[i];
		res[1] *= arr[i];
	}

	return res;
}

void printArray(int* arr)
{
	int block = _msize(arr);
	int size = block / sizeof(int);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int* remove(const int* arr, int& size)
{
	int size2 = 0;
	for (int i = 0; i < size; ++i)
	{
		if (!prime(arr[i]))
		{
			size2++;
		}
	}
	if (size2 == 0)
	{
		return nullptr;
	}

	int* arr2 = new int[size2];
	int index = 0;

	for (int i = 0; i < size; ++i)
	{
		if (!prime(arr[i]))
		{
			arr2[index++] = arr[i];
		}
	}

	size = size2;
	return arr2;
}

void splitArray(const int* arr, int size, int*& pos, int& posSize, int*& neg, int& negSize, int*& zer, int& zerSize)
{
	posSize = 0;
	negSize = 0;
	zerSize = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			posSize++;
		}
		else if (arr[i] < 0)
		{
			negSize++;
		}
		else
		{
			zerSize++;
		}
	}
	if (posSize > 0) {
		pos = new int[posSize]; 
	}
	else {
		pos = nullptr;          
	}

	if (negSize > 0) {
		neg = new int[negSize]; 
	}
	else {
		neg = nullptr;
	}

	if (zerSize > 0) {
		zer = new int[zerSize];   
	}
	else {
		zer = nullptr;
	}
	
	int posi = 0;
	int negi = 0;
	int zeri = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			pos[posi++] = arr[i];
		}
		else if (arr[i] < 0)
		{
			neg[negi++] = arr[i];
		}
		else
		{
			zer[zeri++] = arr[i];
		}
	}
}

//1. Функція розподілу динамічної пам'яті
int* allocateArray(int size)
{
	if (size <= 0)
	{
		return nullptr;
		return new int[size];
	}
}

//2. Функція ініціалізації динамічного масиву
void initialArray(int* arr, int size, int num = 0)
{
	if (!arr)
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = num + i;
	}
}

//3. Функція друку динамічного масиву
void printArray2(const int* arr, int size)
{
	if (size <= 0)
	{
		cout << "Масив порожній";
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//4. Функція видалення динамічного масиву

void deleteArray(int*& arr)
{
	if (arr != nullptr)
	{
		delete[] arr;
		arr = nullptr;
	}
}

//5. Функція додавання елемента в кінець масиву

void inBack(int*& arr, int& size, int num)
{
	int* arr2 = allocateArray(size + 1);

	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}

	arr2[size] = num;

	deleteArray(arr);
	arr = arr2;
	size++;
}

//6. Функція вставки елемента за вказаним індексом

void insertIndex(int*& arr, int& size, int index, int num)
{
	if (index < 0 || index > size)
	{
		cout << "Не коректний індекс";
		return;
	}

	int* arr2 = allocateArray(size + 1);

	for (int i = 0; i <  index ; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index] = num;

	for (int i = 0; i < size; ++i)
	{
		arr2[i + 1] = arr[i];
	}

	deleteArray(arr);
	arr = arr2;
	size++;
}

// 7. Функція видалення елемента за вказаним індексом

void remove(int*& arr, int& size, int index)
{
	if (index < 0 || index >= size)
	{
		cout << "Не коректний індекс";
		return;
	}

	if (size == 1)
	{
		deleteArray(arr);
		size = 0;
		return;
	}

	int* arr2 = allocateArray(size - 1);

	for (int i = 0; i < index; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index + 1; i < size; ++i)
	{
		arr2[i - 1] = arr[i];
	}

	deleteArray(arr);
	arr = arr2;
	size--;
}

void hello()
{
	cout << "Hello" << endl;
}

void goodbye()
{
	cout << "Goodbye" << endl;
}

void mult10(int& a)
{
	a *= 10;
}

void print(int& a)
{
	cout << a << " ";
}

int sum(int a, int b)
{
	return a + b;
}

template<class T>
void forEach(T* arr, int size, void(*func)(T&))
{
	for (size_t i = 0; i < size; i++)
	{
		func(arr[i]);
	}
}


void kopatel1()
{
	//
	cout << "Копає один робітник з лопатою" << endl;
}


void kopatel3()
{
	cout << "Копають три робітника з лопатами і кірками" << endl;
}

void exkavator()
{
	cout << "Копає екскаватор, робітники курять в сторонці.. ))" << endl;
}

void(*prorab(int len))()
{
	if (len <= 100)
	{
		return kopatel1;
	}
	else if (len <= 500)
	{
		return kopatel3;
	}
	else
	{
		return exkavator;
	}
}


void pistol(int* bullets)
{
	cout << "->" << endl;
	bullets[0]--;
}

void gun(int* bullets)
{
	cout << "-> -> -> -> -> " << endl;
	bullets[1] -= 5;
}

void arrow(int* bullets)
{
	cout << ">>----->" << endl;
	bullets[2] -= 1;
}


void(*selectWeapon(int* bullets))(int*)
{
	void(*weapons[])(int*) = { pistol, gun, arrow };

	return weapons[findArray(bullets, 3, maxValueArray(bullets, 3))];
}

double getMax(const int* arr, int size, const int* arr2, int size2)
{
	int maxValue = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}
	for (int i = 0; i < size2; ++i)
	{
		if (arr2[i] > maxValue)
		{
			maxValue = arr2[i];
		}
	}
	return maxValue;
}

double getMin(const int* arr, int size, const int* arr2, int size2)
{
	int minValue = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}
	for (int i = 0; i < size2; ++i)
	{
		if (arr2[i] < minValue)
		{
			minValue = arr2[i];
		}
	}
	return minValue;
}

double getAvg(const int* arr, int size, const int* arr2, int size2)
{
	double sum = 0;
	int size3 = size + size2;
	
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	for (int i = 0; i < size2; i++)
	{
		sum += arr2[i];
	}
	return sum / size3;
}


double Action(const int* arr, int size, const int* arr2, int size2, double(*op)(const int*, int, const int*, int))
{
	return op(arr, size, arr2, size2);
}

template<class T>
void createArray(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<class T>
void setArray(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

template<class T>
void printArray(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

template<class T>
void deleteArray(T**& arr, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

template<class T>
void addRowArray(T**& arr, int& row, int col, T* newRow = nullptr)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		temp[i] = arr[i];
	}

	temp[row] = new T[col];
	for (size_t i = 0; i < col; i++)
	{
		temp[row][i] = (newRow != nullptr) ? newRow[i] : 0;
	}

	delete[] arr;
	row++;
	arr = temp;
}