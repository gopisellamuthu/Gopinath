#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#define MAX_ROW 5
#define MAX_COL 80


void main(){
    char name[MAX_ROW][MAX_COL],c;
    int lines=1; ; 
    clrscr();
    cout<<"===Input Status===\n";
    cout<<"Enter string termanate by # : ";
    cin.get(c);
    {
        cin.get(c);
        chars++;
        if(c==' ' || c=='\n')
            words++;
        if(c=='\n')
            lines++;
    }

