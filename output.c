#include "variable.h"

void output(void)
{
	int i,omenu,mmenu,worktime,freetime;
    worktime = 0;
    freetime = 0;
    while(1)
    {
	    printf("\n=== 出力処理システムメニュー ===\n\n");
	    printf("1 :全日程出力\n");
        printf("2 :活用可能時間出力\n");
	    printf("3 :終了\n\n");
        printf("メニュー番号を選んで下さい : ");
        scanf("%d",&omenu);
        if(omenu == 0)
        {
            break;
        }
        if(omenu == 3)
        {
            break;
        }
        switch(omenu)
        {
            //全日程出力
            case 1:
            {
             for(i=0; i<END; i++)
	        {
	            printf("%d番目の予定のidは%dで",i+1,plans[i].id);
	            printf("タイトルは%sで",plans[i].title);
	            printf("重要度は%dで",plans[i].importance);
	            printf("場所は%sです。 \n\n",plans[i].place);
	            printf("日時は%d年%d月%d日%d時%d分です。 \n\n",plans[i].year,plans[i].month,plans[i].day,plans[i].hour,plans[i].minute);
	            printf("予定内容は『%s』です。 \n\n",plans[i].todo);
	            printf("必要時間は%g時間です。\n\n",plans[i].time);
                
	        }
            break;
            }
            //活用可能時間出力
            case 2:
            {
            printf("\n=== 活用可能時間出力 ===\n\n");
            printf("活用時間を出力したい月を入力して下さい\n");
            printf("終了したいときは0を入力して下さい\n\n");
            scanf("%d",&mmenu);
            if(mmenu == 0)
             { 
                break;
             }
            switch(mmenu)
            {
                case 1:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==1)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 2:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==2)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 3:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==3)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 4:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==4)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 5:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==5)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 6:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==6)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 7:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==7)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 8:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==8)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 9:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==9)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 10:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==10)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 11:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==11)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                case 12:
                {
                for(i=0; i<END; i++)
                {
                    if(plans[i].month==12)
                    {
                        worktime += plans[i].time;
                    }
                }
                freetime = 420 - worktime;
                printf("自由時間は%dです",freetime);
                break;
                }
                }
            }

        }
    }
}
