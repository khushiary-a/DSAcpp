// Develop a feature for an Automotive Diagnostic Alert System where:
// 1. Singleton is used to ensure there is only one DiagnosticManager instance.
// 2. Observer Pattern is used to notify various subsystems (e.g., Display, Logging, and ExternalAlert System) 
// about the changes in diagnostic status

#include<iostream>
#include<vector>
using namespace std;

//obsrever - design pattern
class Observer {
public:    
    virtual void update(string& diagnosticStatus) = 0;
};

class Display : public Observer {
public:
    void update(string& diagnosticStatus)  {
        std::cout << "Display: Diagnostic Status Changed to: " << diagnosticStatus << std::endl;
    }
};


class Logging : public Observer {
public:
    void update(string& diagnosticStatus)  {
        std::cout << "Logging: Recorded Diagnostic Status: " << diagnosticStatus << std::endl;
    }
};


class ExternalAlert : public Observer {
public:
    void update(string& diagnosticStatus)  {
        std::cout << "ExternalAlert: Alert sent with status: " << diagnosticStatus << std::endl;
    }
};

//single-ton design pattern
class DiagonosticManager{
    private:     
    //private constructor
    DiagonosticManager(){
        cout<<"ok"<<endl;
    }
    public:
    vector<Observer*> observers; 
    string diagnosticStatus;
    //Method to check instance 
    static DiagonosticManager& getInstance() {
        static DiagonosticManager instance;  
        return instance;
    }
    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }    
    void notifyObservers() {
        for (Observer* observer : observers) {
            observer->update(diagnosticStatus);
        }
    }    
    void setDiagnosticStatus(const std::string& status) {
        diagnosticStatus = status;
        notifyObservers(); 
    }
    string getDiagnosticStatus() const {
        return diagnosticStatus;
    }
    
};


int main(){
    DiagonosticManager& diagManager = DiagonosticManager::getInstance();
    Display display;
    Logging logging;
    ExternalAlert externalAlert;    
    diagManager.addObserver(&display);
    diagManager.addObserver(&logging);
    diagManager.addObserver(&externalAlert);    
    diagManager.setDiagnosticStatus("Engine Error");
    diagManager.setDiagnosticStatus("Low Oil");
    diagManager.setDiagnosticStatus("OK");

    return 0;
}