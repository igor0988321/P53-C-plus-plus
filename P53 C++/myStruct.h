#pragma once
#include<iostream>

using namespace std;


struct Point
{
	char name;
	int x;
	int y;
};

void printPoint(Point p)
{
	cout << p.name << "(" << p.x << ", " << p.y << ")" << endl;
}


struct Date
{
	int day;
	int month;
	int year;
};

void printDate(Date d) {
	if (d.day < 10)
		cout << "0";
	cout << d.day << ".";

	if (d.month < 10)
		cout << "0";
	cout << d.month << ".";

	cout << d.year << endl;
}


struct Human
{
	char* name;
	Date bd;
};
