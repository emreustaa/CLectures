#include <stdio.h>

int main(){
    
    int a[5]={0},b[5]={0};
    int i;
    
    for (i=0; i<10; i++) {
        a[i]=i;
        b[i]=i;
        printf("%d",a[i]);
        printf("%d",a[i]);
    }
   
}
