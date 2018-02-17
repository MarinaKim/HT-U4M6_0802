#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>

#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	srand(time(NULL));
	do
	{
		cout << "������� ����� �������: ";
		cin >> n;

		switch (n) {
			//1.	���������� ������� double f(double x, double y), ������� ��������� � ���������� ����� ���������� �������������� ������������, ����� ��� ������ ������� x � y ��������

		case 1: {
			int x, y;
			cout << "������� ������ �������������� ������������: "<<endl;
			cout << "x: ";
			cin >> x;
			cout << "y: ";
			cin >> y;
			cout << "����������: " << gipo(x, y) << endl;


		}break;

			//2.	�������� ������� double f(double x1, double y1, double x2, double y2), ������� ��������� ���������� ����� ����� ������� (xl, yl) � (x2, y2).
		case 2:{
			int x1, y1, x2, y2;
			cout << "������� ���������� �����: " << endl;
			cout << "x1: ";
			cin >> x1;
			cout << "y1: ";
			cin >> y1;
			cout << "x2: ";
			cin >> x2;
			cout << "y2: ";
			cin >> y2;

			cout << "����������: " << distance(x1, y1, x2, y2) << endl;

		}break;

			//3.	�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������. ����������������� ������ ������������� �������
		case 3: {
			double c, d;
			int a, b;
			cout << "������� a: ";
			cin >> a;
			cout << "������� b: ";
			cin >> b;

			cout << "������� c: ";
			cin >> c;
			cout << "������� d: ";
			cin >> d;

			swap(a, b);
			swap(c, d);
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
			cout << "c: " << c << endl;
			cout << "d: " << d << endl;

		}break;

			//4.	�������� ������� swap(int* a, int* b), ������� �������� �������� ���������� a � b ���, ��� ����� �������� a ����� ������� �������� b � ��������.  
		case 4: {
			
			int a, b;
			cout << "������� a: ";
			cin >> a;
			cout << "������� b: ";
			cin >> b;
			swap_1(&a, &b);
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}break;

			//5.	�������� ������� swap(int& a, int& b), ������� �������� �������� ���������� a � b ���, ��� ����� �������� a ����� ������� �������� b � ��������
		case 5: {
			int a, b;
			cout << "������� a: ";
			cin >> a;
			cout << "������� b: ";
			cin >> b;
			swap(a, b);
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;

		}break;
		}
	} while (n > 0);


}