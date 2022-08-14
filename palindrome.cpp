#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int number, temp, result, sum=0;
cout << "Please enter any positive integer for checking palindrome or not? : ";
cin>>number;
temp = number;
while(temp!=0){

    result=temp%10;
    sum=sum*10+result;
    temp=temp/10;
}
if (number==sum)
    cout<<"Number is palindrome";
else
    cout<<"Number is not palindrome";

getch();
}
