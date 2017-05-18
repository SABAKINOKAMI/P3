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
	 printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
	 printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	 printf("必要時間は%g時間です。\n\n",plans[i].time);
	}
}
