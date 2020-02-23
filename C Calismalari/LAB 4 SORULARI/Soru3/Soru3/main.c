#include <stdio.h>
#define min(x,y) ((x>y)?y:x);
#define max(x,y) ((x>y)?x:y);

void minMax(int);

int main(int argc, const char * argv[]) {
    int count;
    printf("Kac Adet Sayi gireceksin\n");
    scanf("%d",&count);
    minMax(count);
}

void minMax(int count){
    
    int mins=0;
    int maxs=0;
    
    printf(".%d sayi = ",1);
    scanf("%d",&mins);
    maxs =mins;
    int girilen;
    
    for (int i=2; i<=count; i++) {
       printf(".d sayi = ");
       scanf("%d",&girilen);
        
        maxs = max(maxs,girilen);
        mins = min(mins,girilen);
        
    }
    
    printf("min = %d\n max = %d",mins,maxs);
    
    
}
