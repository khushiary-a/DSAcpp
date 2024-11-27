#include<iostream>
#include<fstream>
using namespace std;
int main(){ 
    ofstream file("myfile.txt");
    if(file.is_open()){
        file<<"hello khushi";
        file.close();
    }else{
        file.close();
    }
    ifstream file1("myfile");
//     string line;
//    getline(file1 ,line);
//     cout<<line;
 string line;
        getline(file1, line);
        cout << line << endl; // Print the line read from the file
        file1.close();

 return 0;
}