#include<iostream>

class person {
    public :
char name[50],gender[50];
int age ;

 int persondata(){
   std::cout<<"Enter the name : ";
   std::cin>>name;
   std::cout<<"Enter the Gender : ";
  std::cin>>gender;
  std::cout<<"Enter the age " ;
  std::cin>>age;
 return 0;
 }
 int p_display(){
std::cout<<"Name : "<<name;
std::cout<<"Gender : "<<gender;

    return 0; 
 } 

};


class student : public person{
    
 public :
char sname[50],dep[50];


 int studentdata(){

   std::cout<<"Enter the Student name : ";
   std::cin>>sname;
   std::cout<<"Enter the Department  : ";
   std::cin>>dept;

 return 0;
 }
 int s_display(){
std::cout<<"Student name :"<<sname;
std::cout<<"Department : "<<dept;
   
    return 0; 
 } 


};


class employee : public person{
char cname[50],salary[50];

 int persondata(){
std::cout<<"Enter the Comapny name : ";
   std::cin>>cname;
   std::cout<<"Enter the Salary  : ";
   std::cin>>salary;

 return 0;
 }
 int p_display(){
std::cout<<"Company name :"<<cname;
std::cout<<"Salary : "<<salary;

    return 0; 
 } 


};



int main ()
{
  student s;
  employee e;

  s.persondata();
  s.studentdata();
  


    return 0;
}
