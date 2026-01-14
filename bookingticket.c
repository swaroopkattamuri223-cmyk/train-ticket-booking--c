#include"payment"
#include"D_CHECK"
#include"NAME_CHECK"
#include<conio.h>
#include<string.h>
struct T
    {
	char location[50];
	char DATE[10];
    };
void bookticket()
{
    struct T t;
	int g;
	char Name[100];
	char gender[30];
	char dest[50];
	char Time[50];
	char class[5];
	int trainno,q;
	char trainname[50];
	int l,d,fn,cost;
	float total;
	FILE *fp=NULL;
loc:
	printf("CHOOSE YOUR FROM STATION AMONG THE FOLLOWING OPTIONS :\n1.VIJAYAWADA\n2.SECUNDERABAD\n3.GUNTUR\n4.ELURU\n");

	if(scanf("%d",&l)!=1)
	{
		printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
		while(getchar()!='\n');
		goto loc;
	}

	switch(l)
	{
	case 1:
		strcpy(t.location,"VIJAYAWADA");
dest1:
		printf("SELECT YOUR DESTINATION :\n1.TIRUPATI\n2.SECUNDERABAD\n3.ELURU\n4.NANDYAL\n");

		if(scanf("%d",&d)!=1)
		{
			printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
			while(getchar()!='\n');
			goto dest1;
		}

		switch(d)
		{
		case 1:
			printf("VIJAYAWADA TO TIRUPATI--SESHADRI EXPRESS--17210\n");
			trainno = 17210;
			strcpy(trainname,"SESHADRI EXPRESS");
			strcpy(dest,"TIRUPATI");
			strcpy(Time,"7:30");
			break;

		case 2:
			printf("VIJAYAWADA TO SECUNDERABAD--VANDE BHARATH EXPRESS--20833\n");
			trainno = 20833;
			strcpy(trainname,"VANDE BHARATH EXPRESS");
			strcpy(dest,"SECUNDERABAD");
			strcpy(Time,"11:45");
			break;

		case 3:
			printf("VIJAYAWADA TO ELURU--RATNACHAL SUPERFAST EXPRESS--12718\n");
			trainno = 12718;
			strcpy(trainname,"RATNACHAL SUPERFAST EXPRESS");
			strcpy(dest,"ELURU");
			strcpy(Time,"6:30");
			break;

		case 4:
			printf("VIJAYAWADA TO NANDYAL--NANDYAL--10669\n");
			trainno = 10669;
			strcpy(trainname,"NANDYAL SPECIAL EXPRESS");
			strcpy(dest,"NANDYAL");
			strcpy(Time,"13:25");
			break;

		default:
			printf("ENTER CORRECT DESTINATION\n");
			goto dest1;
			break;
		}
		break;

	case 2:
		strcpy(t.location,"SECUNDERABAD");
dest2:
		printf("SELECT YOUR DESTINATION :\n1.TIRUPATI\n2.VIJAYAWADA\n3.ELURU\n4.NANDYAL\n");
		if(scanf("%d",&d)!=1)
		{
			printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
			while(getchar()!='\n');
			goto dest2;
		}

		switch(d)
		{
		case 1:
			printf("SECUNDERABAD TO TIRUPATI--KRISHNA EXPRESS--17406\n");
			trainno = 17406;
			strcpy(trainname,"KRISHNA EXPRESS");
			strcpy(dest,"TIRUPATI");
			strcpy(Time,"3:30");
			break;

		case 2:
			printf("SECUNDERABAD TO VIJAYAWADA--VANDE BHARATH EXPRESS--20833\n");
			trainno = 20833;
			strcpy(trainname,"VANDE BHARATH EXPRESS");
			strcpy(dest,"VIJAYAWADA");
			strcpy(Time,"16:50");
			break;

		case 3:
			printf("SECUNDERABAD TO ELURU--VANDE BHARATH EXPRESS--20707\n");
			trainno = 20707;
			strcpy(trainname,"VANDE BHARATH EXPRESS");
			strcpy(dest,"ELURU");
			strcpy(Time,"18:20");
			break;

		case 4:
			printf("SECUNDERABAD TO NANDYAL--NANDYAL SPECIAL EXPRESS--10669\n");
			trainno = 10669;
			strcpy(trainname,"NANDYAL SPECIAL EXPRESS");
			strcpy(dest,"NANDYAL");
			strcpy(Time,"11:15");
			break;

		default:
			printf("ENTER CORRECT DESTINATION\n");
			goto dest2;
			break;
		}
		break;

	case 3:
		strcpy(t.location,"GUNTUR");
dest3:
		printf("SELECT YOUR DESTINATION :\n1.TIRUPATI\n2.SECUNDRABAD\n3.ELURU\n4.NANDYAL\n");
		if(scanf("%d",&d)!=1)
		{
			printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
			while(getchar()!='\n');
			goto dest3;
		}

		switch(d)
		{
		case 1:
			printf("GUNTUR TO TIRUPATI--VANDE BHARATH EXPRESS--20701\n");
			trainno = 20701;
			strcpy(trainname,"VANDE BHARATH EXPRESS");
			strcpy(dest,"TIRUPATI");
			strcpy(Time,"1:50");
			break;

		case 2:
			printf("GUNTUR TO SECUNDERABAD--VANDE BHARATH EXPRESS--20833\n");
			trainno = 20833;
			strcpy(trainname,"VANDE BHARATH EXPRESS");
			strcpy(dest,"SECUNDERABAD");
			strcpy(Time,"23:55");
			break;

		case 3:
			printf("GUNTUR TO ELURU--JANMABHOOMI SUPERFAST EXPRESS--12806\n");
			trainno = 12806;
			strcpy(trainname,"JANMABHOOMI SUPERFAST EXPRESS");
			strcpy(dest,"ELURU");
			strcpy(Time,"00:20");
			break;

		case 4:
			printf("GUNUTUR TO NANDYAL--NANDYAL SPECIAL EXPRESS--10669\n");
			trainno = 10669;
			strcpy(trainname,"NANDYAL SPECIAL EXPRESS");
			strcpy(dest,"NANDYAL");
			strcpy(Time,"22:10");
			break;

		default:
			printf("ENTER CORRECT DESTINATION\n");
			goto dest3;
			break;
		}
		break;

	case 4:
		strcpy(t.location,"ELURU");
dest4:
		printf("SELECT YOUR DESTINATION :\n1.TIRUPATI\n2.SECUNDRABAD\n3.ELURU\n4.NANDYAL\n");
		if(scanf("%d",&d)!=1)
		{
			printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
			while(getchar()!='\n');
			goto dest4;
		}
		switch(d)
		{
		case 1:
			printf("ELURU TO TIRUPATI--VIVEK EXPRESS--22504\n");
			trainno = 22504;
			strcpy(trainname,"VIVEK EXPRESS");
			strcpy(dest,"TIRUPATI");
			strcpy(Time,"17:35");
			break;

		case 2:
			printf("ELURU TO SECUNDERABAD--VANDE BHARATH EXPRESS--20707\n");
			trainno = 20707;
			strcpy(trainname,"VANDE BHARATH EXPRESS");
			strcpy(dest,"SECUNDERABAD");
			strcpy(Time,"20:30");
			break;

		case 3:
			printf("ELURU TO VIJAYAWADA--RATNACHAL SUPERFAST EXPRESS--12718\n");
			trainno = 12718;
			strcpy(trainname,"RATNACHAL SUPERFAST EXPRESS");
			strcpy(dest,"VIJAYAWADA");
			strcpy(Time,"17:35");
			break;

		case 4:
			printf("ELURU To NANDYAL--NANDYAL SPECIAL EXPRESS--10669\n");
			trainno = 10669;
			strcpy(trainname,"NANDYAL SPECIAL EXPRESS");
			strcpy(dest,"NANDYAL");
			strcpy(Time,"21:05");
			break;

		default:
			printf("ENTER CORRECT DESTINATION\n");
			goto dest4;
			break;
		}
		break;
	default:
		printf("INVALID t.LOCATION CHOOSEN.PLEASE CHOOSE CORRECT T.LOCATIONATION.\n");
		goto loc;
		break;
	}

	printf("SELECT YOUR CLASS :\n");
	printf("1.AC FIRST CLASS(EA)\n2.AC 2 TIER(2A)\n3.AC 3 TIER(3A)\n4.SLEEPER(SL)\n5.SECOND SITTING(2S)\n");
	int choice;
x:

	if(scanf("%d",&choice)!=1)
	{
		printf("INVALID INPUT.PLEASE CHOOSE CORRECT OPTION.\n");
		while(getchar()!='\n');
		goto x;
	}
	switch(choice)
	{
	case 1:
		printf("AC FIRST TIER(EA)\n");
		strcpy(class,"EA");
		cost = 1200;
		total = 1.205*cost + 35.4;
		printf("PRICE = %d\n",cost);
		break;
	case 2:
		printf("AC 2 TIER(2A)\n");
		strcpy(class,"2A");
		cost = 1050;
		printf("PRICE = %d\n",cost);
		total = 1.205*cost + 35.4;
		break;
	case 3:
		printf("AC 3 TIER(3A)\n");
		strcpy(class,"3A");
		cost = 900;
		printf("PRICE = %d\n",cost);
		total = 1.205*cost + 35.4;
		break;
	case 4:
		printf("SLEEPER(SL)\n");
		strcpy(class,"SL");
		cost = 800;
		printf("PRICE = %d\n",cost);
		total = 1.205*cost + 35.4;
		break;
	case 5:
		printf("SECOND SITTING(2S)\n");
		strcpy(class,"2S");
		cost = 500;
		printf("PRICE = %d\n",cost);
		total = 1.205*cost + 35.4;
		break;
	default:
		printf("INVALID NUMBER........ENTER NUMBER BETWEEN 1 to 5\n");
		goto x;
		break;
	}
nme:
	printf("ENTER YOUR NAME : ");
	scanf("%s",&Name);
	int nm=NAME_CHECK(Name);
	if(!nm)
	{
		printf("INVALID INPUT.PLEASE ENTER ONLY CHARACTERS\n");
		goto nme;
	}
xyz:
	int age;
	while (1) {
		printf("ENTER YOUR AGE : ");
		if (scanf("%d", &age) == 1) {
			break;
		}
		printf("INVALID INPUT! PLEASE ENTER ONLY NUMBERS.\n");
		while (getchar() != '\n');
	}
	if(age<0||age>100) {
		printf("ENTER AGE BETWEEN 0-100\n");
		goto xyz;
	}
	while (1) {
		printf("SELECT YOUR GENDER\n1. MALE\n2. FEMALE\n3. PREFER NOT TO SAY\n");
		printf("ENTER CHOICE: ");

		if (scanf("%d", &g) != 1) {
			printf("INVALID INPUT! PLEASE ENTER ONLY NUMBERS.\n\n");
			while (getchar() != '\n');
			continue;
		}

		switch (g) {
		case 1:
			strcpy(gender, "MALE");
			break;

		case 2:
			strcpy(gender, "FEMALE");
			break;

		case 3:
			strcpy(gender, "PREFER NOT TO SAY");
			break;

		default:
			printf("INVALID CHOICE! PLEASE ENTER 1, 2, OR 3.\n\n");
			continue;
		}
		break;
	}
	ddd:
	printf("ENTER DATE OF JOURNEY: ");
	scanf("%s",&t.DATE);
    int num=DOJ_CHECK(t.DATE);
    if(!num)
    {
        printf("INVALID DATE ENTERED PLEASE ENTER A VALID DATE");
        goto ddd;
    }
	printf("\n");
	printf("TOTAL PRICE WOULD BE:\nTICKET PRICE        :%d\nPLATFORM FEE        : 35.4\nGST                 : %.2f\nSGST                : %.2f\nTOTAL               : %.2f\n",cost,0.18*cost,0.025*cost,total);
	payment(total);

	int pnr;
	pnr=(pnr*37+91)%90000 + 10000;
	if(pnr < 0)
		pnr = -1*pnr;
	fp=fopen("pnr.txt","a");
	fprintf(fp,"%d\n",pnr);
	fprintf(fp,"NAME:%s\n",Name);
	fprintf(fp,"%s\n",trainname);
	fprintf(fp,"%s-->%s\n",t.location,dest);
	fprintf(fp,"TRAIN NUMBER--%d\n",trainno);
	fprintf(fp,"T.DATE--%s\tTIME--%s\n",t.DATE,Time);
	fprintf(fp,"CLASS--%s\n",class);

#define COACHES 10
#define SEATS 72
	srand(time(NULL));

	int used[COACHES][SEATS] = {0};

	int coach, seatNo;

	do {
		coach = rand() % COACHES;
		seatNo = rand() % SEATS;
	} while (used[coach][seatNo] == 1);

	used[coach][seatNo] = 1;

	fprintf(fp,"COACH :%d\t\tSEAT NUMBER :%d\n",coach+1,seatNo+1);



	printf("\t\t\t\t=======================================================\n");
	printf("\t\t\t\t||*******************IRCTC E-TICKET******************||\n");
	printf("\t\t\t\t=======================================================\n");
	printf("\t\t\t\tPNR: %d\n",pnr);
	printf("\t\t\t\tTRAIN NO: %d\n", trainno);
	printf("\t\t\t\tTRAIN NAME: %s\n", trainname);
	printf("\t\t\t\tFROM: %s\t\t",t.location);
	printf("TO: %s\n",dest);
	printf("\t\t\t\tDATE: %s\t\tTIME: %s\n", t.DATE,Time);
	printf("\t\t\t\tClass: %s\n", class);
	printf("\t\t\t\tCOACH          : %d\n",coach+1);
	printf("\t\t\t\tSEAT NO        : %d\n", seatNo+1);
	printf("\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\tPASSENGER NAME : %s\n", Name);
	printf("\t\t\t\tAGE            : %d\n", age);
	printf("\t\t\t\tGENDER         : %s\n", gender);
	printf("\t\t\t\t=======================================================\n");
	printf("\t\t\t\t||************WISH YOU A HAPPY JOURNEY!**************||\n");
	printf("\t\t\t\t=======================================================\n");

	exit(0);
}
