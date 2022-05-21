#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a=32;
   int b=12;
   int c;

    c=a&b;
   cout<<c<<endl;

    c=a|b;
   cout<<c<<endl;

    c=a^b;
   cout<<c<<endl;
   //This called right shift and left shift Bitwise

   c=a>>3;
   cout<<c<<endl;

   c=a<<3;
   cout<<c<<endl;


    getch();
}
