#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>

double gipo(double x, double y)
{
	return sqrt((x*x + y*y));
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

void swap(int& a, int& b)
{
	int c=a;
	a = b;
	b = c;

}
void swap(double& a, double& b)
{
	double c = a;
	a = b;
	b = c;

}

void swap_1(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;

}