//
// Created by Duygu Kaser on 14.03.2024.
//

#ifndef UNTITLED_EVENTMANAGER_H
#define UNTITLED_EVENTMANAGER_H

#include <iostream>
#include <Event.h>

class EventManager {
public:
    void asteroidKusagiOynat(std::shared_ptr<Spaceship> ship){
        asteroidKusagi asteroid_kusagi;
    }

void uzayKorsanlariOynat(std::shared_ptr<Spaceship> ship){
    uzayKorsanlari uzay_korsanlari;
}
void terkEdilmisGezegenOynat(std::shared_ptr<Spaceship> ship){
    terkEdilmisGezegen terk_edilmis_gezegen;
}
};

double puanHesapla(double yakit,double saglik,double para){
    double puan=5*yakit+saglik*10+para*10;
    return puan;
}

#endif //UNTITLED_EVENTMANAGER_H
