#include<iostream>
#include<cstring>

class student {
public :
int roll_no;
char name[50];

};

class test : public student {
    public :
int marks1,marks2;

};

class sports  {
public :
int score;


};

class result : public test , public sports{
public :
int total;

int get(){

std::cout<<"\nEnter the name : ";
std::cin>>name ;
std::cout<<"\nEnter the Roll no : ";
std::cin>>roll_no ;
std::cout<<"\nEnter the Marks of subject 1 : ";
std::cin>>marks1 ;
std::cout<<"\nEnter the Marks of subject 2 : ";
std::cin>>marks2 ;
std::cout<<"\nEnter your Score : ";
std::cin>>score;


return 0;
}



int display()
{
  if(strcmp(name,"yes") == 0 )
{
std::cout<<"\nName :"<<name;
std::cout<<"\nRoll no : "<<roll_no;
std::cout<<"\nMarks of subject 1 : "<<marks1;
std::cout<<"\nMarks of subject 2 : "<<marks2;
std::cout<<"\nScore : "<<score;
std::cout<<"\nTotal :"<<marks1+marks2+score;
}
return 0;
}



};


int main (){

  result r;
  r.get();
  r.display();

    return 0;
}
