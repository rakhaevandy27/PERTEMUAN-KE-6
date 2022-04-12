#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

main()
{
    float hasil=1, angka=5;
    system("color 0a");
    system("cls");
    
    printf("Contoh Program  Perhitungan Belajar CPP \n\n");
    printf("=======================================\n\n");
    
    ulang:

    cout<<"masukan angka : ";cin>>angka;
    
    hasil *= angka;
    
    cout<<"hasil saat ini : "<<hasil<<endl;

    goto ulang;
}

