#include<iostream>
  #include<map>
  using namespace std ;
int main(){


    map<int , char> mymap = {{1, 'A'}, {2,'B'} , {3,'C'},{4,'D'}};// inserting value in map 
    mymap[5] = 'E';// putting value in map 
    mymap.insert(make_pair(6,'F'));//using insert along side makepair 
    for(auto obj : mymap){
        cout<<obj.first<<"  is key , "<<obj.second<<" is value"<<endl;
    }

    return 0;
}