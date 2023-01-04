#include <stdio.h>

int main() {

    FILE *fr = fopen("pessoa.txt", "r");
    FILE *fw = fopen("pessoa2.txt", "w");

    if(fr == NULL || fw == NULL) {
        printf("Some file wouldn't open!\n");
        return -1;
    }

    char c;
    while((c = fgetc(fr)) != EOF) {
        if(c == '.') {
            c = '!';
        }
        fputc(c,fw);
    }
    fclose(fr);
    fclose(fw);

    return 0;
}
