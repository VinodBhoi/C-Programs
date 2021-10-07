#include <iostream>
#include <conio.h>

using namespace std;

class box
{

public:
    float h, w, b;

    void getdata()
    {

        cout << "\n ----------------- Enter following Details of box ---------------------- ";
        cout << "\n Enter the Height of box : ";
        cin >>h;
        cout << "\n Enter the Width of box : ";
        cin >>w;
        cout << "\n Enter the Breadth of box : ";
        cin >>b;
    }

    void Display()
    {
        float area = (2*(h * w) + 2*(h * b) + 2*(w * b)),vol = h * w * b;
        cout << "\nArea of Box : " << area<<" sq.cm";
        cout << "\nVolume of Box :" << vol<<" cu.cm";
    }
};

int main(int argc, char const *argv[])
{

    box b[3],*ptr;
    ptr = &b[0];

    for(int i=0;i<3;i++,ptr++){

    cout<<"\nEnter the Details of Box "<<i+1;
    ptr->getdata();
    

    }
ptr = &b[0];

for(int i=0;i<3;i++,ptr++){

    cout<<"\nBox "<<i+1;
   
    ptr->Display();

    }

    getch();
    return 0;
    
}
