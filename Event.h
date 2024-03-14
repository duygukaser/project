//
// Created by Duygu Kaser on 14.03.2024.
//

#ifndef UNTITLED_EVENT_H
#define UNTITLED_EVENT_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include "Spaceship.h"
 class Event(){
public:
    Event(){}
    ~Event(){}
    virtual void execute(std::unique_ptr<Spaceship>gemi)=0;
};

 class asteroidKusagi:public Event{
 public:
    int hasar_miktari=10;
      void execute(std::unique_ptr<Spaceship>gemi) override{
          if (rand() % 100 < 50){
              //GEMİ HASAR ALIR
          }
          else{
              std::cout<<"Hasar almadan kacmayi basardiniz\n";
          }
      }
 };

 class terkEdilmisGezegen:public Event{
 public:
  int altin_miktari=10;
  void execute() override {
      srand(time(nullptr));
      // Yüzde 50 olasılıkla altın kazanma işlemi
      if (rand() % 100 < 50) {
          std::cout << "Altın kazandınız!\n";
          .para += altin_miktari;
      } else {
          uzayKorsanlari uzay_korsanlari;
         std:: cout << "Maalesef altın kazanamadınız.Uzay korsanları geldi.\n";
          uzayKorsanlari.execute();
      }
  }

 };

 class uzayKorsanlari: public Event{
 public:

     void execute(int secim) override{
         int secim;
         std::cout<<"Kacmak için 1,savasmak için 2, pazarlık etmek için 3 giriniz\n";
         std::cin>>secim;

         if(secim==1){
             std::cout<<"Kacmayi sectiniz\n";
             if(){
                 if(yakit>33) {
                     //kacma olsaılıgı
                     yakit -= 33;
                 }
                 else{
                     std::cout<<"Yeterli yakitiniz bulunmamaktadir\n";

                 }
             }
             else{
                 execute()

             }

         }

         else if(secim==2){
            std::cout<<"Savasmayi sectiniz\n";
         }

         else if(secim==3){
            std::cout<<"Pazarlik etmeyi sectiniz\n";
             void randomsayi (int a,int b,int c,int d){
               //  a = time(0);
               //  srand(a);
                 //b = c + rand()% d ;
                 //geçiş ücreti öde
         }

         else{
             std::cout<<"Hatali sayi girişi ";
         }

     }
 };

#endif //UNTITLED_EVENT_H
