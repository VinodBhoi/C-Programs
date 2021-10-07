#include <iostream>

class Student {
public :
char name[50];


};

class Marks : public Student{
public :
int m1,m2,m3;

void getdata(){
    cout<<"Enter Student Name :";
   cin>>name;

    cout<<"Enter Marks of M1 M2 M3 :";
    cin>>m1>>m2>>m3; 
}

void display(){
cout<<"Student Name :"<<name;

cout<<"Marks of M1 M2 M3 :">>m1>>m2>>m3;
    
}

};



int main()
{
   Marks m;
   m.getdata();
   m.display();
    return 0;
}