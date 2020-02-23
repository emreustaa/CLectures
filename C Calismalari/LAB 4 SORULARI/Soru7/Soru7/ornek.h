#ifndef ornek_h
#define ornek_h

#include <stdio.h>

int topla(int sayi1,int sayi2){
    return sayi1 + sayi2;
}

int cikarma(int sayi1,int sayi2){
    return sayi1 - sayi2;
}

int carpma(int sayi1,int sayi2){
    return sayi1 * sayi2;
}

int bolme (int sayi1,int sayi2){
    return sayi1 / sayi2;
}

int ascii (char c){
    
    int a = c;

    return a;
}
int faktoriyel (int sayi){
    
    int carpim = 1;
    
    for (int i=1; i<=sayi; i++) {
        carpim = i * carpim;
    }
    return carpim;
}


#endif /* ornek_h */
