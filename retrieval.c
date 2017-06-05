#include "variable.h"

void retrieval(void)
{
	int i,no,smenu,yno,mno,dno;
	while(1)
	{
		printf("\n=====検索処理システムメニュー=====\n\n");
		printf("1 :ID検索\n");
		printf("2 :日付検索\n");
		printf("3 :種類検索\n");
        printf("4 :重要度検索\n");
        printf("5 :終了\n\n");
		printf("メニュー番号を選んで下さい : ");
		scanf("%d",&smenu);
		if(smenu ==0)
		 break;
		switch(smenu)
		{
			case 1:
		 	while(1)
			{
			 printf("\n=== ID検索システム ===\n\n");
			 printf("終了する時は0を入力して下さい。\n");
			 printf("検索する予定のIDを入力して下さい:");
			 scanf("%d",&no);
	
			if(no == 0)
			 break;

			for(i=0; i<END; i++)
				{
	  		 	 if(no == plans[i].id)
					{
	 				printf("%d番目の予定のidは%dで",i+1,plans[i].id);
	 				printf("タイトルは%sで",plans[i].title);
					printf("重要度は%dで",plans[i].importance);
	 				printf("場所は%sです。 \n\n",plans[i].place);
	 				printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
	 				printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	 				printf("必要時間は%g時間です。\n\n",plans[i].time);
					 break;
					}
				}
			if(i == END)
			printf("登録されていません\n\n");
			}
		 	break;	
			case 2:
		  	 while(1)
				{
	 				printf("\n=== 日付検索システム ===\n\n");
	 				printf("戻る時は0を入力して下さい。\n");
					printf("1 :年検索\n");
					printf("2 :月検索\n");
					printf("3 :日にち検索\n");
					scanf("%d",&no);
					if(no == 0)
	 				break;
					switch(no)
					{
						case 1:
		 				while(1)
						{
						printf("\n=== 年検索システム ===\n\n");
						printf("終了する時は0を入力して下さい。\n");
						printf("検索する予定のIDを入力して下さい:");
					 	scanf("%d",&yno);
						 
						 if(yno == 0)
						 break;

						for(i=0; i<END; i++)
							{
	  		 	 			if(no == plans[i].year)
								{
	 							printf("%d番目の予定のidは%dで",i+1,plans[i].id);
	 							printf("タイトルは%sで",plans[i].title);
								printf("重要度は%dで",plans[i].importance);
	 							printf("場所は%sです。 \n\n",plans[i].place);
	 							printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
								printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	 							printf("必要時間は%g時間です。\n\n",plans[i].time);
					 			break;
								}
							}
						if(i == END)
						printf("登録されていません\n\n");
						}
		 				break;
						case 2:
		 				while(1)
						{
						 printf("\n=== 月検索システム ===\n\n");
						 printf("終了する時は0を入力して下さい。\n");
						 printf("検索する予定の月を入力して下さい:");
						 scanf("%d",&mno);
	
						 if(mno == 0)
						 break;

						for(i=0; i<END; i++)
							{
	  		 	 			if(no == plans[i].month)
								{
	 							printf("%d番目の予定のidは%dで",i+1,plans[i].id);
	 							printf("タイトルは%sで",plans[i].title);
								printf("重要度は%dで",plans[i].importance);
								printf("場所は%sです。 \n\n",plans[i].place);
	 							printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
	 							printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	 							printf("必要時間は%g時間です。\n\n",plans[i].time);
					 			break;
								}
							}
						if(i == END)
						printf("登録されていません\n\n");
						}
		 				break;
						case 3:
		 				while(1)
						{
						 printf("\n=== 日にち検索システム ===\n\n");
						 printf("終了する時は0を入力して下さい。\n");
						 printf("検索する予定の日にちを入力して下さい:");
						 scanf("%d",&dno);
	
						 if(dno == 0)
						 break;

						for(i=0; i<END; i++)
							{
	  		 	 			if(no == plans[i].day)
								{
	 							printf("%d番目の予定のidは%dで",i+1,plans[i].id);
								printf("タイトルは%sで",plans[i].title);
								printf("重要度は%dで",plans[i].importance);
	 							printf("場所は%sです。 \n\n",plans[i].place);
	 							printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
	 							printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	 							printf("必要時間は%g時間です。\n\n",plans[i].time);
					 			break;
								}
							}
						if(i == END)
						printf("登録されていません\n\n");
						}
		 				break;
					}
				}
			case 3:
		  while(1)
	{
	 printf("\n=== 種類検索システム ===\n\n");
	 printf("終了する時は0を入力して下さい。\n");
	 printf("検索する予定のIDを入力して下さい:");
	 scanf("%d",&no);
	
	if(no == 0)
	 {
	 break;
	 }
	for(i=0; i<END; i++)
		{
	   	 if(no == plans[i].id)
			{
			 printf("%d番目の予定のidは%dで",i+1,plans[i].id);
			 printf("タイトルは%sで",plans[i].title);
			 printf("重要度は%dで",plans[i].importance);
			 printf("場所は%sです。 \n\n",plans[i].place);
			 printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
			 printf("予定内容は『%s』です。 \n\n",plans[i].todo);
			 printf("必要時間は%g時間です。\n\n",plans[i].time);
			 break;
			}
		}
	if(i == END)
	{
	printf("登録されていません\n\n");
	}
	}
		   	   break;
				  case 4:
		 				while(1)
						{
						printf("\n=== 重要度検索システム ===\n\n");
						printf("終了する時は0を入力して下さい。\n");
						printf("検索する予定の重要度を入力して下さい:");
					 	scanf("%d",&yno);
						 
						 if(yno == 0)
						 break;

						for(i=0; i<END; i++)
							{
	  		 	 			if(no == plans[i].importance)
								{
	 							printf("%d番目の予定のidは%dで",i+1,plans[i].id);
	 							printf("タイトルは%sで",plans[i].title);
								printf("重要度は%dで",plans[i].importance);
	 							printf("場所は%sです。 \n\n",plans[i].place);
	 							printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
								printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	 							printf("必要時間は%g時間です。\n\n",plans[i].time);
					 			break;
								}
							}
						if(i == END)
						printf("登録されていません\n\n");
						}
		 				break;
			default:
			break;
		}

	}
	
}	
