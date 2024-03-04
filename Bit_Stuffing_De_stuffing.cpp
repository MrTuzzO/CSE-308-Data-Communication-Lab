#include<bits/stdc++.h>
using namespace std;

vector<int> bitStuff(vector<int> v){
    int c = 0;
    vector<int> v2;
    for(int x: v){
        v2.push_back(x);
        if(x == 1) c++;
        if(x == 0 and c < 5) c = 0;
        if(c == 5){
            v2.push_back(0);
            c = 0;
        }
    }
    return v2;
}

vector<int> deStuff(vector<int> v){
    int c = 0;
    vector<int> v2;
    for(int x: v){
        if(c == 5){
            c = 0;
            continue;
        }else{
            v2.push_back(x);
        }
        if(x == 1) c++;
        if(x == 0 and c < 5) c = 0;
    }
    return v2;
}

int main(){
    vector<int> v;
    while(true){
        int x;
        cin>>x;
        if(x == -1) break;
        v.push_back(x);
    }
    //stuff
    vector<int> v2 = bitStuff(v);
    cout<<"Bit Stuffed: ";
    for(int x: v2) cout<<x<<" ";
    //destuff
    vector<int> v3 = deStuff(v2);
    cout<<"\n\nBit De-Stuffed: ";
    for(int x: v3) cout<<x<<" ";

    if(v == v3) cout<<"\nValid ans";
    else cout<<"\nNot Valid";
    return 0;
}