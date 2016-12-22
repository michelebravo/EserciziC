#include <stdio.h>
#include <stdlib.h>

int main() {
    float prezzo_tot;
    int gg,persone;
    char abit, veicolo;
    printf("PAGAMENTO DEL SOGGIORNO\n");
    printf("Inserisci il numero di giorni trascorsi al camping:");
    scanf("%d", &gg);
    printf("Inserisci il numero di persone del tuo gruppo:");
    scanf("%d", &persone);
    prezzo_tot = gg*persone*5;
    do {
        printf("Avete soggiornato in tenda(T) o in roulotte(R):");
        scanf(" %c", &abit);
        if (abit == 'T' || abit == 't') {
            prezzo_tot+= 4*gg;
        }
        if (abit == 'R' || abit == 'r') {
            prezzo_tot+= 4,5*gg;
        }
        if (abit != 'T' && abit != 't' && abit != 'R' && abit != 'r') {
            printf("Hai inserito la lettera sbagliata, riprova!\n");
        }
    }while (abit != 'T' && abit != 't' && abit != 'R' && abit != 'r');



    do {
        printf("Siete qui in auto(A) o in moto(M):");
        scanf(" %c", &veicolo);
        if (veicolo == 'A' || veicolo == 'a') {
            prezzo_tot+= 5,5*gg;
        }
        if (veicolo == 'M' || veicolo == 'm') {
            prezzo_tot+= 3,5*gg;
        }
        if (veicolo != 'A' && veicolo != 'a' && veicolo != 'M' && veicolo != 'm') {
            printf("Hai inserito la lettera sbagliata, riprova!\n");
        }
    }while (veicolo != 'A' && veicolo != 'a' && veicolo != 'M' && veicolo != 'm');



    printf("Il prezzo finale per il vostro soggiorno e' di %.2f euro.\nGrazie per aver scelto il nostro camping!\n", prezzo_tot);

    system("pause");

}
