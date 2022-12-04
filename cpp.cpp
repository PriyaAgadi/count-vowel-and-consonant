#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    char str[100];
    int i,vowCount=0,consCount=0;
    cout<<"Enter a string for count vowel and consonant\n";
    gets(str);
    i=0;
    while(str[i]){
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
    ||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' ){
        vowCount++;
    }
    else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )){
        consCount++;
    }
     i++;
}
cout<<"The number of vowels:"<<vowCount<<endl;
cout<<"The number of consonant:"<<consCount<<endl;
getch();
    return 0;
}
