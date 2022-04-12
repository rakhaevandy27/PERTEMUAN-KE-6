
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //initial//
    system("color 0A");
    int a, b;
    system("cls");
    
    
    //process//
    a = 8 + 2 * 3 / 6;
    b = (8 + 2) * 3 / 6;
    
    //output//
    cout<<"a = 8 + 2 * 3 / 6"<<endl;
    cout<<"b = (8 + 2) * 3 / 6"<<endl;
    
    cout<<endl;

    cout<<"hasil dari A = "<<a<<endl;
    printf("hasil dari B = %i \n",b);

    getch();
}

