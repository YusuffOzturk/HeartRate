//
//  HeartRates.cpp
//  heartRate
//
//  Created by Yusuf Öztürk on 11.04.2021.
//
#include <iostream>
#include "HeartRates.h"
#include <string.h>

HeartRates::HeartRates(string name, string surname, int bdDay, int bdMonth, int bdYear){
    setİsim(name);
    setSoyisim(surname);
    setbdGun(bdDay);
    setbdAy(bdMonth);
    setbdYil(bdYear);
    
}
 
HeartRates::HeartRates(){
    cout<<"Def cons çağırıldı"<<endl;
}




void  HeartRates::setİsim(string name){
    isim=name;
}
string HeartRates::getİsim(){
    return isim;
}
void HeartRates::setSoyisim(string surname){
    soyisim=surname;
}
string HeartRates::getSoyisim(){
    return soyisim;
}
void HeartRates::setbdGun(int bdDay){
    bdGun=bdDay;
}
int HeartRates::getbdGun(){
    return bdGun;
}
void HeartRates::setbdAy(int bdMonth){
    bdAy=bdMonth;
}
int HeartRates::getbdAy(){
    return bdAy;
}
void HeartRates::setbdYil(int bdYear){
    bdYil=bdYear;
}
int HeartRates::getbdYil(){
    return bdYil;
}
int HeartRates::getAge(){
    int gung;
    int ayg;
    int yilg;
    int yas;
    
    cout<<"Lütfen güncel tarihi gün-ay-yıl şeklinde giriniz"<<endl;
    cin>>gung>>ayg>>yilg;
    cout<<"Lütfen doğum tarihinizi gün ay yıl şeklinde giriniz"<<endl;
    cin>>bdGun>>bdAy>>bdYil;
    yas=yilg-bdYil;
    return yas;
}
int HeartRates::getMaxiumumHeartRate(){
    int heartRate=220-getAge();
  
    return heartRate;
}

int HeartRates::getTargetHeartRate1(){
    
    int TargetHeartRate1=(50/100)*getMaxiumumHeartRate();
    //int TargetHeartRate2=(85/100)*getMaxiumumHeartRate();
    
    return TargetHeartRate1;
    
}
int HeartRates::getTargetHeartRate2()
{
    int TargetHeartRate2=(85/100)*getMaxiumumHeartRate();
    return TargetHeartRate2;
}






