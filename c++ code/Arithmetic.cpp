#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    float num1, num2;

    cout<< "Enter 2 number : ";
    cin>> num1 >> num2;

    cout<< showpoint;
    cout<<fixed;
    cout<<setprecision(69);

    float sum = num1 + num2;
    cout <<setw(2) <<" sum is : "<< sum;
    cout<<endl;


    float sub = num1 - num2;
    cout <<setw(2) <<" substraction is : "<< sub;
    cout<<endl;


    float mul = num1 * num2;
    cout <<setw(2) <<" multiplication is : "<< mul;
    cout<<endl;


    double div = (float)num1 / num2;
    cout <<setw(2) <<" division is : "<< div;
    cout<<endl;


    //float rem = num1 % num2;
    //cout<<" reminder num is : "<< rem;
    //cout<<endl;




    getch();
}
