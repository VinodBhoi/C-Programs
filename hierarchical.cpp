#include<iostream>
// using namespace std;
class employee{
    public:
int empid,empcode;
 int get1()
 {
cout<<"\nEnter the Employee id :";
std::cin>>empid;
std::cout<<"\nEnter the Employee code :";
std::cin>>empcode;
     return 0;
 }
 
} ;


class programmer : public  employee{
    public:
char skill[50];
 int get2()
 {
std::cout<<"\nEnter the skills :";
std::cin>>skill;

     return 0;
 }
 int dislpay2()

 {    std::cout<<"\nEmployee id :"<<empid;
     std::cout<<"\nEmployee code :"<<empcode; 
     std::cout<<"Sills :"<<skill;
     return 0;
 }


} ;

class manager : public  employee{
    public:
char department[50];

 int get3()
 {
std::cout<<"\nEnter the Department :";
std::cin>>department;

     return 0;
 }

 int display1()
 { 
          std::cout<<"\nDepartment :"<<department;
 return 0;
 }



} ;


int main()
{
  programmer p;
  manager m;


  p.get1();
  p.get2();
  m.get3();
p.dislpay2();
m.display1();

    return 0;
}

