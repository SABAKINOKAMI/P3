#include "variable.h"

void input(void);
void retrieval(void);
void output(void);

int main(void)
{
	int start,i;
	
	END = 0;
	while(1)
	{
		printf("\n=====予定管理システムメニュー=====\n\n");
		printf("1 :入力処理\n");
		printf("2 :検索処理\n");
		printf("3 :出力処理\n");
		printf("4 :終了\n\n");
		printf("メニュー番号を選んで下さい : ");
		scanf("%d",&start);

		switch(start)
		{
			case 1:
		 	 input();
		 	 break;	
			case 2:
		  	  retrieval();
		  	  break;
			case 3:
		    	   output();
		   	   break;
			default:
			break;
		}
		if(start == 4)
			{
			FILE *outputfile;
			outputfile = fopen("Database.csv","w");
			if (outputfile == NULL)
				{
				printf("エラー、上手く開けませんでした\n");
				exit(1);
				}
			for( i = 0 ; i < END; i++)
				{ 
				fprintf(outputfile,"%d番目の予定のidは%d\n",i+1,plans[i].id);
				}	
			fclose(outputfile);
	 		break;
			}
	}
	return 0;
}

