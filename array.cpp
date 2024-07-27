#include<iostream>
using namespace std;

int main(){
    int marks[] = {45, 56, 89, 90};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        marks[2]=66;
        cout<<"the value of marks " <<i<< " is :"<<marks[i]<<endl;
    }
    // marks[2]=90;
    // int* p=marks;

    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of marks[0] is "<<*(p+1)<<endl;
    // cout<<"the value of marks[0] is "<<*(p+2)<<endl;
    // cout<<"the value of marks[0] is "<<*(p+3)<<endl;

    
    



return 0;
}