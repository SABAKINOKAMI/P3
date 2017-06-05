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
	 printf("この予定の重要度を入力してください");
	 scanf("%d",&plans[i].importance);
	 printf("%d番目の予定の場所を入力して下さい:",i+1);
	 scanf("%s",plans[i].place);
	 printf("%d番目の予定の日時を入力して下さい（例:2017年5月17日10時30分→2017:5:17:10:30):",i+1);
	 scanf("%d:%d:%d:%d:%d", &plans[i].year, &plans[i].month, &plans[i].day, &plans[i].hour, &plans[i].minute);
	 printf("%d番目の予定の内容を入力して下さい:",i+1);
	 scanf("%s",plans[i].todo);
	 printf("%d番目の予定の必要時間を入力してください:",i+1);
	 scanf("%lf",&plans[i].time);
	}

	END=i;
}
