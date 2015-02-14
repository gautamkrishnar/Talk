#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void dis(int x){for(int i=0;i<=x;i++)cout<<"*";}
int main()
{
    system("Title SAPI");
    system("echo off");
    system("cls");
    dis(78);
    cout << "\n\t\t\t SAPI BY Gautam krishna.R" << endl;
    dis(78);
    char ch[2048];
    fstream gout;
    cout<<"\n Etnter the string you want me to say: \n ";
    gout.open("gen.vbs",ios::out);
    gout<<"Dim speaks, speech"<<endl<<"speaks=\"";
    gets(ch);
    gout<<ch<<"\"";
    gout<<endl<<"Set speech=CreateObject(\"sapi.spvoice\")"<<endl<<"speech.Speak speaks";
    gout.close();
    cout<<endl<<endl<<"       TALKING...";
    system("wscript gen.vbs");
    system("del gen.vbs /f /q");
}
