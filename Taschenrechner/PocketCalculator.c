/*
 * PocketCalculator.c
 *
 *  Created on: Sep 24, 2014
 *      Author: root
 */

#include <stdio.h>
#include <values.h>
//#include <PCwork.c>

int main (int argc,char *argv[])
{
printf("In C gibt es unterschiedliche Variablentypen\nDeren Wertebereiche unterschiedlich gross sind.\nshort: %i - %i\nint:%i - %i\nlong:%li - %li\nfloat:%d - %d\ndouble:%ld -%ld\nlong double:%ld - %ld",\
		MINSHORT,MAXSHORT,MININT,MAXINT,MINLONG,MAXLONG,MINFLOAT,MAXFLOAT,MINDOUBLE,MAXDOUBLE);
return 0;
}
