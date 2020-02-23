//
//  OgrenciTest.cpp
//  Ornek1
//
//  Created by BioCom IT Systems on 13.01.2020.
//  Copyright © 2020 BioCom IT Systems. All rights reserved.
//

#include "Ogrenci.hpp"

int main(){
    
    cout<<"Ogrenci ilk bilgiler :"<<endl;
    Ogrenci o1("Emre Usta",4,4);
    cout<<o1;
    //o1.ogrenciYazdir();
    cout<<"\nOgrenci degistirilen bilgiler :"<<endl;
    o1.setOgrenciAdi("Arda");
    o1.setOgrenciNo(30);
    o1.setSinif(9);
    o1.ogrenciYazdir();
    
    cout<<"\nIkinci ogrenci ilk bilgiler :"<<endl;
    Ogrenci o2;
    o2.setOgrenciAdi("Ahmet");
    o2.setOgrenciNo(341);
    o2.setSinif(12);
    cout<<o2;
    cout<<"\noperator ++ calisinca :"<<endl;
    o2.operator++();
    cout<<o2;
    cout<<o1.operator<(o2)<<endl;
}
