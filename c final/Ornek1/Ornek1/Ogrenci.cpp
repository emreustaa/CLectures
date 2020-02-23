//
//  Ogrenci.cpp
//  Ornek1
//
//  Created by BioCom IT Systems on 13.01.2020.
//  Copyright © 2020 BioCom IT Systems. All rights reserved.
//

#include "Ogrenci.hpp"

Ogrenci::Ogrenci(){
    cout<<"Bos constructor calisti\n";
}
Ogrenci::Ogrenci(char *ad,int no,int sinif){
    
    ogrenciAdi = new char[strlen(ad)+1];
    strcpy(ogrenciAdi, ad);
    ogrenciNo =no;
    ogrenciSinif = sinif;
}
void Ogrenci::ogrenciYazdir(){
    cout<<"Ogrenci adi : "<<ogrenciAdi<<"\n"<<"Ogrenci no : "<<ogrenciNo<<"\n"<<"Sinifi : "<<ogrenciSinif<<endl;
}

void Ogrenci::setOgrenciAdi(char *name){
    
    ogrenciAdi = new char[strlen(name)+1];
    strcpy(ogrenciAdi, name);
}

void Ogrenci::setSinif(int sinif){
    
    ogrenciSinif=sinif;
}

void Ogrenci::setOgrenciNo(int no){
    
    ogrenciNo=no;
}

ostream& operator<<(ostream& out,const Ogrenci& o){
    
    out<<"Ogrenci adi :"<<o.ogrenciAdi<<"\nOgrenci no :"<<o.ogrenciNo<<"\nSinifi : "<<o.ogrenciSinif<<endl;
    
    return out;
}

void Ogrenci::operator++(){
    
    this->ogrenciNo++;
    this->ogrenciSinif++;
}

bool Ogrenci::operator<(Ogrenci &ogrenci){
    
    return this->ogrenciNo<ogrenci.ogrenciNo;
}

