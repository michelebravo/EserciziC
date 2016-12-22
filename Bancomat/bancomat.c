#include <stdio.h>
#include <stdlib.h>

int balance = 10000;

void prelievi();
void versamenti();
void estratto(int in[], int out[]);


typedef struct node {
    int val;
    struct node * next;
} azione;

void insert(int in[], int out[]) {
    int x;
    printf("Cosa vuoi fare? :");
    scanf("%d", &x);

    switch (x) {
        case 1:
            system("cls");
            printf("PRELIEVI\n");
            prelievi();
            break;
        case 2:
            system("cls");
            printf("VERSAMENTI");
            versamenti();
            break;
        case 3:
            system("cls");
            printf("ESTRATTO CONTO");
            break;
        case 4:
            system("cls");
            printf("EXIT");
            exit(0);
        default:
            printf("ERRORE: inserimento non valido!\n");
            insert(in, out);
            break;
    }
}



int main() {


    int cash_in[100] = {};
    int cash_out[] = {};

    printf("BANCOMAT:\n1-PRELIEVI\n2-VERSAMENTI\n3-ESTRATTO CONTO\n4-EXIT\n");
    insert(cash_in, cash_out);

    return 0;
}

void prelievi() {
    printf("Il tuo saldo e' di %d euro.\n", balance);
    int request;
    if (balance <= 0) {
        printf("Impossibile prelevare\n");
        system("pause");
        system("cls");
        main();
        return;
    }

    printf("Quanto vuoi prelevare? :");
    scanf("%d", &request);
    if (request > balance){
        printf("richiesta troppo elevata\n");
        system("pause");
        system("cls");
        prelievi();
        return;
    }

    balance = balance - request;
    printf("prelievo effettuato\n");
    system("pause");
    system("cls");
    main();
    return;

}

void versamenti() {

    printf("Il tuo saldo è %d\n", balance);
    int request;

    printf("Quanto vuoi versare? :");
    scanf("%d", &request);
    balance = balance + request;
    printf("versamento effettuato\n");
    system("pause");
    system("cls");
    main();
    return;
}

