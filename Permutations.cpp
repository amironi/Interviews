//
//  Permutations.cpp
//  Client
//
//  Created by Amir Mironi on 10/23/17.
//  Copyright © 2017 Amir Mironi. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void PermutationsNormal(string str, string x = "") /// N!
{
    if( str.size() == 0 ){
        cout << x << endl;
        return;
    }
    for(int i = 0; i < str.size(); i++ )
        PermutationsNormal(str.substr(0,i) + str.substr(i+1), x + str[i]);
}

void PermutationsAll(string str, string x = "")// N^N
{
    if( str.size() == x.size() ){
        cout << x << endl;
        return;
    }
    
    for(int i = 0; i < str.size(); i++ )
        PermutationsAll(str, x + str[i]);
}

void PermutationsAbove(string str, string x = "")
{
    cout << x << endl;
    
    if( str.size() == 0 ) return;
    
    for(int i = 0; i < str.size(); i++ )
        PermutationsAbove(str.substr(i+1), x + str[i]);
}


void printBits(string str, int bits){
    for(int i = 0 ; i < str.size() ; i++ )
        if (bits & ( 1 << i  ))  cout << str[i];
    cout << endl;
    
}

void PermutationsAbove2(string str){
    for(int i = 1 ; i < ( 1 << str.size()) ; i++ )
        printBits(str, i);
}

int main (int argc, char **argv)
{
    PermutationsNormal("abc");
    PermutationsAll("abc");
    PermutationsAbove("abc");
    PermutationsAbove2("abc");
}
