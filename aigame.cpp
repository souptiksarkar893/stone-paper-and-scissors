#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
    string playername;
    cout<<"enter your name=";
    cin>>playername;
    system("cls");
    int rounds;
    cout<<playername<<",how many rounds do you want to play? =";
    cin>>rounds;
    int playerscore=0;
    int computerscore=0;
    for(int round=1;round<=rounds;round++){
        system("cls");
        cout<<"round no.="<<round<<"/"<<rounds<<endl;
        cout<<playername<<"'s"<<" score is="<<playerscore<<endl;
        cout<<"computer's score is="<<computerscore<<endl;
        cout<<"1.rock"<<endl; 
        cout<<"2.paper"<<endl;
        cout<<"3.scissor"<<endl;
        int playerchoice;
        cout<<"enter a number from the following above=";
        cin>>playerchoice;
        while(playerchoice!=1&&playerchoice!=2&&playerchoice!=3){
            cout<<"sorry!,wrong input...please enter a number from the following above again=";
            cin>>playerchoice;
        }
        //do{
        //cout<<"enter a number from the following above=";
        //cin>>playerchoice;
        //}
        //while(playerchoice!=1&&playerchoice!=2&&playerchoice!=3);
        srand(time(0));
        int computerchoice;
        computerchoice=(rand()%3)+1;
        if(playerchoice==1&&computerchoice==3){
            cout<<"player win"<<endl;
            playerscore++;
        }
        else if(playerchoice==2&&computerchoice==1){
            cout<<"player win"<<endl;
            playerscore++;
        }
        else if(playerchoice==3&&computerchoice==2){
            cout<<"player win"<<endl;
            playerscore++;
        }
        else if(playerchoice==computerchoice){
            cout<<"it's a draw"<<endl;
        }
        else{
            cout<<"computer win"<<endl;
            computerscore++;
        }
        cout<<"press any key to continue ....."<<endl;
        getch();
    }
    system("cls");
    if(playerscore>computerscore){
        cout<<playername<<",win this game"<<endl;
    }
    else if(playerscore==computerscore){
        cout<<"this is a draw"<<endl;
    }
    else{
        cout<<"computer win this game"<<endl;
    }
    return 0;
}