#include<iostream>

class cricketer{
public :
char name[50], team[50] ;
int age;




};


class batsman :virtual public cricketer {
public :
int runs ;
float strike_rate;


};


class bowler:virtual public cricketer  {
public :
int  wickets;
char type[50];


};


class all_rounder : public batsman, public bowler {
  public :
char rank;

int getdata(){


 std::cout<<"\nEnter the player name : " ;
 std::cin>>name ;
std::cout<<"\nEnter the Team :" ;
 std::cin>> team;
  std::cout<<"\nEnter your age :" ;
 std::cin>>age ;
  std::cout<<"Enter  runs  :" ;
 std::cin>>runs ;
   std::cout<<"Enter stikerate" ;
 std::cin>>strike_rate ;
   std::cout<<"Enter  taken wickets  " ;
 std::cin>>wickets ;

   std::cout<<"Enter Type of Bolowing : " ;
 std::cin>>type ;

   std::cout<<"Enter Rank " ;
 std::cin>> rank;






    return 0;
     
}
int display(){


 std::cout<<"\nplayer name : "<<name ;
 
std::cout<<"\n Team :"<<team ;

  std::cout<<"\nage :"<<age ;

  std::cout<<"\nruns  :"<<runs ;

   std::cout<<"\nstike rate :"<<strike_rate ;

   std::cout<<"\ntaken wickets : "<<wickets ;


   std::cout<<"\nType of Bolowing : "<<type ;


   std::cout<<"\nRank "<<rank ;
 


    return 0;
     
}

};

int main()
{

all_rounder a;

a.getdata();
a.display();



    return 0;
}