#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <conio.h>


void help();//done
void reset_score();//ddone
void show_record();//done
void edit_score(int sc,string s);//done

int main(){
 char choice,yn;string username;int score;int count,countr,i,r1,r;char opt;
maindis:
 clrscr();
cout<<"Welcome to thee game human"<<endl;
cout<<" S to start the game"<<endl;
cout<<" V to view the highest score-(which I assume isn't urs) "<<endl;
cout<<" R to reset score- because that's all you can do"<<endl;
cout<<" H for help- you badly need it my frnd "<<endl;
cout<<" Q for doing what you want to do -- Quit"<<endl;

choice=toupper(getch());
if(choice=='V'){show_record();getch();goto maindis;}
else if(choice=='H'){help();
     getch();
	goto maindis;}
else if(choice =='R'){reset_score();getch();goto maindis;}
else if(choice=='Q'){exit(1);}
else if(choice=='S'){
clrscr();
cout<<"ready to start the game"<<endl;
cout<<"regisyter your name"<<endl;
gets(username);
clrscr();
cout<<"hello"<<" "<<username<<",welcome"<<endl;
cout<<" 2 rounds--score at least 2 in round1 to go to the second"<<endl;
cout<<"in round 2 each q of 1lakh"<<endl;
cout<<"earn a million"<<endl;
cout<<"press Y t start"<<"  anything else to go back to the main menu"<<endl;
yn=toupper(getch());
if(yn=='Y'){clrscr();goto round1;}
else {goto maindis;}}//choice s ends**
round1:
    clrscr();
    count=0;
    for(i=1;i<=3;i++){
clrscr();
r1=i;
switch(r1){
case 1: //question 1 of round 1
cout<<"where is IIRS?"<<endl;
cout<<"A.Delhi"<<" "<<" B.dehradun "<<"C.jaipur "<<"D.pilani"<<endl;
opt=toupper(getch());
if(opt=='B'){cout<<"correct";count++;getch();break;
}
else {cout<<"wrong";getch();break;}

case 2://question 2 of round 1
cout<<"opposite of good?"<<endl;
cout<<"A.bad"<<" "<<" B.excellent "<<"C.outstanding "<<"D.rubbish"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";count++;getch();break;
}
else {cout<<"wrong";getch();break;}

case 3://question 3 of round 1
cout<<"palindrome?"<<endl;
cout<<"A.tht"<<" "<<" B.deh "<<"C.jaipur "<<"D.pi"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";count++;getch();break;
}
else {cout<<"wrong";getch();break;}

case 4://question 4 of round 1
cout<<"what rocks?"<<endl;
cout<<"A.rock"<<" "<<" B.IIRS "<<"C.BITS "<<"D.me"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";count++;getch();break;
}
else {cout<<"wrong";getch();break;}

case 5://question 5 of round 1
cout<<"how many domestic campuses does bits have?"<<endl;
cout<<"A.2"<<" "<<" B.none of my business "<<"C.4 "<<"D.3"<<endl;
opt=toupper(getch());
if(opt=='D'){cout<<"correct";count++;getch();break;
}
else {cout<<"wrong";getch();break;}

case 6://question 6 of round 1
cout<<"just choose A ?"<<endl;
cout<<"A.correct"<<" "<<" B.no "<<"C.incorrect "<<"D.nope"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";count++;getch();break;
}
else {cout<<"wrong";getch();break;}}
}

if(count>=2){clrscr();cout<<"you passed the first round"<<endl;getch();goto round2;}
else{clrscr();cout<<"round 1 failed";getch();goto maindis;}

round2:
countr=0;
for(i=1;i<=10;i++){
clrscr();
r=i;

switch(r){
case 1:
cout<<"how many domestic campuses does bits have?"<<endl;
cout<<"A.2"<<" "<<" B.none of my business "<<"C.4 "<<"D.3"<<endl;
opt=toupper(getch());
if(opt=='D'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}

case 2:
cout<<"which is even?"<<endl;
cout<<"A.2"<<" "<<" B.5 "<<"C.7 "<<"D.3"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}

case 3:
cout<<"how many eyes do you have?"<<endl;
cout<<"A.2"<<" "<<" B.none of ur business "<<"C.4 "<<"D.3"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}

case 4:
cout<<"leaves gorw on?"<<endl;
cout<<"A.my head"<<" "<<" B.none of my business "<<"C.inside my brain "<<"D.trees"<<endl;
opt=toupper(getch());
if(opt=='D'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}


case 5:
cout<<"pm of india?"<<endl;
cout<<"A.MOdi"<<" "<<" B.none of my business "<<"C.rg "<<"D.me"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}


case 6:
cout<<"you sayin truth?"<<endl;
cout<<"A.yes"<<" "<<" B.none of ur business "<<"C.no "<<"D.lol"<<endl;
opt=toupper(getch());
if(opt=='A'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}


case 7:
cout<<"how many domestic campuses does bits have, again?"<<endl;
cout<<"A.2"<<" "<<" B.none of my business "<<"C.4 "<<"D.3"<<endl;
opt=toupper(getch());
if(opt=='D'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}


case 8:
cout<<"jlf in?"<<endl;
cout<<"A.jan"<<" "<<" B.dont know "<<"C.feb "<<"D.mar"<<endl;
opt=toupper(getch());
if(opt=='D'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}


case 9:
cout<<"how many domestic campuses does bits have,agaain?"<<endl;
cout<<"A.2"<<" "<<" B.none of my business "<<"C.4 "<<"D.3"<<endl;
opt=toupper(getch());
if(opt=='D'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}


case 10:
cout<<"how many fingers do you have?"<<endl;
cout<<"A.20"<<" "<<" B.16 "<<"C.8 "<<"D.10"<<endl;
opt=toupper(getch());
if(opt=='B'){cout<<"correct";countr++;getch();break;
}
else {cout<<"wrong";getch();goto score;break;}



}

}
score:
    clrscr();
	score=(int)countr*100000;
	if(score>0 && score<1000000)
	{
	   cout<<"\n\n\t\t******* CONGRATULATION ******"<<endl;
	    cout<<"you won"<<score<<" dollars";goto go;}

	 else if(score==1000000)
	{
	    cout<<"\n\n\n \t\t********* CONGRATULATION ********"<<endl;
	    cout<<"\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!";goto go;
	}
	 else
{
	 cout<<"\n\n\t**** SORRY YOU DIDN'T WIN ANY CASH ****";
	    
	   cout<<"\n\t\t TRY AGAIN";goto go;}

go:
cout<<"press y if you want to play again"<<endl;
if(toupper(getch())=='Y'){goto round1;}
else {edit_score(score,username);goto maindis;}


}



void help(){
clrscr();
cout<<" You dont deserve help moron!!"<<endl;
return ;}

void show_record(){
clrscr();
string s;
int score;
string filename="score.txt";
ifstream myfile;
myfile.open(filename);
if(!myfile){cout<<" error in opening the file"<<endl;exit(1);}
myfile>>s;myfile>>score;
cout<<s<<" has scored the highest score of"<<score<<endl;
myfile.close();
return;}



void reset_score(){
clrscr();
ifstream myfile;
string filename="score.txt";
string name;int score;
myfile.open(filename);
if(!myfile){cout<<" error in opening the file"<<endl;exit(1);}
myfile>>name;myfile>>score;
myfile.close();
ofstream yfile;

yfile.open(filename,out|trunc);
if(!yfile){cout<<" error in opening the file"<<endl;exit(1);}
yfile<<name<<" "<<0;
yfile.close();
return;

}

void edit_score(int sc,string new){
clrscr();
ifstream myfile;
string filename="output.txt";
myfile.open(filename);
string old;int score;
if(!yfile){cout<<" error in opening the file"<<endl;exit(1);}
myfile>>old;myfile>>score;
myfile.close();
if(sc>=score){
ofstream yfile;
yfile.open(filename.out|trunc);
yfile<<new<<" "<<sc;
yfile.close();
}
return;
}



