#include <iostream>
#include <cstring>
using namespace std;
class HerryGeeClass{
   public:
            HerryGeeClass(string z){
            setName(z);
            }
     void setName(string x) {
        name = x;
     }
    string getName(){
    return name;
    }


  private:
    string name;

};

int main()
{
    HerryGeeClass ClassObject1("Heritage Samuel F \n");
    cout << ClassObject1.getName()<< endl;

              HerryGeeClass ClassObject2("Heritage Samuel F");
    cout << ClassObject2.getName()<< endl;


    return 0;
}
