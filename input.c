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
			printf("%d番目の予定のIDを入力して下さい : ", i + 1);
			scanf("%d", &plans[i].id);
			if (plans[i].id == 0)
			{
				break;
			}

			//タイトル　100字以内
			printf("%d番目の予定のタイトルを入力して下さい : ", i + 1);
			scanf("%s", plans[i].title);
			//重要度
			printf("この予定の重要度を入力してください : ");
			scanf("%d", &plans[i].importance);
			//場所　100文字以内
			printf("%d番目の予定の場所を入力して下さい : ", i + 1);
			scanf("%s", plans[i].place);
			//日時　年　月　日　時　分
			printf("%d番目の予定の日時を入力して下さい（例:2017年5月17日10時30分→2017:5:17:10:30) : ", i + 1);
			scanf("%d:%d:%d:%d:%d", &plans[i].year, &plans[i].month, &plans[i].day, &plans[i].hour, &plans[i].minute);
			//内容　500文字以内
			printf("%d番目の予定の内容を入力して下さい : ", i + 1);
			scanf("%s", plans[i].todo);
			//必要時間
			printf("%d番目の予定の必要時間を入力してください : ", i + 1);
			scanf("%lf", &plans[i].time);
			END++;
	    }
	    break;
	}
	case 2:
	{
	    printf("\n=== 修正処理 ===\n");
		printf("戻る時は0を入力して下さい\n");
	    printf("修正したい予定のIDを入力して下さい : ");
	    scanf("%d", &edit);
	    if (edit == 0)
	    {
			break;
	    }
	    for (i = 0; i < END; i++)
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
				if (list == 0)
				{
					break;
				}
				switch (list)
				{
					case 1:
					{
						printf("修正後のタイトルを入力して下さい\n");
						scanf("%s", alters);
						if (alters == 0)
						{
						break;
						}
						strcpy(plans[i].title, alters);
						printf("修正後のタイトルは%sです\n", plans[i].title);
						break;
					}

					case 2:
					{
						printf("修正後の重要度を入力して下さい : ");
						scanf("%d", &alter);
						if (alter == 0)
						{
						break;
						}
						plans[i].importance = alter;
						printf("修正後の%sの重要度は%dです\n", plans[i].title, plans[i].importance);
						break;
					}
					case 3:
					{ 
						printf("修正後の場所を入力して下さい\n");
						scanf("%s", alters);
						if (alters == 0)
						{
						break;
						}
						strcpy(plans[i].place, alters);
						printf("修正後の場所は%sです\n", plans[i].place);
						break;
					}
					case 4:
					{
						printf("修正後の日時を入力して下さい\n");
						scanf("%d:%d:%d:%d:%d", &altery, &altermon, &alterd, &alterh, &altermin);
						if (altery == 0)
						{
							break;
						}
						plans[i].year = altery;
						plans[i].month = altermon;
						plans[i].day = alterd;
						plans[i].hour = alterh;
						plans[i].minute = altermin;
						printf("修正後の日時は%d年%d月%d日%d時%d分です\n", plans[i].year, plans[i].month, plans[i].day, plans[i].hour, plans[i].minute);
						break;
					}
					case 5:
					{
						printf("修正後の内容を入力して下さい\n");
						scanf("%s", alters);
						if (alters == 0)
						{
							break;
						}
						strcpy(plans[i].todo, alters);
						printf("修正後の内容は%sです\n", plans[i].todo);
						break;
					}
					case 6:
					{
						printf("修正後の必要時間を入力して下さい : ");
						scanf("%lf", &altert);
						if (altert == 0)
						{
							break;
						}
						plans[i].time = altert;
						printf("修正後の必要時間は%gです\n", plans[i].time);
						break;
					}
				}
			}
	    }
	}
	}
    }
}
