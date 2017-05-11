#include "variable.h"

void input(void);
void retrieval(void);
void output(void);

int main(void)
{
	int start;
	
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
	 	break;
	}
	return 0;
}

