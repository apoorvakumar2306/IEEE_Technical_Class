#include<iostream.h>

int main()
{
    double num, den, results;
    char op;
    do{
        cout<<"\nCalculator-Enter number: ";
        cin>>num;
        cout<<"Enter operator +,-,*,/:";
        cin>> op;
        cout<< "Enter second number:";

        cin >> den;
        if (op=='+') result=num+den;
        if (op=='-') result=num-den;
        if (op=='*') result=num*den;
        if (op=='/') result=num/den;
        cout<<result;
    }
    while  (op!='e');
    return 0;
 }



