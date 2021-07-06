//
//  HeartRates.hpp
//  heartRate
//
//  Created by Yusuf Öztürk on 11.04.2021.
//

#ifndef HeartRates_h
#define HeartRates_h

#include <stdio.h>
#include <string.h>
using namespace std;
class HeartRates{
public:
    HeartRates();

    HeartRates(string name, string surname, int bdDay, int bdMonth, int bdYear);
    void setİsim(string name);
    string getİsim();
    void setSoyisim(string surname);
    string getSoyisim();
    void setbdGun(int bdDay);
    int getbdGun();
    void setbdAy(int bdMonth);
    int getbdAy();
    void setbdYil(int bdYear);
    int getbdYil();
    
    
    int getMaxiumumHeartRate();
    int getAge();
    int getTargetHeartRate1();
    int getTargetHeartRate2();
    
private:
    string isim;
    string soyisim;
    int bdGun;
    int bdAy;
    int bdYil;
    
};

#endif /* HeartRates_hpp */
