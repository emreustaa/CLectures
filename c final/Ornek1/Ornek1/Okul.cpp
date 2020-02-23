////
////  Okul.cpp
////  Ornek1
////
////  Created by BioCom IT Systems on 13.01.2020.
////  Copyright © 2020 BioCom IT Systems. All rights reserved.
////
//
//#include "Okul.hpp"
//#include <string.h>
//using namespace std;
//
//Okul::Okul(){
//    
//    cout<<"Default constructor calisti!";
//}
//Okul::Okul(int ogrenciNo,int ogretmenNo){
//    oSayisi= ogrenciNo;
//    ogrtSayisi = ogretmenNo;
//    
//}
//
//void Okul::setoSayisi(int ogrenciSayisi){
//    
//    this->oSayisi = ogrenciSayisi;
//}
//
//void Okul::setOgrtSayisi(int ogretmenSayisi){
//    
//    this->ogrtSayisi=ogretmenSayisi;
//}
//void Okul::printOkul(){
//    cout<<"Ogrenci sayisi : "<< oSayisi << "\n" <<"Ogretmen sayisi = "<<ogrtSayisi<<endl;
//}
//
//void Okul::operator++(){
//    this->oSayisi++;
//    this->ogrtSayisi++;
//}
//
//void Okul::operator--(){
//    this->oSayisi--;
//    this->ogrtSayisi--;
//}
//bool Okul::operator==(Okul &o){
//    
//    bool kucukMu=true;
//    
//    if(this->oSayisi< o.oSayisi){
//        kucukMu =false;
//    }else{
//        kucukMu = true;
//    }
//    
//    if(kucukMu){
//        cout<<"True";
//    }else{
//        cout<<"False";
//    }
//    
//    return kucukMu;
//}
//
//bool Okul::operator<(Okul &o1){
//    
//    return this->oSayisi<o1.oSayisi;
//}
//Okul Okul::operator-(Okul &o1){
//    
//    int ogrenciFark = (this->oSayisi-o1.oSayisi);
//    int ogretmenFark (this->ogrtSayisi-o1.ogrtSayisi);
//    
//    return Okul(ogrenciFark,ogretmenFark);
//}
//
//ostream& operator<<(ostream& out, const Okul& o){
//    out<<"Ogrenci sayisi = "<<o.oSayisi<<" Ogretmen sayisi = "<<o.ogrtSayisi<< endl;
//    return out;
//}
//istream& operator>>(std::istream& in, Okul &o1){
//    
//    cout<<"Ogrenci ve ogretmen sayisini giriniz"<<endl;
//    in>>o1.oSayisi>>o1.ogrtSayisi;
//    return in;
//}
//
