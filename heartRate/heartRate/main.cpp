//
//  main.cpp
//  heartRate
//
//  Created by Yusuf Öztürk on 11.04.2021.
//

#include <iostream>
#include <string.h>

#include "HeartRates.h"
#include "HeartRates.cpp"

using namespace std;


int main() {
    int bdDay=0;
    int bdMonth=0;
    int bdYear=0;
    string name;
    string surname;
    HeartRates person1;
    
    
    cout<<"Lütfen adınızı giriniz. \n"<<name<<endl;
    person1.setİsim(name);
    cout<<"Lütfen soyisminizi giriniz. \n"<<surname<<endl;
    person1.setSoyisim(surname);
    cout<<"Lütfen doğum tarihinizi gün-ay-yıl şeklinde giriniz. \n"<<bdDay<<" "<<bdMonth<<" "<<bdYear<<endl;
    
    person1.setbdGun(bdDay);
    person1.setbdAy(bdMonth);
    person1.setbdYil(bdYear);
    
    cout<<"Kişi adı: \n"<<person1.getİsim()<<endl;
    cout<<"Kişi soyadı: \n"<<person1.getSoyisim()<<endl;
    cout<<"Kişi doğum tarihi: \n"<<person1.getbdAy()<<" "<<person1.getbdAy()<<" "<<person1.getbdYil()<<endl;
    cout<<"Kişinin yaşı: \n"<<person1.getAge()<<endl;
    cout<<"Kişinin maksimum nabzı: \n"<<person1.getMaxiumumHeartRate()<<endl;
    cout<<"kişinin hedef kalp atışı: \n"<<person1.getTargetHeartRate1()<<" - "<<person1.getTargetHeartRate2()<<endl;
    
    
    
    return 0;
}
