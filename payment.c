int payment(int amount) {
    int choice;
    int findcardno, cardno, findcvv, cvv, findupiId, upiId;
    printf("PAYMENT\n");
    printf("AMOUNT : Rs. %d\n", amount);
    payment:
    printf("CHOOSE A PAYMENT METHOD\n");
    printf("1. CREDIT/DEBIT CARD\n");
    printf("2. UPI\n");
    printf("ENTER CHOICE: ");

    while (scanf("%d", &choice) != 1) {
        printf("INVALID INPUT!ENTER A NUMBER: ");
        while (getchar() != '\n'); 
    }
    switch (choice) {
        case 1: {
            FILE *fp = fopen("cardno.txt", "r");
            fscanf(fp, "%d", &cardno);
            fclose(fp);

            do {
                
                printf("ENTER CARD NUMBER(INTEGER ONLY): ");
                while (scanf("%d", &findcardno) != 1) {
                    printf("INVALID CARD NUMBER!ENTER AN INTEGER: ");
                    while (getchar() != '\n');
                   }
                    if(cardno != findcardno)
                printf("INCORRECT CARD NUMBER\n");
                
            } while (cardno != findcardno);

            printf("CARD NUMBER VERIFIED\n");

            FILE *fq = fopen("cvv.txt", "r");
            fscanf(fq, "%d", &cvv);
            fclose(fq);

            do {
                printf("ENTER CVV (INTEGER ONLY): ");
                while (scanf("%d", &findcvv) != 1) {
                    printf("INVALID!ENTER A VALID CVV NUMBER: ");
                    while (getchar() != '\n');
                }
                 if(cvv!= findcvv)
                printf("INCORRECT CVV\n");
                
            } while (cvv != findcvv);

            printf("CVV VERIFIED\n");
            printf("PROCESSING CARD PAYMENT...\n");
            printf("PAYMENT DONE\n");
            break;
        }

        case 2: {
            FILE *fr = fopen("upi.txt", "r");
            fscanf(fr, "%d", &upiId);
            fclose(fr);

            do {
                printf("ENTER UPI ID (INTEGER ONLY): ");
                while (scanf("%d", &findupiId) != 1) {
                    printf("INVALID!ENTER AN INTEGER: ");
                    while (getchar() != '\n');
                }
                     if(upiId != findupiId)
                printf("INCORRECT UPI ID\n");
                
                
            } while (findupiId != upiId);

            printf("UPI VERIFIED\n");
            printf("Processing UPI payment...\n");
            printf("PAYMENT DONE\n");
            break;
        }

        default:
            printf("INVALID CHOICE... TRY AGAIN.\n");
            goto payment;
    }
}
