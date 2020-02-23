#include <stdio.h>

int main(void) {
    
    char tak1[20],tak2[20],tak3[20];
    int p1,p2,p3;
    
    printf("Takim adlarini giriniz\n");
    scanf("%s%s%s",tak1,tak2,tak3);
    printf("Puanlarini giriniz\n");
    scanf("%d%d%d",&p1,&p2,&p3);
    
    printf("Girilen takimlar ve puanlari: \n");
    printf("%s takiminin puani %d\n%s takiminin puani %d\n%s takiminin puani %d\n",tak1,p1,tak2,p2,tak3,p3);
    
    return 0;
    
}

/*
void adGoster(char tak1[10],char tak2[10],char tak3[10]){
    
    printf("%s",tak1);
    printf("%s",tak2);
    printf("%s",tak3);

}
*/
