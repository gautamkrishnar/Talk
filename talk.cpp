#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;
void dis(int x){for(int i=0;i<=x;i++)cout<<"*";}
int main(int k,char **a)
{
    fstream gout;
    char v[100];
    strcpy(v,(*(&*a)+5));
    if((v[0])=='\"')
    {
    system("Title Talk");
    system("echo off");
    system("cls");
    gout.open("gen.vbs",ios::out);
    system("attrib gen.vbs +h")
    gout<<"Dim speaks, speech"<<endl<<"speaks=";
    gout<<*(&*a)+5<<"\"";
    gout<<endl<<"Set speech=CreateObject(\"sapi.spvoice\")"<<endl<<"speech.Speak speaks";
    gout.close();
    system("wscript gen.vbs");
    system("del gen.vbs /f /q");
    }
    else
    {
    system("Title SAPI");
    system("echo off");
    system("cls");
    dis(78);
    cout << "\n\t\t\t Talk BY Gautam krishna.R" << endl;
    dis(78);
    cout<<" Incorrect parameter. The correct parameter is: talk \"string\""<<endl
    <<"\t\t\tstring - string to talk"<<endl;
    }
}
