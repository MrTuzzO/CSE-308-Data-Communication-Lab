#include<bits/stdc++.h>
using namespace std;

string charStuff(string flag, string esc, string data){
    int posE = data.find(esc);
    while (posE != -1){
        data.insert(posE, esc);
        posE = data.find(esc, posE + esc.length() + 1);
    }
    int posF = data.find(flag);
    while (posF != -1){
        data.insert(posF, esc);
        posF = data.find(flag, posF + esc.length() + 1);
    }
    return data;
}
string charDeStuff(string flag, string esc, string data){
    int pos = data.find(esc);
    while (pos != -1){
        data.erase(pos, esc.length());
        pos = data.find(esc, pos + esc.length());
    }
    return data;
}
int main(){
    string flag, esc, data;
    cin>>flag>>esc>>data;

    string stuffedData = charStuff(flag, esc, data);
    cout<<"After Stuffing: "<<stuffedData;

    string deStuffedData = charDeStuff(flag, esc, stuffedData);
    cout<<"\n\nAfter De-Studffing: "<<deStuffedData;

    if(data == deStuffedData) cout<<"\nValid ans";
    else cout<<"\nNot Valid";
    return 0;
}