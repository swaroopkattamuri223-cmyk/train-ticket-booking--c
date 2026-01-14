#include<stdlib.h>
void viewbooking()
{
	int l,d,fn,g,seatNo,n;
	char Name[30];
	char gender[15];
	char location[15];
	char dest[15];
	char date[10];
	char Time[10];
	char class[5];
	char pnr[50];
	char trainno[50];
	char trainname[50];
	int flag=0,count=0;
	char p[100],buffer[25];
	FILE *fp=NULL;
in:
	printf("Enter pnr num:\n");
	scanf("%s",p);

	fp=fopen("pnr.txt","r");
	while(!feof(fp))
	{
		fgets(pnr,6,fp);
		if(strcmp(pnr,p)==0)
		{
			flag=1;
			while(count<13&&fgets(buffer,20,fp))
			{	printf("%s",buffer);
				count++;
			}
		}

	}

	if(!flag)
	{
		printf("Invalid PNR Number\n");
		goto in;

	}

    int q;
    printf("\nDO YOU WANT TO EXIT OR GO TO MAIN MENU\n");
      b:
		printf("1.MAIN MENU\n2.EXIT\n");
			if(scanf("%d",&q)!=1)
		{
			printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
			while(getchar()!='\n');
			goto b;
		}

		switch(q)
		{
		    case 1: 
		    break;
		    case 2:exit(1);
		    break;
		    default:printf("Invalid\n");
		    goto b;
		    break;
		}
}
