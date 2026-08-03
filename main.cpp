#include <iostream>
#include <string>
#include <vector>
#include "void_functions.cpp"

using namespace std;
using namespace CLC_processvar;
using namespace CLC_variables;

//its funny im using std namespace aint it?
//i hate writing new repo's...


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

        case 4:
        CLCdivide_choice();
        break;

        default:
        cout<<"yeah i guess there arent more than 4 options"<<endl;

        if (CLCmenu_choice > 4) {
            cout<<"yeah you are going back"<<endl;
            return;
        }
    }
}