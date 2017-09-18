#include <iostream>

using namespace std;

int main()
{
    int noOfStudent[]={};
    int best=80;
    int score=0;
    cout<<"ENTER THE TOTAL NUMBER OF STUDENT NOW."<<endl;
    cin>>noOfStudent;
    for(int i=0;i<noOfStudent;i++){
      cout<<"ENTER THE SCORE FOR THE TOTAL NUMBER OF STUDENT ENTERED"<<endl;
      cin>>score;
      for(int i=0;i<score;i++){
    if(score>=best-10);
    cout<<"GRADE SCORE IS (A)"<<endl;
    if(score>=best-20);
    cout<<"GRADE SCORE IS (B)"<<endl;
    if(score>=best-30);
    cout<<"GRADE SCORE IS (C)"<<endl;
    if(score>=best-40);
    cout<<"GRADE SCORE IS (D)"<<endl;
    if(score>=best-50);
    cout<<"GRADE SCORE IS (E)"<<endl;
    if(score>=best-60);
    cout<<"GRADE SCORE IS (F)"<<endl;
  }
}
  return 0;
}
