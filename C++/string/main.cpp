#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char string1[10] ="HlloWorld";
    char string2[10] ="I am Here";
    char string4[10] ="Good day";
    char string5[10] = "Good day";

   // strcpy(string2,string1);
    string word = strcat(string1,string2);
cout<<string2<<endl;
cout <<word<<endl;
cout << strlen(string1)<<endl;
cout << word.substr(9,18);
cout<<strcmp(string4,string5);
    return 0;
}
