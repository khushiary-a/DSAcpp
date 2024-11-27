#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
// Navigation Routes
// Use case: The car’s navigation system may show a list of possible routes between the starting point and the destination.
// Example: If a user selects a destination, the navigation system may calculate multiple possible 
// routes and display them as a list, allowing the driver to choose the one that suits their preferences.
// Implementation: A list can be used to store route objects with parameters such as distance, 
// estimated travel time, and traffic conditions. --- give me approach for this que 

class Route{
    private:
    double distance;
    double time_taken;
    string trafic_condition;
    public:
    Route(double dis , double time , string condition){
        distance = dis;
        time_taken = time;
        trafic_condition = condition;
    }
    double getdistance(){
          return distance; 
    }
    double gettime(){
          return time_taken; 
    }
    string get_trafic_condition(){
        return trafic_condition;
    }
    void display(){
        cout<<"distance is: "<<distance<<endl;
        cout<<"time_taken is: "<<time_taken<<endl;
        cout<<"trafic condition is: "<<trafic_condition<<endl;
        cout<<"-----------------------------------------------"<<endl;
    }
};

class Navigation{
    private:
    list<Route> routes;
    public:
    void addroute(Route rut){
        routes.push_back(rut);
    }

    void display(){
     for(auto i : routes){
        i.display();
     }
    }

    // void sortbydistance(){
    //   routes.sort([](const Route a, const Route b) {
    //         return a.getdistance() < b.getdistance();
    //     });
    // }
    // // void sortbytime(){
    // //   sort(routes.begin(), routes.end(), [](Route a , Route b){
    // //     return a.gettime()<b.gettime();
    // //   });
    // // }
    void sortbydistance() {
        // Pass the elements by reference in the lambda function
        routes.sort([]( Route& a,  Route& b) {
            return a.getdistance() < b.getdistance(); // Compare by distance
        });
    }

    // Uncomment and modify if needed to sort by time
    void sortbytime() {
        routes.sort([]( Route& a,   Route& b) {
            return a.gettime() < b.gettime(); // Compare by time
        });
    }

};
int main(){
    Route obj1(30.0 , 40.5 , "mid");
    Route obj2(20.0 , 20.5 , "high");
    
    Navigation nav;
    nav.addroute(obj1);
    nav.addroute(obj2);

    nav.display();
    cout<<"Sort by distance : "<<endl;
    nav.sortbydistance();    
    nav.display();
     cout<<"Sort by time : "<<endl;
    nav.sortbytime();
    nav.display();
    return 0;
}