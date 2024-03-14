//
// Created by Duygu Kaser on 11.03.2024.
//

#ifndef UNTITLED_SPACESHIP_H
#define UNTITLED_SPACESHIP_H
#include <iostream>
#include "Event.h"
class Spaceship{
public:
    Spaceship()={};
    Spaceship(double saglik,double yakit,double para){}
    double para;
    double yakit;
    double saglik;
    double kaçma_katsayisi;
    double hasar_katsayisi;
    virtual ~Spaceship() {}
    virtual void hasar_al(double hasar) =0;
    virtual void kac()=0;
    virtual void eventHandler()=0;eve
};

class HizliGemi:public Spaceship{
public:
    float hasar_katsayisi=1.5;
    HizliGemi(double saglik,double yakit,double para){
        saglik=100;
        yakit=100;
        para=0;
    }
   // HizliGemi(&HizliGemi rhs){
    //     saglik=rhs.saglik;
    //     para=rhs.para;
    //     yakit=rhs.yakit;
    //hasar_katsayisi=rhs.hasar_katsayisi;
   // }
    ~HizliGemi(){
    }
    void kac() {
        std::cout << "Kacma basarili";
    }
    void hasarAl(double saglik,float hasar_katsayisi,int hasar_miktari){
      saglik=saglik-(hasar_katsayisi*hasar_miktari);
   }
   void eventHandler() override{
        if(saglik<=0 || yakit<=0){
            std::cout<<"Gemi oyuna deam edemiyor.";
        }
        //random event generator
        if(event=)
    }
};

class NormalGemi:public Spaceship{
    double hasar_katsayisi=1;
    double saglik=100;
    double yakit=100;
    double  para=0;

    void kac() override {
        std::cout << "Kacma basarili";
    }
    void hasarAl(double saglik,float hasar_katsayisi,int hasar_miktari){
        saglik=saglik-(hasar_katsayisi*hasar_miktari);
    }
};

class GucluGemi:public Spaceship{
   int  hasar_katsayisi=0.5;
   double saglik=100;
   double yakit=100;
   double para=0;
   int hasar_miktari;

    void hasarAl(double saglik){
        saglik=saglik-(hasar_katsayisi*hasar_miktari);
    }

    void kac() override {
        std::cout << "Kacma basarili";
    }
};
#endif //UNTITLED_SPACESHIP_H
