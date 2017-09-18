#include <iostream>

using namespace std;

class car{
public:
    int speed(int rate){
    return rate;
    }
    void reverse(){
    cout << "the cammry car is reversing"<<endl;
    }
    void stop(){
    cout << "The cammry car has stopped";

    }




};

int main()
{
    car cammry;

    cout << "The cammry car is running at the speed of"<< cammry.speed(12)<<"km/h"<<endl;
     cammry.reverse();
     cammry.stop();
    return 0;
}
