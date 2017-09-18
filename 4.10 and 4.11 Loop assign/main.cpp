#include <iostream>

using namespace std;

int main()
{ /*4.10*/
int counter = 100;

    while(counter<=1000){
    if((counter%6==0)(counter%5)==0){
      cout<< counter<<" ";
if((counter%8)==0){
    cout << endl;
}
    }

counter++;
    }
}
/*  4.11
int counter = 100;
    while(counter<=200){
    if(counter%5==0){
      cout<< counter<<" ";

      if(counter%50==0){
        cout<<endl;
      }

    }
     counter++;
    }

   }*/
