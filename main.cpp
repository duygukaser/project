#include <iostream>
#include<memory>
#include"Spaceship.h"
#include "Event.h"

double puanHesapla(double yakit,double saglik,double para){
    double puan=5*yakit+saglik*10+para*10;
    return puan;
}


int main() {
    int type; double puan;
    std::cout << "Oyunumuza hosgeldiniz!\n";
    std::cout << "Baslarken bir gemi seçmelisin!\n";
    std::cout << "Oyunda 3 adet gemi tipi var. Hızlı, Normal ve Güçlü!\n" ;
    std::cout << "Hızli gemi için 1,Normal gemi için 2 ve güçlü gemi için 3 yaz!\n" ;
    std::cin>> type;

    if((type=!1) || (type=!2) || (type=!3) ){
        std::cout<<"Gecersiz sayi girdiniz";
    }
    else{
        switch (type) {
                 case 1:{
                 std::shared_ptr<Spacehip> myShip = std::make_shared<HizliGemi>();
                 EventManager eventManager;
                     eventManager.Asteroi(myShip);
                     myShip->eventHandler();
                 break;
                 }
                 case 2:{
                     std::shared_ptr<Spacehip> myShip = std::make_shared<NormalGemi>();
                     EventManager eventManager
                     eventManager.applyAsteroidBelt(myShip);
                     myShip->eventHandler();;
                     break;
                 }
                 case 3:{
                     std::shared_ptr<Spacehip> myShip = std::make_shared<GucluGemi>();
                     EventManager eventManager;
                     eventManager.applyAsteroidBelt(myShip);
                     myShip->eventHandler();
                     break
                 }
        }
    }

     std::cout<<"Oyun bitti.Puanınız "<<puan;
    return 0;
}
