#include "password"
int gmail() {
    FILE *fp;
    char gmail[50], findgmail[50];
    fp = fopen("gmail.txt","r");
    fscanf(fp, "%s", gmail);
    fclose(fp);
    while (1) {   
        printf("ENTER GMAIL: ");
        scanf("%49s",findgmail);

        if (strcmp(findgmail,gmail) == 0) {
            if (password())
                return 1;
        } else {
            printf("Incorrect! Try again.\n");
        }
    }

    return 0;
}
