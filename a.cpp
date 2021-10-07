#include <iostream>

class college
{ public :
    int college_code;

    int getdata()
    {
        std::cout<<"Enter the College code :";
        std::cin>>college_code;
        return 0;
    }
};
class student: public college {
    public :
 int roll_no;
 char name[50];

 int getstudent ()
 {
     std::cout<<"Enter the Roll no & name of stduent ";
     std::cin>>roll_no>>name;
     return 0;
 }
};
class result : public student {
public :
char grade[50];
int getresult(){


std::cout<<"Enter the grade :";
std::cin>>grade ;
return 0;
}

int display()
{
std::cout<<" ------------------ Details Are -------------------";
std::cout<<"\nNcollge code : "<<college_code;
std::cout<<"\nName oF student : "<<name;
std::cout<<"\nRoll no : "<<roll_no;
std::cout<<"\nGrade : "<<grade;

return 0;
}
};

int main()

{ result r;

    r.getdata();
    r.getstudent();
    r.getresult();
    r.display();


    return 0;
}
