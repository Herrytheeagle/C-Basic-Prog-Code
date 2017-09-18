#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double temp=0;
    double windspeed=0;
    int result=0;
    cout<<"ENTER THE TEMPERATURE VALUE"<<endl;
    cin>>temp;
    cout<<"ENTER THE WIND SPEED"<<endl;
    cin>>windspeed;
    if(((temp < -58)&& temp <=40)&& (windspeed>2))
   {

        cout<<"TEMPERATURE AND/OR WIND SPEED IS INVALID"<<endl;
   }
else
  {
    ((result=temp+35.74-(pow(windspeed,0.16)))+pow(0.4275,0.16));

    cout<<"THE WINDCHILL TEMPERATURE IS "<<result<<"F"<<endl;
     cout<<"THE WINDCHILL TEMPERATURE IS "<<sin(200.374);
  }
    return 0;

}
