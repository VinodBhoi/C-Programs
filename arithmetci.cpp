#include<iostream>
#include<conio.h>

using namespace std;
int l,b
class rectangle{

rectangle(){
    l=0,b=0;
}

void operator(){
l+=2;b+=2;

}

void display()
{

    cout<<"\nlength : "<<l;
    cout<<"\n Breadth :"<<b;
}



};

int main(int argc, char const *argv[])
{
   rectangle r;
   cout<<"\n length breadth before increment :";
   r.display();
   r++;
    cout<<"\n length breadth after increment :";
   r.display();


    return 0;
}
