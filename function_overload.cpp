#include<iostream>
#include<conio.h>

using namespace std;

void area (int r)
{

  int ans;
  ans=3.14*r*r;
  cout<<"\n Are of circle is "<<ans;

}
void area (int l,int b)
{

  int ans;
  ans=l*b;
  cout<<"\n Are of Rectangle is "<<ans;

}
void area (float side)
{

  int ans;
  ans=side*side;
  cout<<"\n Are of is square "<<ans;

}
int main (){


    area(5);
    area(2,7);
    area(5.5);
    getch();
    return 0;
}
