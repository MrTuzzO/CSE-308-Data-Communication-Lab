#include<bits/stdc++.h>
using namespace std;

void conToDec(string byte){
    int decimal = 0;
    int pow = 1;
    for(int i = byte.length()-1; i>= 0; --i){
        if(byte[i] == '1') decimal +=  pow;
        pow *= 2;
    }
    cout<<decimal;
}
void conToBin(string byte){
    int decimal = stoi(byte);
    string binary = "";
    for(int i = 7; i >= 0; --i){
        int bit = (decimal >> i) & 1;
        binary += to_string(bit);
    }
    cout<<binary;
}

void binary(string IP){
    stringstream ss(IP);
    string byte;
    bool firstWord = true;
    while (getline(ss, byte, '.')){
        if (!firstWord) cout << ".";
        conToDec(byte);
        firstWord = false;
    }
}

void decimal(string IP){
    stringstream ss(IP);
    string byte;
    bool firstWord = true;
    while (getline(ss, byte, '.')){
        if (!firstWord) cout << ".";
        conToBin(byte);
        firstWord = false;
    }
}

int main(){
    string IP;
    cin>>IP;
    bool isDecmal = false;
    for(char bit: IP) if(bit != '0' and bit != '1' and bit != '.') isDecmal = true;
    (isDecmal)?decimal(IP): binary(IP);
    return 0;
}