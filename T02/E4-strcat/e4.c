// scrivere la soluzione qui...
#include <malloc.h>
#include <string.h>
int len_stringa(const char *s){
    int conto = 0;
    while (s[conto] != '\0'){
        conto ++;
    }
    printf("La lunghezza della stringa è: %d", conto);
    return conto;
}
char *my_strcat(char *dest, const char *src){
    int lunghezzaDest = len_stringa(dest);
    int lunghezzaSrc = len_stringa(src);

    printf("lunghezzaDest: %d", lunghezzaDest);
    printf("lunghezzaSrc: %d", lunghezzaSrc);
    for (int i = 0; i < lunghezzaSrc; i++){
        dest[lunghezzaDest + i] = src[i];
    }
    dest[lunghezzaDest + lunghezzaSrc] = '\0';
    printf("La stringa concatenata è: %s", dest);
    return dest;
}