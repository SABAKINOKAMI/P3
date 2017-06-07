#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#define title_MAX 100
#define place_MAX 100
#define plans_MAX 500
#define todo_MAX 500
int END;

struct name
{
	
	int id;
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int importance;
	int kind;
    double time;
	char title[title_MAX];
	char place[place_MAX];
	char todo[todo_MAX];
}plans[plans_MAX];
