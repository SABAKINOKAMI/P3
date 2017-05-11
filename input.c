#include "variable.h"

void input(void)
{
	int i;
	
	printf("\n=== 入力処理 ===\n\n");
	printf("終了する時は0を入力して下さい。\n");

	for(i=END;i<plans_MAX;i++)
	{
	 printf("%d番目の予定のIDを入力して下さい:",i+1);
	 scanf("%d",&plans[i].id);
	 if(plans[i].id == 0)
		break;
	 printf("%d番目の予定のタイトルを入力して下さい:",i+1);
	 scanf("%s",plans[i].title);
	 printf("%d番目の予定の場所を入力して下さい:",i+1);
	 scanf("%s",plans[i].place);
	}

	END=i;
}
