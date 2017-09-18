#include <iostream>

using namespace std;

int main()
{
int combination = 0;
 int factorialoften = 1;
 int factorialoftwo =1;

for(int i=15; i>11; i--){
  factorialoften *= i;
}
for(int j =4; j>0; j--){
    factorialoftwo *=j;

}

combination = factorialoften/(factorialoftwo);
cout <<"combination of picking 2 numbers from ten: "<<combination;
    return 0;
}
