#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#define title_MAX 20
#define place_MAX 20
#define plans_MAX 500
#define todo_MAX 500
int END;

struct name
{
	int id,year,month,day,hour,minute;
	double time;
	char title[title_MAX];
	char place[place_MAX];
	char todo[todo_MAX];
}plans[plans_MAX];


