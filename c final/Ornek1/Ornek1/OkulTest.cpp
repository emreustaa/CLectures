////
////  OkulTest.cpp
////  Ornek1
////
////  Created by BioCom IT Systems on 13.01.2020.
////  Copyright © 2020 BioCom IT Systems. All rights reserved.
////
//
//#include <iostream>
//#include "Okul.hpp"
//#include <string.h>
//
//using namespace std;
//
//int main(){
//    
//    Okul o1;
//    o1.setoSayisi(5);
//    o1.setOgrtSayisi(6);
//    
//    cout<<"O2 Bilgileri"<<endl;
//    Okul o2(8,5);
//    o2.printOkul();
//    cout<<"O1 bilgileri operator++ cagrilmadan once"<<endl;
//    o1.printOkul();
//    o1.operator++();
//    cout<<"O1 Bilgileri operator++ cagrildiktan sonra"<<endl;
//    o1.printOkul();
//    cout<<"Operator== kullanimi"<<endl;
//    cout<<o1.operator==(o2)<<endl;
//    cout<<"Opeator< kullanimi"<<endl;
//    cout<<o1.operator<(o2)<<endl;
//    cout<<"O1 bilgileri operator-- cagrilmadan once"<<endl;
//    o1.printOkul();
//    o1.operator--();
//    cout<<"O1 Bilgileri operator-- cagrildiktan sonra"<<endl;
//    o1.printOkul();
//    cout<<"Operator - cagrildiktan sonra"<<endl;
//    o1.operator-(o2);
//    cout<<"Out stream ve in stream metotlari"<<endl;
//    
//    Okul o4(5,6);
//    cout<<o4;
//    return 0;
//    
//    
//}
