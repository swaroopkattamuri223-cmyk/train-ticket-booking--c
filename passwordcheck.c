int password() {
    FILE *fp;
    int pass,find;
    int attempts = 0;
    fp = fopen("password.txt", "r");
    fscanf(fp,"%d",&pass);
    fclose(fp);
    while (attempts<3) {
      printf("Enter the password: ");
      scanf("%d",&find);
      if (find==pass) {
            return 1;
      } else {
            attempts++;
            printf("Wrong password! Attempts left: %d\n",3-attempts);
      }
    }
    printf("You have exceeded the maximum number of attempts.\n");
    exit(0);
    return 0;
}