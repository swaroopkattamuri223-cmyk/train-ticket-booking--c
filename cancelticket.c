#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cancelTicket()
{
    FILE *fp = fopen("pnr.txt","r");
    FILE *temp = fopen("temp.txt","w");
    char line[300];
    int deleteLines = 0;    
    int found = 0;
    int pnr;
    printf("ENTER YOUR PNR NUMBER\n");
    scanf("%d",&pnr);
    while (fgets(line, sizeof(line), fp)) 
    {
        if (atoi(line) == pnr) 
        {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("PNR %d not found.\n", pnr);
        fclose(fp);
        fclose(temp);
        remove("temp.txt"); 
        return;
    }
    char choice;
    printf("ARE YOU SURE YOU WANT TO CANCEL THE TICKET WITH PNR %d? (Y/N):  ", pnr);
    scanf(" %c", &choice);
    if (choice != 'Y' && choice != 'y') {
        printf("CANCELLATION UNSUCCESSFUL.TICKET IS STILL VALID\n");
        fclose(fp);
        fclose(temp);
        remove("temp.txt"); 
        return;
    }

    fseek(fp, 0, SEEK_SET);

    deleteLines = 0;
    while (fgets(line,sizeof(line),fp)) 
    {
        if (atoi(line) == pnr && deleteLines == 0) 
        {
            deleteLines = 8;    
            continue;
        }
      
        if (deleteLines > 0)
        {
            deleteLines--;
            continue;
        }

        fputs(line,temp);
    }

    fclose(fp);
    fclose(temp);

    remove("pnr.txt");
    rename("temp.txt","pnr.txt");

    printf("TICKET WITH PNR %d CANCELLED SUCCESSFULLY.\n", pnr);
}