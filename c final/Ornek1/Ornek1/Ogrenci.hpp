//
//  Ogrenci.hpp
//  Ornek1
//
//  Created by BioCom IT Systems on 13.01.2020.
//  Copyright © 2020 BioCom IT Systems. All rights reserved.
//

#ifndef Ogrenci_hpp
#define Ogrenci_hpp

#include <iostream>
#include <string.h>
using namespace std;

class Ogrenci{
    
public:
    
    Ogrenci();
    Ogrenci(char*,int,int);
    void ogrenciYazdir();
    void setOgrenciAdi(char*);
    void setOgrenciNo(int);
    void setSinif(int);
    friend std::ostream& operator<<(std::ostream&,const Ogrenci &);
    friend std::istream& operator>>(std::istream&,const Ogrenci &);
    void operator++(void);
    bool operator<(Ogrenci &);
private:
    
    char *ogrenciAdi;
    int ogrenciNo;
    int ogrenciSinif;
};

#endif /* Ogrenci_hpp */
