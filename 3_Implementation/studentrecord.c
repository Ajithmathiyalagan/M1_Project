#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char ID[15];
    char name[20];
    char add[20];
    char parname[20];
    int Class;
    long unsigned int phone_no;
};

struct student stu;

///This will set the forground color for printing in a console window.

int main(){
    ClearConsoleToColors(17,15);
    SetConsoleTitle("Programming-technique.blogspot.com - Student Record System");
    window();
    //use_pass_field();
    main_window();
    return 0;
}

