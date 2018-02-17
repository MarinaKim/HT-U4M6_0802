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
		cout << "Введите номер задания: ";
		cin >> n;

		switch (n) {
			//1.	Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника, когда две другие стороны x и y известны

		case 1: {
			int x, y;
			cout << "введите катеты прямоугольного треугольника: "<<endl;
			cout << "x: ";
			cin >> x;
			cout << "y: ";
			cin >> y;
			cout << "Гипотенуза: " << gipo(x, y) << endl;


		}break;

			//2.	Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2).
		case 2:{
			int x1, y1, x2, y2;
			cout << "введите координаты точек: " << endl;
			cout << "x1: ";
			cin >> x1;
			cout << "y1: ";
			cin >> y1;
			cout << "x2: ";
			cin >> x2;
			cout << "y2: ";
			cin >> y2;

			cout << "Расстояние: " << distance(x1, y1, x2, y2) << endl;

		}break;

			//3.	Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. Продемонстрируйте работу перегруженных функций
		case 3: {
			double c, d;
			int a, b;
			cout << "введите a: ";
			cin >> a;
			cout << "введите b: ";
			cin >> b;

			cout << "введите c: ";
			cin >> c;
			cout << "введите d: ";
			cin >> d;

			swap(a, b);
			swap(c, d);
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
			cout << "c: " << c << endl;
			cout << "d: " << d << endl;

		}break;

			//4.	Напишите функцию swap(int* a, int* b), которая изменяет значения параметров a и b так, что новое значение a равно старому значению b и наоборот.  
		case 4: {
			
			int a, b;
			cout << "введите a: ";
			cin >> a;
			cout << "введите b: ";
			cin >> b;
			swap_1(&a, &b);
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}break;

			//5.	Напишите функцию swap(int& a, int& b), которая изменяет значения параметров a и b так, что новое значение a равно старому значению b и наоборот
		case 5: {
			int a, b;
			cout << "введите a: ";
			cin >> a;
			cout << "введите b: ";
			cin >> b;
			swap(a, b);
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;

		}break;
		}
	} while (n > 0);


}