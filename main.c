#include<stdio.h>
#include<trainticketbooking.h>
int l,d,fn,g,seatNo,n,pnr,choice1;
char Name[30];
char gender[15];
char location[15];
char dest[15];
char Time[10];
char class[5];
char trainname[50];

	void main()
	{
            if(!gmail())
                  return ;
            
      	while(1)
		{
		    
			printf("\t\t\t\t\t------RAILWAY TICKET BOOKING------\n\n");
			menu:
			printf("1.BOOK TICKET\n2.VIEW BOOKING\n3.SEARCH TRAINS\n4.CANCELTICKET\n5.EXIT\n");

				if(scanf("%d",&fn)!=1)
	{
	    printf("Invalid Input.Please choose correct option.\n");
	    while(getchar()!='\n');
	     goto menu;
	}
			switch(fn)
			{
			case 1:
				bookticket();
				break;

			case 2:
				viewbooking();
				break;
			case 3:
				Searchtrains();
				break;
			case 4:
			    cancelTicket();
            case 5:
			    exit(0);
			default:
			 printf("Invalid option selected.");
			 printf("Choose correct option.\n");
			 goto menu;
			


			}
		}
	}