#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<ctype.h>
#include<fstream.h>
#include<stdlib.h>

void basics();
void letters();
void sentence();
void main()
{
clrscr();
int opt;
menu:
clrscr();
cout<<"\n\n\t\t\t====typing tutor====";
cout<<"\n\n\n\t\t::main menu::";
cout<<"\n\n\t\t1.learn_basics";
cout<<"\n\n\t\t2.type the letters";
cout<<"\n\n\t\t3.type the sentence";
cout<<"\n\n\t\t0.exit";
cout<<"\n\n\n\t\t enter your choice:";
cin>>opt;
switch(opt)
{
case 1:basics();
       goto menu;


case 2:letters();
       goto menu;


case 3:sentence();
       goto menu;


case 0:exit(0);

default:goto menu;
}
}
void basics()
{
clrscr();
int rep;
char choice1,choice2;
char key;
char mid[]="asdfglkjhj";
char top[]="qwertpoiyu";
char bot[]="zxcvbv/.,mnm";
cout<<"\n\nhello!i think you are new dude to the word of fast typing.";
delay(1000);
cout<<"\n\nand as i have now agreed to teach you how to be fast in typing...";
delay(1000);
cout<<"\n\nlet us start.are u ready??(y/n)\n";
cin>>choice1;
if(choice1=='y'||choice1=='Y')
{
 clrscr();
 cout<<"\n\n\tready to do this";
 delay(1000);
 cout<<"\n\n\tpress any key to start\n";
 getch();
 cout<<"\n\n\tbasics";
 delay(1000);
 cout<<"\n\n\tlets learn mid row\n";
 delay(1000);
 cout<<"\n\n\thow many times do you want to practice\n";
 cin>>rep;
 cout<<"\n\n\tdo you want to see finger psitioning\t (y/n)\n";
 cin>>choice2;
 if(choice2=='y'||choice2=='Y')
 {
 cout<<"\n\nunder developement\n";
 getch();
 }
 cout<<"\n\ntype what you see on the screen....\n";
 for(int i=0;i<rep;++i)
 {
 for(int j=0;j<10;++j)
 {
 cout<<"\n\n enter this:"<<mid[j];
 cout<<"\tyou entered";
 key=getch();
 if(key==mid[j])
 {
 cout<<"\tcorrect...";
 sound(300);
 delay(200);
 nosound();

 }
 else
 {
 cout<<"\t wrong";
 sound(600);
 delay(100);
 nosound();
 sound(700);
 delay(100);
 nosound();
 }
 }
 }
 cout<<"\n\n now you have to learn the top row";
 cout<<"\n\nhow many times you want to practice:";
 cin>>rep;
 cout<<"\n\ndo you want to see finger positioning?(y/n)";
 cin>>choice2;
 if(choice2=='y'||choice2=='Y')
 {
 cout<<"\n\nunder developement";
 getch();
 }
 cout<<"\n\ntype what you see";
 for(i=0;i<rep;++i)
 {
 for(int j=0;j<10;++j)
 {
 cout<<"\n\nenter this:"<<top[j];
 cout<<"\tyou entered:";
 key=getch();
 if(key==top[j])
 {
 cout<<"\t correct...";
 sound(300);
 delay(200);
 nosound();
 }
 else
 {
 cout<<"\t wrong";
 sound(600);
 delay(100);
 nosound();
 sound(700);
 delay(100);
 nosound();
 }
 }
 }
 cout<<"\n\n first you have to learn bottom row";
 cout<<"\n\n how many times you want to practice:";
 cin>>rep;
 cout<<"\n\n do you want to see finger positionng? (y/n)";
 cin>>choice2;
 if(choice2=='y'||choice2=='Y')
 {
 cout<<"\n\n under develpoment...";
 getch();
 }
 cout<<"\n\n type what you see....";
 for(i=0;i<rep;++i)
 {
 for(int j=0;j<12;++j)
 {
 cout<<"\n\n enter this:"<<bot[j];
 cout<<"\t you entered:";
 key=getch();
 if(key==bot[j])
 {
 cout<<"\t correct...";
 sound(300);
 delay(200);
 nosound();
 }
 else
 {
 cout<<"\t wrong:";
 sound(600);
 delay(100);
 nosound();
 sound(700);
 delay(100);
 nosound();
 }
 }
 }
  }
 else
 {
 cout<<"\n\nlets learn latter";
 delay(3000);
 }
 }
 void letters()
{
  randomize();
  char choice;
  int num;
  int score=0;
  int randnum;
  char letter,key;
  clrscr();
  cout<<"in this test you have to type the letters you see...";
  delay(1000);
  cout<<"\n\ndo you want the help menu?(y/n)";
  choice=getch();
  if(choice=='y'||choice=='Y')
  {
  cout<<"\n\n you are about to type the random letters you see on the screen...";
  delay(2000);
  cout<<"\n\n if your answer is correct you will hear this beep..";
  while(!kbhit())
  {
  sound(300);
  delay(200);
  nosound();
  }
  getch();
  cout<<"\n\n if your answer is wrong you wil hear this...";
  while(!kbhit())
  {
  sound(600);
  delay(100);
  nosound();
  sound(700);
  delay(100);
  nosound();
  }
  }
  cout<<"\n\npress any key when you are ready...";
  getch();
  int number;
  cout<<"\n\n what should be the max score?...";
  cin>>number;
  for(int i=0;i<number;i++)
  {
  clrscr();
  randnum=random(25);
  for(int j=0;j<randnum;j++)
  cout<<"\n";
  randnum=random(25);
  for(j=0;j<randnum;j++)
  cout<<"\t";
  num=65+random(25);
  letter=(char)num;
  cout<<letter;
  key= getch();
  //cin>>key;
  if(key==letter)
  {
 score= score++;
  sound(300);
  delay(200);
  nosound();
      }

  else
  {
  sound(600);
  delay(100);
  nosound();
  sound(700);
  delay(100);
  nosound();
  }
  }
  cout<<"\n\n\n your total score is"<<score;

  getch();
  }


  void sentence()
  {
  clrscr();
  time_t t1,t2;
  char line[300];
  cout<<"\n this is speed test..";
  delay(1000);
  type:
  cout<<"\n you have to type the sentence given\n";
  delay(1000);
  cout<<"\n\n press any key to start";
  getch();
  clrscr();
  t1=time(NULL);
  cout<<" i am learning to type.";
  cout<<"\n\n enter the sentence\n";
  gets(line);
  t2=time(NULL);
  if(!strcmp(line," i am learning to type."))
  {
  cout<<"\n\n you could type the sentence in"<<t2-t1<<"seconds";
  getch();
  }
  else
  {
  cout<<"\n\n the sentence you typed was wrong";
  getch();
  goto type;
  }
  }
