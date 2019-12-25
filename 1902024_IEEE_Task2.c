#include <stdio.h>
#include <stdlib.h>

int sizeFind(int n){
    int l=0;
    while(n>0){
        n=n/16;
        l++;
    }
    return l;
}

int main()
{
    int num;
    printf("Enter a number to convert to it to Hexadecimal!\n\n");
    scanf("%d", &num);
    int len = sizeFind(num);
    char arr[len];
    int index = 0;
    while(num>0){
        int a = num%16;
        char rem;
        switch(a){
        case 0:
            rem = '0';
            break;
        case 1:
            rem = '1';
            break;
        case 2:
            rem = '2';
            break;
        case 3:
            rem = '3';
            break;
        case 4:
            rem = '4';
            break;
        case 5:
            rem = '5';
            break;
        case 6:
            rem = '6';
            break;
        case 7:
            rem = '7';
            break;
        case 8:
            rem = '8';
            break;
        case 9:
            rem = '9';
            break;
        case 10:
            rem = 'A';
            break;
        case 11:
            rem = 'B';
            break;
        case 12:
            rem = 'C';
            break;
        case 13:
            rem = 'D';
            break;
        case 14:
            rem = 'E';
            break;
        case 15:
            rem = 'F';
            break;
        }
        arr[index] = rem;
        num /= 16;
        index++;
    }
    for(int i = (len-1); i>=0; i--){
        printf("%c", arr[i]);
    }
}
