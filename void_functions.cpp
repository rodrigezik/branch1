#include <iostream>

using namespace std;

void CLCmenu_interact() {

    cout<<R"( WELCOME TO CALCULATOR!
    [1] PLUS [2] MINUS 
    [3] MULTIPLY [3] DIVIDE
    )"<<endl;
   
}


//okay there are functions 
//last time i used c++ was so long ago

void CLCadd_choice() {
    cout<<"welcome give me a first number to add!"<<endl;
    cin>>CLC_int1;

    if (CLC_int1 == true) {
        cout<<"nice now gimme the second number!"<<endl;
        cin>>CLC_int2;
    }

    while (CLC_int2 == true) {
        cout<<"do you want to add a third number? (y/n)"<<endl;
        cin>>CLC_thirdchoice; 

        if (CLC_thirdchoice == "y") {
            cout<<"okay now gimme the third number!"<<endl;
            cin>>CLC_int3;

            cout<<"your calculated number is:"<<endl;
            cout<<CLC_int1 + CLC_int2 + CLC_int3<<endl;



        } else if (CLC_thirdchoice == "n") {
            cout<<"okay i understand..."<<endl;
            cout<<"your calculated numbers equals:"<<endl;
            cout<<CLC_int1 + CLC_int2<<endl;
        
        } else {
            cout<<"just type n or y..."<<endl;
        }

        
    }
}

//so much else/if's aint it?
//i dont care about it...

void CLCminus_choice() {
    cout<<"welcome, give me a number"<<endl;
    cin>>CLC_int1;

    if (CLC_int1 == true) {
        cout<<"now give the number you want to minus"<<endl;
        cin>>CLC_int2;

        if (CLC_int2 == 0) {
            cout<<"just give the random number..."<<endl;
            cin>>CLC_int2;
        }
    } 
    cout<<"now give the third number (just write 0 if you dont want to PROCEED)"<<endl;
    cin>>CLC_int3;

    if (CLC_int3 == 0) {
        cout<<"you gave 2 numbers that equals..."<<endl;
        cout<<CLC_int1 - CLC_int2<<endl;


    } else {

        cout<<"woah you decided to give this third number..."<<endl;
        cout<<"i guess that equals:"<<endl;
        cout<<CLC_int1 - CLC_int2 - CLC_int3<<endl;
    }
}