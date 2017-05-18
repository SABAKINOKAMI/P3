#include<stdio.h>
#include<stdlib.h>
#define title_MAX 20
#define place_MAX 20
#define plans_MAX 500

int END;

struct name
{
	int id;
	char title[title_MAX];
	char place[place_MAX];
}plans[plans_MAX];


