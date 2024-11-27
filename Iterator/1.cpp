// Media Data Representation:
// The vehicle supports three types of media sources:
// FM Radio Stations
// USB Music Files
// Bluetooth Audio Tracks
// Each media type has its own set of items (e.g., radio stations, songs), and the user can navigate through these items sequentially.

#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    vector<string> Fmradio = {"fm1" , "fm2" , "fm3" , "fm5" , "fm4"};
    vector<string> USBfile = {"u1","u2" , "u3","u4","u5","u6"};
    vector<string> Audio = {"A1 ", "A2","A3","A4","A5","A6","A7"};

    vector<string>::iterator it;
    cout<<"Fmredio: ";
    for(it = Fmradio.begin() ; it != Fmradio.end() ;  it++ ){
        cout<<*it<<"  ";
    }
    cout<<endl;
    return 0;
}