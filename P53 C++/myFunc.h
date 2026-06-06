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


float avg3(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}

void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bublleSort(int arr[], int size)
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

int findArray(int arr[], int size, int key)
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