#include <iostream>
using namespace std;
int main()
{
    cout << "The option : ";
    cout << "option . 1 , option . 2";
    cout << "Enter option: ";
    int a;
    cin >> a;
    float kmphans;
    float mphans;
 float k; 
    switch (a)
    {
    case 1:
         
        cout << "Enter a value to convert in KMPH: ";
        cin >> k;
        if (k <= 0)
    {
        cout<<"ZERO";
    }   
    else if(k<= 300)
    {
        cout<< k * 1.60934<<" in KMPH";
    }else{
        cout<<"It reached the maximum 300 KMPA";
    }
        break;

    case 2:
         
        cout << "Enter a value to convert in MPH: ";
        cin >> k;
         if (k <=0 )
    {
        cout<<"ZERO";
    }
    else if(k<=186)
    {
        cout<<k * 0.621371<<" in MPH";
    } else{
        cout<<"It reached the maximum 186 MPA";
    }
    
        break;

    default:
    cout<<"NOT VALID";
        break;
    }

    return 0;
}