/*
 * PCwork.c
 * A little Pocket Calculator
 * v1: Plus and minus are available
 *  Created on: Sep 21, 2014
 *      Author: Erik Braendli
 */
#include <values.h>

long double calcp(double a, double b)
{
	long double c = a+b;
	return c;

}

long double calcm(double a, double b)
{
	long double c = a - b;
	return c;

}

extern long double calcd(double a, double b, char op)
{
	switch(op)
	{
	case '-':
		return calcm(a,b);
		break;
	case '+':
		return  calcp(a,b);
		break;

	}
	return 0;
}



