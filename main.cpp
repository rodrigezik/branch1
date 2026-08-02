#include <iostream>
#include <string>
#include <vector>
#include "void_functions.cpp"

using namespace std;

//its funny im using std namespace aint it?
//i hate writing new repo's...
int CLCmenu_choice;
int add_numberCLC1;
int add_numberCLC2;
string CLC_thirdchoice;

int CLC_int1;
int CLC_int2;
int CLC_int3;

//yeah thats a whole main right here 
//kinda cool i guess?

int main(){

    CLCmenu_interact();
    cin>>CLCmenu_choice;

    switch (CLCmenu_choice) {

        case 1:
        CLCadd_choice();
        break;

        case 2:
        CLCminus_choice();
        break;

        case 3:
        CLCmultiply_choice();
        break;
    }
}