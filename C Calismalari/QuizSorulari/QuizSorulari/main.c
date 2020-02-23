#include <stdio.h>

void calcCharFreq(char c1[], char c2[], int freq[]);

int main(void) {
   
    char c1 [10] = "ddwredswd";
    char c2[8] = {'a','k','l','m','z','f','t','e'};
    int freq[8] = {0};
    calcCharFreq(c1, c2, freq);
}
void calcCharFreq(char c1[],char c2[],int freq[]){
    
    int i,j;
    for (i=0; i<10;i++) {
        for (j=0; j<8; j++) {
            if(c1[i]==c2[j]){
                freq[i]++;
                
            }
        }
        printf("%d",freq);
    }
    
}
