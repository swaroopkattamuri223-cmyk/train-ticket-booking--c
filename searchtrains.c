int l,d,fn,g,seatNo,n;
char Name[30];
char gender[15];
char location[15];
char dest[15];
char Time[10];
char class[5];
char trainno[5];
char trainname[50];
void Searchtrains()
{
	int l,d;
loc1:
	printf("SELECT FROM STATION\n1.Vijayawada\n2.Secunderabad\n3.Guntur\n4.Eluru\n");
	if(scanf("%d",&l)!=1)
	{
		printf("Invalid Input.Please choose correct option.\n");
		while(getchar()!='\n');
		goto loc1;
	}
	switch(l)
	{
	case 1:
destl1:
		printf("SELECT DESTINATION\n1.Tirupati\n2.Secunderabad\n3.Eluru\n4.Nandyal\n");
		if(scanf("%d",&d)!=1)
		{
			printf("Invalid Input.Please choose correct option.\n");
			while(getchar()!='\n');
			goto destl1;
		}
		switch(d)
		{
		case 1:
			printf("Vijayawada To Tirupati--Seshadri Express--17210\n TIME:7:30");
			break;

		case 2:
			printf("Vijayawada To Secunderabad--Vande Bharath Express--20833\nTIME:11:45");
			break;

		case 3:
			printf("Vijayawada To Eluru--Ratnachal Superfast Express--12718\nTIME:6:30");
			break;

		case 4:
			printf("Vijayawada To Nandyal--Nandyal Special Express--10669\nTIME:13:25");
			break;

		default:
			printf("Enter correct destination");
			goto destl1;
			break;
		}
		break;

	case 2:
destl2:
		printf("SELECT DESTINATION\n1.Tirupati\n2.Vijayawada\n3.Eluru\n4.Nandyal\n");
		if(scanf("%d",&d)!=1)
		{
			printf("Invalid Input.Please choose correct option.\n");
			while(getchar()!='\n');
			goto destl2;
		}
		switch(d)
		{
		case 1:
			printf("Secunderabad To Tirupati--Krishna Express--17406\nTIME:03:30");
			break;

		case 2:
			printf("Secunderabad To Vijayawada--Vande Bharath Express--20833\nTIME:16:50");
			break;

		case 3:
			printf("Secunderabad To Eluru--Vande Bharath Express--20707\nTIME:18:20");
			break;

		case 4:
			printf("Secunderabad To Nandyal--Nandyal Special Express--10669\nTIME:11:15");
			break;

		default:
			printf("Enter correct destination");
			goto destl2;
			break;
		}
		break;

	case 3:
destl3:
		printf("SELECT DESTINATION\n1.Tirupati\n2.Secunderabad\n3.Eluru\n4.Nandyal\n");
		if(scanf("%d",&d)!=1)
		{
			printf("Invalid Input.Please choose correct option.\n");
			while(getchar()!='\n');
			goto destl3;
		}
			switch(d)
			{
			case 1:
				printf("Guntur To Tirupati--Vande Bharath Express--20701\nTIME:01:50");
				break;

			case 2:
				printf("Guntur To Secunderabad--Vande Bharath Express--20833\nTIME:23:55");
				break;

			case 3:
				printf("Guntur To Eluru--Janmabhoomi Superfast Express--12806\nTIME:00:20");
				break;

			case 4:
				printf("Guntur To Nandyal--Nandyal Special Express--10669\nTIME:22:10");
				break;

			default:
				printf("Enter correct destination");
				goto destl3;
				break;
			}
			break;

		case 4:
destl4:
			printf("SELECT DESTINATION\n1.Tirupati\n2.Secunderabad\n3.Vijayawada\n4.Nandyal\n");
			if(scanf("%d",&d)!=1)
			{
				printf("Invalid Input.Please choose correct option.\n");
				while(getchar()!='\n');
				goto destl4;
			}
				switch(d)
				{
				case 1:
					printf("Eluru To Tirupati--Vivek Express--22504\nTIME:17:35");
					break;

				case 2:
					printf("Eluru To Secunderabad--Vande Bharath Express--20707\nTIME:20:30");
					break;

				case 3:
					printf("Eluru To Vijayawada--Ratnachal Superfast Express--12718\nTIME:17:35");
					break;

				case 4:
					printf("Eluru To Nandyal--Nandyal Special Express--10669\nTIME:21:05");
					break;

				default:
					printf("Enter correct destination.");
					goto destl4;
					break;
				}
				break;

			default:
				printf("Enter correct location\n");
				goto loc1;
				break;
			}
	
			int q;
			printf("\nDO YOU WANT TO EXIT OR GO TO MAIN MENU\n");
			qq1:
			printf("1.MAIN MENU\n2.EXIT\n");
			if(scanf("%d",&q)!=1)
			{
				printf("Invalid Input.Please choose correct option.\n");
				while(getchar()!='\n');
			 goto qq1;
			}
			switch(q)
			{
			case 1:
				break;
			case 2:
				exit(1);
				break;
			default:
				printf("Invalid");
				goto qq1;
				break;
			}
}