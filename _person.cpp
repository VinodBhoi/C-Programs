#include <iostream>

class person
{
public:
   int age;
   char name[50], gender[50];
};

class employee : public person
{

public:
   int emp_id, salary;
   char company[50];
};

class programmer : public employee
{
public:
   int no_of_prog_lang_known;

   int getdata()
   {
      std::cout << "\nEnter name of person : ";
      std::cin >> name;
      std::cout << "\nEnter the age : ";
      std::cin >> age;
      std::cout << "\nEnter the gender : ";
      std::cin >> gender;
      std::cout << "\nEnter the employee id : ";
      std::cin >> emp_id;
      std::cout << "\nEnter the company name : ";
      std::cin >> company;
      std::cout << " \nSalary : ";
      std::cin >> salary;
      std::cout << "\nenter the yout known programming languages : ";
      std::cin >> no_of_prog_lang_known;

      return 0;
   }
   int display()
   {
      std::cout << "***************   Details   ****************";
      std::cout << "\nPerson name : " << name;
      std::cout << "\nGender : " << gender;
      std::cout << "\nAge : " << age;
      std::cout << "\nEmployee id : " << emp_id;
      std::cout << "\ncompany :" << company;
      std::cout << "\nSalary :  " << salary;
      std::cout << " \nno of Known programing lanuages " << no_of_prog_lang_known;

      return 0;
   }
};

int main()
{
   programmer p;

   p.getdata();
   p.display();
   return 0;
}