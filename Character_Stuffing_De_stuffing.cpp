#include<bits/stdc++.h>
using namespace std;

string charStuff(string flag, string data){
    int pos = data.find(flag);
    while (pos != -1) {
        data.insert(pos, flag);
        pos = data.find(flag, pos + flag.length() + 1);
    }
    return data;
}
string charDeStuff(string flag, string data){
    int pos = data.find(flag);
    while (pos != -1){
        data.erase(pos, flag.length());
        pos = data.find(flag, pos + flag.length());
    }
    return data;
}
int main(){
    string flag, data;
    cin>>flag>>data;

    string stuffedData = charStuff(flag, data);
    cout<<"After Stuffing: "<<stuffedData;

    string deStuffedData = charDeStuff(flag, stuffedData);
    cout<<"\n\nAfter De-Studffing: "<<deStuffedData;

    if(data == deStuffedData) cout<<"\nValid ans";
    else cout<<"\nNot Valid";
    return 0;
}