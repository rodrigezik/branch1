#include <iostream>

using namespace std;

void CLCmenu_interact() {

    cout<<R"( WELCOME TO CALCULATOR!
    [1] PLUS        [2] MINUS 
    [3] MULTIPLY    [4] DIVIDE
    )"<<endl;
   
}

//very, very silly welcome void function :skull:
void CLCsilly_welcome() {
    cout<<"welcome, give me a number."<<endl;
}


//okay there are functions 
//last time i used c++ was so long ago
//i guess under it you have a very cool
//function that allows to add numbers to each
//other! very fun and family friendly!

//okay so i needed to rewrite the whole thing...
//kinda fun i guess!

void CLCadd_choice() {
    CLCsilly_welcome();
    cin>>CLC_int1;

    cout<<"give me the second number"<<endl;
    cin>>CLC_int2;

    if (CLC_int2 == 0) {
        cout<<"uhh cool i guess give me a third number"<<endl;
        cin>>CLC_int3;

        cout<<"thats the spirit! that equals:"<<endl;
        cout<<CLC_int1 + CLC_int3<<endl;
    }

    cout<<"give me a third number (if no just write a 0)"<<endl;
    cin>>CLC_int3;

    if (CLC_int3 == 0) {

        cout<<"that equals:"<<endl;
        cout<<CLC_int1 + CLC_int2<<endl;

    } else if (CLC_int2 == 0 || CLC_int3 == 0) {

        cout<<"dude."<<endl;
        cout<<CLC_int1<<endl;

    } else {

        cout<<"that equals:"<<endl;
        cout<<CLC_int1 + CLC_int2 + CLC_int3<<endl;
    }
}

//so much else/if's aint it?
//i dont care about it...

void CLCminus_choice() {
    
    CLCsilly_welcome();
    cin>>CLC_int1;

    cout<<"give me a second number"<<endl;
    cin>>CLC_int2;

    cout<<"give me a third one (write 0 if ya wanna skip)"<<endl;
    cin>>CLC_int3;
    
    if (CLC_int3 == 0) {
        cout<<"that equals:"<<endl;
        cout<<CLC_int1 - CLC_int2<<endl;
    } else {
        //dramatic entrance
        cout<<"so you picked the third number..."<<endl;
        cout<<"that must be equal to:"<<endl;
        cout<<CLC_int1 - CLC_int2 - CLC_int3<<endl;
    }
}

//the function for multiplying! very fun
//i feel like a [[bigshot]]

void CLCmultiply_choice() {
    
    CLCsilly_welcome();
    cin>>CLC_int1;
 
    cout<<"give me the second number that you wanna multiply"<<endl;
    cin>>CLC_int2;

    cout<<"now give the third number (write 0 if you dont want third number)"<<endl;
    cin>>CLC_int3;

    if (CLC_int3 == 0) {
        cout<<"okay so without third number..."<<endl;
        cout<<"i guess that equals:"<<endl;
        cout<<CLC_int1 * CLC_int2<<endl;

    } else {
        //another dramatic entrance 
        cout<<"so you picked the third number..."<<endl;
        cout<<"that equals:"<<endl;
        cout<<CLC_int1 * CLC_int2 * CLC_int3<<endl;
    }

    
}

void CLCdivide_choice() {
    CLCsilly_welcome();
    cin>>CLC_int1;

    cout<<"give me the second number to divide"<<endl;
    cin>>CLC_int2;

    
    if (CLC_int1 or CLC_int2 == 0) {
        //even i dont believe i added this here
        //but some people can really do this...

        cout<<"you cant divide by 0..."<<endl;
    } else {
        cout<<CLC_int1 / CLC_int2<<endl;
    }
}