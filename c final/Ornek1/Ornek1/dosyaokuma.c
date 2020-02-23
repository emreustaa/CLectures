//#include <stdio.h>
//
//int main(){
//    
//    FILE *dosya;
//    
//    
//    char urunIsmi[50];
//    int stok;
//    char ulke[50];
//    dosya = fopen("/Users/biocomitsystems/Desktop/c final/Ornek1/yazilar.txt","r");
//    int index=0;
//    if(dosya!=NULL){
//    
//        while (!feof(dosya)) {
//            fscanf(dosya,"%s %d %s",urunIsmi,&stok,ulke);
//            printf("%s %d %s\n",urunIsmi,stok,ulke);
//            index++;
//        }
//        
//    }else{
//        printf("Dosya bulunamadi\n");
//    }/*
//      
//      KARAKTER KATARINI OKUMAK
//    if(dosya!=NULL){
//    
//        fgets(karakter,70, dosya);
//        puts(karakter);
//        
//        
//    }else{
//        printf("Dosya bulunamadi\n");
//    }*/
//    /*
//     
//     KARAKTER KARAKTER OKUMAK
//     if(dosya!=NULL){
//     karakter= fgetc(dosya);
//     while(karakter!=EOF){
//     printf("%c",karakter);
//     karakter= fgetc(dosya);
//     }
//     
//     }else{
//     printf("Dosya bulunamadi\n");
//     }
//     */
//    fclose(dosya);
//    return 0;
//}
