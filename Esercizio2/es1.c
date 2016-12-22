#include <stdio.h>
#include <stdlib.h>

int main() {

    int c;
    FILE *file;
    file = fopen("numbers.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF)
            printf("%d\n",c);
        fclose(file);
    }

    system("pause");
}


