#include "variable.h"

void output(void)
{
	int i;
	
	printf("\n=== 出力処理 ===\n\n");
	
	for(i=0; i<END;i++)
	{
	 printf("%d番目の予定のidは%dで",i+1,plans[i].id);
	 printf("タイトルは%sで",plans[i].title);
	 printf("場所は%sです。 \n\n",plans[i].place);
	}
}
