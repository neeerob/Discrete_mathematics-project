//
//  main.cpp
//  floor_and_ceiling
//
//  Created by Nirob Ahmed on 11/6/20.
//  Copyright © 2020 Nirob Ahmed. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    float number;
    int intNumber;
    cout<<"Enter your number : "<<endl;
    cin>>number;
    intNumber = number;
    if( number - intNumber == 0)
    {
        cout<<"You entered a Integer number!"<<endl;
        return 0;
    }
    if( number - intNumber != 00)
    {
        cout<<"You entered a float number! "<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Your floor number is "<<intNumber<<endl;
        cout<<endl;
        cout<<"your ceiling number is "<<intNumber + 1<<endl;
        cout<<endl;
        if(number - intNumber <= 0.50)
        {
            cout<<"Your round figure based on your number is : "<<intNumber<<endl;
            return 0;
        }
        else
        {
            cout<<"Your round figure based on your number is : "<<intNumber+1<<endl;
            return 0;
        }
    }
    else
    {
        cout<<"You entered a wrong keyword!"<<endl;
    }
    
}
