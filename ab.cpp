

#include<iostream>

#include<dos.h>

int r,j,i,t,x,o,win=2,over,checkdone=0,positive=0,flag=0,ch,lengtha,lengthb,win_a=0,win_b=0,team_a_points=0,team_b_points=0,team_a_rank=0,team_b_rank=0,team_a_acc=40,team_b_acc=40,positive_turna=0,flag_turna=0,team_a_win=0,team_b_win=0,round=0,match=0;
char a,p1[50],p2[50],enter,reenter,draw[9],c,team_a_name[50]="Team A",team_b_name[50]="Team B",wspace[5]="   " ,drawturna[9];



void menutype()
{

cout<<"\n\n\t\t\t      |   Casual Match    | ";
cout<<"\n\t\t\t      |   Turnament       | ";
cout<<"\n\t\t\t      |   How to play ?   | ";
cout<<"\n\t\t\t      |   About Developer |  ";
cout<<"\n\t\t\t      |   Quit            | ";
 if(checkdone==1)
	{
	cout<<"\n\nInvalid Choice, Enter valid choice only";

	}
	checkdone=0;
cout<<"\n\n\nEnter your choice : ";
cin>>ch;



}

void prototype()
{        clrscr();
	 cout<<"\n\n                   -------------  | TIC TAC TOE |  ------------- ";
	 cout<<"\n\nDeveloped By : Adi Star Coders ";
	 cout<<"\nDeveloper : Aditya More { Head of Adi star Coders } ";


}
void box()
{ cout<<"\n\n\n\n\n\t\t\t   ------- | Play Zone | -------";
	 cout<<"\n\n\t\t\t\t|  "<<draw[0]<<"  |  "<<draw[1]<<"  |  "<<draw[2]<<"  |";
	 cout<<"\n\t\t\t\t-------------------";
	cout<<"\n\t\t\t\t|  "<<draw[3]<<"  |  "<<draw[4]<<"  |  "<<draw[5]<<"  |";
	 cout<<"\n\t\t\t\t-------------------";
	cout<<"\n\t\t\t\t|  "<<draw[6]<<"  |  "<<draw[7]<<"  |  "<<draw[8]<<"  |";

}

void idwinner()
{
	if(win==1)
	 {
	   cout<<"\n\a\a"<<p1<<" you are winner ");
	   cout<<"\n"<<p2<<" you are loos , Better luck next time ";
	   i=6;

	 }

	else if(win==2)
	 {
	  cout<<"\n\a\a"<<p2<<" you are Winner ",);
	  cout<<"\n%s you are Loos , Better luck next time ",p1);
	  i=6;
 }         }

  void head()
       { textcolor(WHITE);
       cout<<"\n\t\t\t @Adi Star Coders - Tic Tac Toe ";
       cout<<"\n________________________________________________________________________________";
     //  cout<<"\n\n------------------------------------------------------------------------------";
       cout<<"\n********";     cout<<"  *";   cout<<"   *******";     cout<<"   ********";         cout<<"    * ";          cout<<"      *******";   cout<<"   ********";        cout<<"  ***** ";        cout<<"  *****";
      cout<<"\n    *";     cout<<"     *";   cout<<"   *";            cout<<"            *";         cout<<"      *   * ";       cout<<"    *";      cout<<"            *";    cout<<"     *     * "   );  cout<<" *";
      cout<<"\n    *";        cout<<"     *"; cout<<"   *";           cout<<"            *";       cout<<"     * *** *";   cout<<"    *";            cout<<"            *";    cout<<"     *     *";      cout<<"  *****";
      cout<<"\n    *";        cout<<"     *"; cout<<"   *";           cout<<"            *";             cout<<"    * ***** *";  cout<<"   *";       cout<<"            *";    cout<<"     *     * "    ); cout<<" *";
      cout<<"\n    *";        cout<<"     *"; cout<<"   *******";    cout<<"      *";              cout<<"   *         *";cout<<"  *******";        cout<<"      *";    cout<<"      *****";             cout<<"   *****";
    //  cout<<"\n-------------------------------------------------------------------------------";
	cout<<"\n________________________________________________________________________________";
  }
void testx()
{
 if(x>9 || x==0)

 { clrscr();
   prototype();
   box();
  cout<<"\n\a\a\a1 to 9 Position are available only ,Give Correct Position ";
    positive=1;
 }

 else  if(draw[x-1]=='X'|| draw[x-1]=='O')
  { prototype();
    box();
   cout<<"\nThis Position contain already a sign";
     positive=2;

  }

  else
  {
   positive=6;
  }
}
void testo()
{

     if (o>9 || o==0)
       {

      prototype();
      box();
      cout<<"\n\a\a\a1 to 9 Position are available only ,Give Correct Position ";
      flag=1;
	}

   else if (draw[o-1]=='X'|| draw[o-1]=='O')
	{ prototype();
	 box();
	cout<<"\n\a\a\aThis Position contain already a sign";
	flag=2;
	}
   else{
	flag=6;
       }

 }


 void rescanx()
 {
  if(positive<=2)
		  {
		    do
			  {


			 cout<<"\n"<<p1<<"'s ( X ) Turns :  ");
			 cin>>x;
			 testx();

		       }while(positive<=2);
		 }

 }
void rescano()
{
  if(flag<=2)
	       {
		    do
			  {


			 cout<<"\n"<<p2<<"'s ( O ) Turns :  ");
			 cin>>o;
			 testo();

			 }while(flag<=2);
		 }

}

void casualmatch()
{


    for(j=0;j<=8;j++)
      {
	draw[j]=' ';
      }


	prototype();
	cout<<"\n\n\nRemember ! : i) Following are Position Number of Each box ";
	cout<<"\n\t    ii) Enter Any number of Following Boxes number\n\t\tfor insert ( X & O ) to the numbered Position ";
	cout<<"\n\n\t\t\t\t|  1  |  2  |  3  |";
	cout<<"\n\t\t\t\t-------------------";
	cout<<"\n\t\t\t\t|  4  |  5  |  6  |";
	cout<<"\n\t\t\t\t-------------------";
	cout<<"\n\t\t\t\t|  7  |  8  |  9  |";


       cout<<"\n\n\Press the";
       ccout<<" Enter";
       cout<<" the Button to Start the game " );
       cin>>enter;

       if(enter=='a')
	 {      enter='a';
		clrscr();
		prototype();
		cout<<"\n\nEnter the name of Player - X : ";
		fflush(stdin);
		gets(p1);
		cout<<"\nEnter the name of Player - O : ";
		fflush(stdin);
		gets(p2);
		cout<<"\n\nTurns Assign Below ";
		cout<<"\nX - "<<p1;
		cout<<"\nO - "<<p2;
		clrscr();

		for(i=0;i<5;i++)
		      {
			  prototype();
			  box();
			  cout<<"\n\n"<<p1<<"'s ( X ) Turns :  ";
			  cin>>x;
			  testx();
			  rescanx();


			  draw[x-1]='X';
			  prototype();
			  box();
			       if (draw[0]=='X' && draw[4]=='X' && draw[8]=='X' || draw[2]=='X' && draw[4]=='X' && draw[6]=='X' || draw[0]=='X' && draw[1]=='X' && draw[2]=='X' || draw[3]=='X' && draw[4]=='X' && draw[5]=='X' || draw[6]=='X' && draw[7]=='X' && draw[8]=='X' || draw[0]=='X' && draw[3]=='X' && draw[6]=='X' || draw[1]=='X' && draw[4]=='X' && draw[7]=='X' || draw[2]=='X' && draw[5]=='X' && draw[8]=='X')
				   {
				     win=1;
				     idwinner();
				     break;
				   }

			       else if (draw[0]=='O' && draw[4]=='O' && draw[8]=='O' || draw[2]=='O' && draw[4]=='O' && draw[6]=='O' || draw[0]=='O' && draw[1]=='O' && draw[2]=='O' || draw[3]=='O' && draw[4]=='O' && draw[5]=='O' || draw[6]=='O' && draw[7]=='O' && draw[8]=='O' || draw[0]=='O' && draw[3]=='O' && draw[6]=='O' || draw[1]=='O' && draw[4]=='O' && draw[7]=='O' || draw[2]=='O'&& draw[5]=='O' && draw[8]=='O')
				   {
				     win=2;
				     idwinner();
				      break;
				 }

		      if(i<4)
		       {
			 cout<<"\n\n"<<p2<<" ( O ) Turns :  ";
			 cin>>o;
			 testo();
			 rescano();

			draw[o-1]='O';
			clrscr();
			prototype();
			box();
			   if (draw[0]=='X' && draw[4]=='X' && draw[8]=='X' || draw[2]=='X' && draw[4]=='X' && draw[6]=='X' || draw[0]=='X' && draw[1]=='X' && draw[2]=='X' || draw[3]=='X' && draw[4]=='X' && draw[5]=='X' || draw[6]=='X' && draw[7]=='X' && draw[8]=='X' || draw[0]=='X' && draw[3]=='X' && draw[6]=='X' || draw[1]=='X' && draw[4]=='X' && draw[7]=='X' || draw[2]=='X' && draw[5]=='X' && draw[8]=='X')
				   {
				     win=1;
				     idwinner();

				    }

			     else if (draw[0]=='O' && draw[4]=='O' && draw[8]=='O' || draw[2]=='O' && draw[4]=='O' && draw[6]=='O' || draw[0]=='O' && draw[1]=='O' && draw[2]=='O' || draw[3]=='O' && draw[4]=='O' && draw[5]=='O' || draw[6]=='O' && draw[7]=='O' && draw[8]=='O' || draw[0]=='O' && draw[3]=='O' && draw[6]=='O' || draw[1]=='O' && draw[4]=='O' && draw[7]=='O' || draw[2]=='O'&& draw[5]=='O' && draw[8]=='O')
				    {
				      win=2;
				      idwinner();



				     }

		       }
		  else
		       {
			cout<<"\n\n\t\t  ******************* Game over ********************";
		       }





	   }


}
}

void hitenter()
{
textcolor(YELLOW+BLINK);
ccout<<"     Hit A";
textcolor(WHITE);
}
void pressa()
{
textcolor(LIGHTGREEN+BLINK);
ccout<<"Press 'A' Start Turnament";
textcolor(WHITE);
cin>>a);

}
void headingfort()
{  cout<<"                 --------------  | Tic Tac Toe |  -------------- ";
      cout<<"\n                     -----------  | Turnament |  ----------- ";

}
void table()
{
    a=' ';
  clrscr();
	 headingfort();
	cout<<"\n\n";
       cout<<"\n                                                  Semi-Final        Final   ";
       cout<<"\n  _________       _________       _________       _________       _________ ";
       cout<<"\n |         |     |         |     |         |     |         |     |         |";
       cout<<"\n |  Round  |     |  Round  |     |  Round  |     | A.T.K.T |     | A.T.K.T |";
       cout<<"\n |    1    |     |    2    |     |    3    |     |  Round  |     |  Round  | ";
       cout<<"\n |_________|     |_________|     |_________|     |_________|     |_________| ";
       cout<<"\n      |  ";
       cout<<"\n      |   ";
       cout<<"\n      |                      __              ";
       cout<<"\n      |---- Match 1            |              ";
       cout<<"\n      |---- Match 2            |                 ";
       cout<<"\n      |---- Match 3            |----> Each Round contains ";
       cout<<"\n      |---- A.T.K.T Match      |        ";
       cout<<"\n      |---- A.T.K.T Match    __|         ";
       cout<<"\n\n\n ";
       textcolor (LIGHTGREEN+BLINK);
     ccout<<"\n\n                                  Press 'A'to Next";
     cin>>a);
     textcolor(WHITE);

}
void  rules1()
{
     clrscr();
	   headingfort();
	   cout<<"\n\n";
	   textcolor(RED);
	   ccout<<"Rules : Read all rules for understanding So Please Read me ";
	   textcolor(WHITE);
	   cout<<"\n\n";
      cout<<"\n\n1.Points  : Remember Match points is temporary points for win round after win\n\t    round team get 1 points parmently";
      cout<<"\n\n2.Regular Matches & Rounds: Round 1,Round 2,Round 3 & Match 1,Match 2,Match 3,\n\t\t\t    This are Regular Matches & Rounds.After this round\t\t\t\t    are finish, team A points is 1 is & team B points is \t\t\t    2 then it is hard choose winner of round & Turnament\t\t\t    then Adi Star Coders introduces A.T.K.T Rounds & \t\t\t\t    Matches.";
      cout<<"\n\n3.A.T.K.T Matches & Rounds: It is Comeback Chance to point 1 team only, but\n\t\t\t    point 1 team win both A.T.K.T Rounds or matches for\t\t\t\t    win a round or turnament. ";
      cout<<"\n\n\n\n\t\t\t   ";


       pressa();


}
void rules2()
{
clrscr();
      headingfort();
      cout<<"\n\n";
      textcolor(RED);
      ccout<<"Rules : Read all rules for understanding So Please Read me ";
      textcolor(WHITE)
      cout<<"\n";
      cout<<"\n\n4.Match & Round Points : Each match winner Team get 1 point (Temporary),\n\t\t\t Teams Collect 3 points for win Rounds or turnaments,\t\t\t\t after regular 3 match Score will be check, if team A\t\t\t\t points is 2 thats mean team B have 1 points, then using\t\t\t A.T.K.T Matches & rounds Collect reamaining points &\t\t\t\t win\ rounds & turnament.";

      cout<<"\n\n5.Round & Turnament Winner : 3 Points (Temporary) require for win Each Round,\t\t\t\t     After win round team get 1 (Parmently) point, then\t\t\t\t     You win rounds & collect 3 points (Parmently) & win\t\t\t     turnament.";

      cout<<"\n\n6.Tie Match :Some times match will tie then,this match will play again. ";


      cout<<"\n\n\n\n\n\t\t\t ";
       pressa();

}


 void forloopa()
{

	for(i=0;i<=(lengtha+6);i++)
	{
	 cout<<"_";
	}
}
void forloopb()
{

	for(i=0;i<=(lengthb+6);i++)
	{
	 cout<<"_";
	}
}
void spacea()
{
     textcolor(BLACK);
     ccout<<wspace<<team_a_name<<wspace);
     textcolor(WHITE);
}
void spaceb()
     {  textcolor(BLACK);
     ccout<<wspace<<team_b_name<<wspace);
     textcolor(WHITE);
     }
void mangespaceforvs()
{
     textcolor(BLACK);
     ccout<<"   |";spacea();
     textcolor(WHITE);
}
void teams()
{       //for Team A
      lengtha=strlen(team_a_name);                      lengthb=strlen(team_b_name);
      cout<<"\n\n    ";
      forloopa();                                         cout<<"\t\t"; cout<<"*       *    ****** ";    cout<<"\t\t ";forloopb();
      cout<<"\n   |";spacea();cout<<" |";             cout<<"\t\t"; cout<<" *     *     *      ";    cout<<"\t\t"; cout<<"|";spaceb();cout<<" |\n";
      cout<<"   |"<<wspace<<team_a_name<<wspace<<" |";   cout<<"\t\t"; cout<<"  *   *      ****** ";    cout<<"\t\t"; cout<<"|"<<wspace<<team_b_name<<wspace<<" |\n";
      cout<<"   |";forloopa(); cout<<"|";             cout<<"\t\t"; cout<<"   * *            * ";    cout<<"\t\t"; cout<<"|";forloopb();cout<<"|\n";
      mangespaceforvs();                                  cout<<"\t\t"; cout<<"    *        ****** ";



}




void points_table()

{clrscr();
headingfort();
    if(team_a_points==1)
    {
     team_a_rank= 1;
     team_a_acc = 70;
    }


    if(team_b_points==1)
    { team_b_rank=1;
      team_b_acc=70;
    }
     if(team_a_points==2)
    {
     team_a_rank= 1;
     team_a_acc = 80;

    }
    if(team_b_points==2)
    { team_b_rank=1;
      team_b_acc=80;
    }
       cout<<"\n\n\n\n================================== Points Table ===============================";

      lengtha=strlen(team_a_name);                      lengthb=strlen(team_b_name);
      cout<<"\n\n\t    ";
      forloopa();                                         cout<<"\t\t\t\t ";forloopb();cout<<"\t";
      cout<<"\n\t   |";spacea();cout<<" |";             cout<<"\t\t\t\t"; cout<<"|";spaceb();cout<<" |\n";
      cout<<"\t   |"<<wspace<<team_a_name<<wspace<< "|";   cout<<"\t\t\t\t"; cout<<"|"<<wspace<<team_b_name<<wspace<< " |\n\t";
      cout<<"   |";forloopa(); cout<<"|";             cout<<"\t\t\t\t"; cout<<"|";forloopb();cout<<"|\n\t";

       cout<<"\n";
       cout<<"\n\t    Team     :  "<<team_a_name,wspace;cout<<"\t\t  |\t\t ";  cout<<"Team     :  "<<team_b_name,wspace ;
       cout<<"\n\t    Points   :  "<<team_a_points;  cout<<"\t\t  |\t\t ";     cout<<"Points   :  "<<team_b_points;
       cout<<"\n\t    Rank     :  "<<team_a_rank);     cout<<"\t\t  |\t\t ";     cout<<"Rank     :  "<<team_b_rank;
       cout<<"\n\t    Accuracy :  "<<team_a_acc<<"%";    cout<<"\t\t  |\t\t ";     cout<<"Accuracy :  "<<team_b_acc;



}
void turnabox()
{

cout<<"\n\n\n\t\t\t   ------- | Play Zone | -------";
	 cout<<"\n\n\t\t\t\t|  drawturna[0]  |  drawturna[1]  |  drawturna[2]  |";
	 cout<<"\n\t\t\t\t-------------------";
	 cout<<"\n\t\t\t\t|  drawturna[3]  |  drawturna[4]  |  drawturna[5]  |";
	 cout<<"\n\t\t\t\t-------------------";
	 cout<<"\n\t\t\t\t|  drawturna[6]  |  drawturna[7]  |  drawturna[8]  |";

}

void prototype_of_turnament()
{

 clrscr();


       headingfort();

       cout<<"\n\n===============================================================================";

	if(round==1) {
	cout<<"\n\t\t\t\t !!  Round 1  !!  ";

	  }
       else if(round==2) {
       cout<<"\n\t\t\t\t !!  Round 2  !!  ";

       }
      else if(round==3) {
       cout<<"\n\t\t\t\t !!  Round 3  !!  ";

       }
      else if(round==4) {
       cout<<"\n\t\t\t\t  !!  A.T.K.T Round 1  !!  ";

       }
      else  if(round==5) {
       cout<<"\n\t\t\t\t  !! A.T.K.T Round 2  !!  ";

       }

     if(match==1)
     {
      cout<<"\n\t\t\t\t  !  Match 1  !  ";
     }
   else  if(match==2)
     {
      cout<<"\n\t\t\t\t  !  Match 2  !  ";
     }
   else  if(match==3)
     {
      cout<<"\n\t\t\t\t  !  Match 3  !  ";
     }
  else   if(match==4)
     {
      cout<<"\n\t\t\t     !  A.T.K.T Match 1  !  ";
     }
   else  if(match==5)
     {
      cout<<"\n\t\t\t     !  A.T.K.T Match 2  !  ";
     }
       cout<<"\n\n"<<team_a_name);        cout<<"\t\t\t\t\t\t\t                "<<team_b_name);
cout<<"\nWins : "<<team_a_win);    cout<<"\t\t\t\t\t\t\t      Wins : "<<team_b_win);

}
void testxturna()
{
 if(x>9 || x==0)

 { clrscr();
   prototype_of_turnament();
   turnabox();
  cout<<"\n\a\a\a1 to 9 Position are available only ,Give Correct Position ";
    positive_turna=1;
 }

 else  if(drawturna[x-1]=='X'|| drawturna[x-1]=='O')
  { prototype_of_turnament();
   turnabox();
   cout<<"\nThis Position contain already a sign";
     positive_turna=2;

  }

  else
  {
   positive_turna=6;
  }
}
void testoturna()
{

     if (o>9 || o==0)
       {

      prototype_of_turnament();
      turnabox();
      cout<<"\n\a\a\a1 to 9 Position are available only ,Give Correct Position ";
      flag_turna=1;
	}

   else if (drawturna[o-1]=='X'|| drawturna[o-1]=='O')
	{ prototype_of_turnament();
	 turnabox();
	cout<<"\n\a\a\aThis Position contain already a sign";
	flag_turna=2;
	}
   else{
	flag_turna=6;
       }

 }
void rescanxturna()
 {
  if(positive_turna<=2)
		  {
		    do
			  {


			 cout<<"\n"<<team_a_name <<"'s ( X ) Turns :  ";
			 cin>>x;
			 testxturna();

		       }while(positive_turna<=2);
		 }

 }
 void rescanoturna()
{
  if(flag_turna<=2)
	       {
		    do
			  {


			 cout<<"\n"<<team_b_name<<"'s ( O ) Turns :  ";
			 cin>>o);
			 testoturna();

			 }while(flag_turna<=2);
		 }

}




void turnament ()
{      table();

      if (a=='a'|| a=='A')
	{   a=' ';
	  rules1();
	}

     if(a=='a'||a=='A')
     {   a=' ';

       clrscr();
       headingfort();
       cout<<"\n\n";
       teams();
       cout<<"\n\n\n\nEnter a name of Team A or Player A : ";
       fflush(stdin);
       gets(team_a_name);

       clrscr();
       headingfort();
       cout<<"\n\n";
       teams();


       fflush(stdin);
       cout<<"\n\n\n\nEnter a name of Team B or Player B :  ";
       gets(team_b_name);

       clrscr();
       headingfort();
       cout<<"\n\n";
       teams();

       cout<<"\n\n\n\n\n\t\t\t\tBe a Ready For Play ";
       cout<<"\n\t\t\t\t _______________";
       cout<<"\n\t\t\t\t|";hitenter();cout<<"     |";
       cout<<"\n\t\t\t\t ~~~~~~~~~~~~~~~";
       cin>>a);
     }
   if(a=='a'||a=='A')
    {  a=' ';




  for(r=0;r<5;r++)
  {
    round=round+1;
    win=0;
    match=0;
    team_a_win=0;
    team_b_win=0;





		if(team_a_points==3)
	       { clrscr();
		headingfort();
		textcolor(YELLOW+BLINK);
	       cout<<"\n\n\n\n\n  ";
	       ccout<<"!!! "<<team_a_name<<", Congratulations you are the Winner of this turnament !!! ";
		textcolor(WHITE);
		cout<<"\n "<<team_b_name<<" Don't Be sad Try again & win Turnament";
		delay(3000);
		r=6;
		break;

	       }


	      else if(team_b_points==3)
	       { clrscr();
		headingfort();
		textcolor(YELLOW+BLINK);
		cout<<"\n\n\n\n\n ";
		ccout<<"!!! "<<team_b_name<<", Congratulations you are the Winner of this turnament !!! ";
		textcolor(WHITE);
		cout<<"\n "<<team_b_name<<", Don't Be sad Try again & win next Turnament",team_a_name);
		delay(3000);
		r=6;
		break;
	       }
	if(r!=0)
     {
       points_table();
       delay(3000);
     }

	for(j=0;j<5;j++)         //   ]
	{

	   match=match+1;





	  for(t=0;t<=8;t++)  //   ]
		 {               //   ]--------> each match
	     drawturna[t]=' ';   //   ]
		}                //   ]
	       for(i=0;i<5;i++)    //for reach turns & game over
	       {

		     prototype_of_turnament();


			  turnabox();
			  cout<<"\n\n"<<team_a_name<<"s ( X ) Turns :  ";
			  cin>>x);
			  testxturna();
			  rescanxturna();


			  drawturna[x-1]='X';
			  prototype_of_turnament();
			  turnabox();
			       if (drawturna[0]=='X' && drawturna[4]=='X' && drawturna[8]=='X' || drawturna[2]=='X' && drawturna[4]=='X' && drawturna[6]=='X' || drawturna[0]=='X' && drawturna[1]=='X' && drawturna[2]=='X' || drawturna[3]=='X' && drawturna[4]=='X' && drawturna[5]=='X' || drawturna[6]=='X' && drawturna[7]=='X' && drawturna[8]=='X' || drawturna[0]=='X' && drawturna[3]=='X' && drawturna[6]=='X' || drawturna[1]=='X' && drawturna[4]=='X' && drawturna[7]=='X' || drawturna[2]=='X' && drawturna[5]=='X' && drawturna[8]=='X')
				   {

				     team_a_win= team_a_win+1;

				     break;
				   }

			       else if (drawturna[0]=='O' && drawturna[4]=='O' && drawturna[8]=='O' || drawturna[2]=='O' && drawturna[4]=='O' && drawturna[6]=='O' || drawturna[0]=='O' && drawturna[1]=='O' && drawturna[2]=='O' || drawturna[3]=='O' && drawturna[4]=='O' && drawturna[5]=='O' || drawturna[6]=='O' && drawturna[7]=='O' && drawturna[8]=='O' || drawturna[0]=='O' && drawturna[3]=='O' && drawturna[6]=='O' || drawturna[1]=='O' && drawturna[4]=='O' && drawturna[7]=='O' || drawturna[2]=='O'&& drawturna[5]=='O' && drawturna[8]=='O')
				   {

				     team_b_win= team_b_win+1;

				     break;
				 }

		      if(i<4)
		       {
			 cout<<"\n\n"<<team_b_name<<"s ( O ) Turns :  ";
			 cin>>o;
			 testoturna();
			 rescanoturna();

			drawturna[o-1]='O';
			clrscr();
			prototype_of_turnament();
			turnabox();
			   if (drawturna[0]=='X' && drawturna[4]=='X' && drawturna[8]=='X' || drawturna[2]=='X' && drawturna[4]=='X' && drawturna[6]=='X' || drawturna[0]=='X' && drawturna[1]=='X' && drawturna[2]=='X' || drawturna[3]=='X' && drawturna[4]=='X' && drawturna[5]=='X' || drawturna[6]=='X' && drawturna[7]=='X' && drawturna[8]=='X' || drawturna[0]=='X' && drawturna[3]=='X' && drawturna[6]=='X' || drawturna[1]=='X' && drawturna[4]=='X' && drawturna[7]=='X' || drawturna[2]=='X' && drawturna[5]=='X' && drawturna[8]=='X')
				   {
				     win=1;
				     team_a_win= team_a_win+1;

				     break;
				   }

			       else if (drawturna[0]=='O' && drawturna[4]=='O' && drawturna[8]=='O' || drawturna[2]=='O' && drawturna[4]=='O' && drawturna[6]=='O' || drawturna[0]=='O' && drawturna[1]=='O' && drawturna[2]=='O' || drawturna[3]=='O' && drawturna[4]=='O' && drawturna[5]=='O' || drawturna[6]=='O' && drawturna[7]=='O' && drawturna[8]=='O' || drawturna[0]=='O' && drawturna[3]=='O' && drawturna[6]=='O' || drawturna[1]=='O' && drawturna[4]=='O' && drawturna[7]=='O' || drawturna[2]=='O'&& drawturna[5]=='O' && drawturna[8]=='O')
				   {
				     win=2;
				     team_b_win= team_b_win+1;

				     break;
				 }

		       }
		  else
		       {
			cout<<"\n\n\t\t  ******************* Game over ********************";
		       }


	}

     //advance cheking for
		 if(team_a_win==3)
		 { team_a_points=team_a_points+1;
		   clrscr();
		    prototype_of_turnament();
		  textcolor(YELLOW+BLINK);
		  cout<<"\n\n\n\n\n ";
		  ccout<<"                         !!! Winner of this round : "<<team_a_name<< " !!!";
		  textcolor(WHITE);
		  delay(3000);
		  break;
		 }


	      else if(team_b_win==3)
	       { team_b_points=team_b_points+1;
		 clrscr();
		prototype_of_turnament();
		textcolor(YELLOW+BLINK);
		cout<<"\n\n\n\n\n ";
	       ccout<<"                           !!! Winner of this round : "<<team_b_name<< " !!!";
		textcolor(WHITE);
		delay(3000);
		break;
	       }
	       }

 }
 }
 }
int main()

{
clrscr();

   do{
       clrscr();
       head();
       menutype();

       switch(ch)
       {

	case 1  :     casualmatch();
		      break;
	case 2 :      turnament();
		      break;
	case 5  :     cout<<"Thank you For playing @Adi Star Coders - Tic Tac Toe";
		      break;

	default :
		      checkdone=1;


	}
    }while(checkdone==1);
getch();
	return 0;

}
