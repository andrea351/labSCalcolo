// Inserire la soluzione qui...
#include <stdio.h>
#include "e1.h"
void uint2bin(unsigned x, char bin[32]){
    for (int i = 1; i <= 32; i++){
        if (x & 1){ // se (x & 1) == 1 significa che l'ultimo bit di x è 1, quindi metto
            // '1' nell'array bin. dopodichè avanzo con x >> 1 e ricontrollo. 
            // ad esempio, un x iniziale del tipo 0011, dopo l aprima iterazione sarà 0001 ec...
            // nel frattempo i numeri scartati vengono confrontati con & e il ris inserito in bin
            // in posizione ultima, penultima ecc...
            bin[32 - i] = '1';
        }
        else bin[32 - i] = '0';
        x = x >> 1;
    }
}
