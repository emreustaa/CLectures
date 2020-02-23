////
////  Lab6_Soru3.c
////  PointersExamples
////
////  Created by BioCom IT Systems on 8.11.2019.
////  Copyright © 2019 BioCom IT Systems. All rights reserved.
////
//
//#include <stdio.h>
//
//void insertNumbers(int*);
//int sumNumbers(int*);
//void printNumbers(int*);
//int main(int argc, char *argv[])
//{
//    int intarr[10];
//
//    insertNumbers(intarr);
//    printNumbers(intarr);
//
//    printf("toplam = %d",sumNumbers(intarr));
//
//
//    return 0;
//}
//
//void insertNumbers(int * liste)
//{
//    int i=0;
//    for(i=0; i<10; i++)
//    {
//        printf("%d. sayi = ",i+1);
//        scanf("%d",(liste+i));
//    }
//}
//
//int sumNumbers(int * liste)
//{
//    int sum=0;
//    int i=0;
//    for(i=0; i<10; i++)
//    {
//      sum+=*(liste+i);
//    }
//    return sum;
//}
//
//void printNumbers(int * liste)
//{
//    int i=0;
//    for(i=0; i<10; i++)
//    {
//        printf("%p = %d\n",(liste+i),*(liste+i));
//    }
//}
//
//
