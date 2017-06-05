#include "variable.h"

void input(void);
void retrieval(void);
void output(void);

int main(void)
{
	int start,i,j;
	END = 0;
	char filename[256] = "Database.csv";
	struct stat st;
	int ret;
	ret=stat(filename,&st);
	if(0==ret)
	{
		FILE *fp;

		if((fp=fopen(filename,"r"))==NULL)
		{	
			fprintf(stderr,"%s/n","error:can't read file.");
			return EXIT_FAILURE;
		}
			i=0;
		while(fscanf(fp,"%d, %[^,], %[^,], %d, %d, %d, %d, %d, %[^,], %lf,%d" , &plans[i].id, plans[i].title,  plans[i].place, &plans[i].year, &plans[i].month, &plans[i].day, &plans[i].hour, &plans[i].minute, plans[i].todo, &plans[i].time, &plans[i].importance)!=EOF )

		{	
        	i++;
			END++;
		}	
		fclose(fp);
	}
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
			for( j = 0 ; j < END; j++)
				{ 
				fprintf(outputfile,"%d,%s,%s,%d,%d,%d,%d,%d,%s,%lf,%d\n",plans[j].id, plans[j].title, plans[j].place, plans[j].year, plans[j].month, plans[j].day, plans[j].hour, plans[j].minute, plans[j].todo, plans[j].time, plans[j].importance);
				}	
			fclose(outputfile);
	 		break;
			}
	}
	return 0;
}

