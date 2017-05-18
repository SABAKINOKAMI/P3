#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#define title_MAX 20
#define place_MAX 20
#define plans_MAX 500
#define time_MAX 20
#define todo_MAX 500
int END;

struct name
{
	int id;
	char title[title_MAX];
	char place[place_MAX];
	char time[time_MAX];
	char todo[todo_MAX];
}plans[plans_MAX];


