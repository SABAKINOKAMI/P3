#include "variable.h"

//メニュー
void input(void)
{
    int i, imenu, edit, list, alter, altery, altermon, alterd, alterh, altermin;
    char alters[250];
    double altert;
    while (1)
    {

	printf("\n=== 入力処理 ===\n\n");
	printf("1 :入力処理\n");
	printf("2 :修正処理\n");
	printf("終了する時は0を入力して下さい。\n\n");
	scanf("%d", &imenu);
	if (imenu == 0)
	{
	    break;
	}
	switch (imenu)
	{
	case 1:
	{
	    for (i = END; i < plans_MAX; i++)
	    {
		//ID
		printf("%d番目の予定のIDを入力して下さい:", i + 1);
		scanf("%d", &plans[i].id);
		if (plans[i].id == 0)
		{
		    break;
		}

		//タイトル　20字以内
		printf("%d番目の予定のタイトルを入力して下さい:", i + 1);
		scanf("%s", plans[i].title);
		//重要度
		printf("この予定の重要度を入力してください:");
		scanf("%d", &plans[i].importance);
		//場所　20文字以内
		printf("%d番目の予定の場所を入力して下さい:", i + 1);
		scanf("%s", plans[i].place);
		//日時　年　月　日　時　分
		printf("%d番目の予定の日時を入力して下さい（例:2017年5月17日10時30分→2017:5:17:10:30):", i + 1);
		scanf("%d:%d:%d:%d:%d", &plans[i].year, &plans[i].month, &plans[i].day, &plans[i].hour, &plans[i].minute);
		//内容　500文字以内
		printf("%d番目の予定の内容を入力して下さい:", i + 1);
		scanf("%s", plans[i].todo);
		//必要時間
		printf("%d番目の予定の必要時間を入力してください:", i + 1);
		scanf("%lf", &plans[i].time);
		END = i;
	    }
	    break;
	}
	case 2:
	{
	    printf("\n=== 修正処理 ===\n");
	    printf("修正したい予定のIDを入力して下さい : ");
	    scanf("%d", &edit);
	    if (edit == 0)
	    {
		break;
	    }
	    for (i = END; i < plans_MAX; i++)
	    {
		if (edit == plans[i].id)
		{
		    printf("変更したい項目を入力してください\n");
		    printf("1: タイトル\n");
		    printf("2: 重要度\n");
		    printf("3: 場所\n");
		    printf("4: 日時\n");
		    printf("5: 内容\n");
		    printf("6: 必要時間\n");
		    printf("終了するときは0を押して下さい\n");
		    scanf("%d", &list);
		}
		if (list == 0)
		{
		    break;
		}
		switch (list)
		{
		case 1:
		{
		    printf("修正後のタイトルを入力して下さい");
		    scanf("%s", alters);
		    if (alters == 0)
		    {
			break;
		    }
		    strcpy(plans[edit].title, alters);
		    printf("修正後の場所は%sです", plans[edit].title);
		    break;
		}

		case 2:
		{
		    printf("修正後の重要度を入力して下さい");
		    scanf("%d", &alter);
		    if (alter == 0)
		    {
			break;
		    }
		    plans[edit].importance = alter;
		    printf("修正後の重要度は%dです", plans[edit].importance);
		    break;
		}
		case 3:
		  { 
			  printf("修正後の場所を入力して下さい");
		    scanf("%s", alters);
		    if (alters == 0)
		    {
			break;
		    }
		    strcpy(plans[edit].place, alters);
		    printf("修正後の場所は%sです", plans[edit].place);
		    break;
		  }
		case 4:
		    {
				printf("修正後の日時を入力して下さい");
		    scanf("%d:%d:%d:%d:%d", &altery, &altermon, &alterd, &alterh, &altermin);
		    if (altery == 0)
		    {
			break;
		    }
		    plans[edit].year = altery;
		    plans[edit].month = altermon;
		    plans[edit].day = alterd;
		    plans[edit].hour = alterh;
		    plans[edit].minute = altermin;
		    printf("修正後の重要度は%d:%d:%d:%d:%dです", plans[edit].year, plans[edit].month, plans[edit].day, plans[edit].hour, plans[edit].minute);
		    break;
			}
		case 5:
		    {
			printf("修正後の内容を入力して下さい");
		    scanf("%s", alters);
		    if (alters == 0)
		    {
			break;
		    }
		    strcpy(plans[edit].todo, alters);
		    printf("修正後の内容は%sです", plans[edit].todo);
		    break;
			}
		case 6:
		    {
			printf("修正後の必要時間を入力して下さい");
		    scanf("%lf", &altert);
		    if (altert == 0)
		    {
			break;
		    }
		    plans[edit].time = altert;
		    printf("修正後の必要時間は%gです", plans[edit].time);
		    break;
			}
		}
	    }
	}
	}
    }
}