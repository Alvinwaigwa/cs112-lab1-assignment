#include <iostream>
using namespace std;

string getPlan() {
    string PlanName;
    cout<< " Enter your desired plan: ";
    cin >> PlanName;
    while(PlanName != "gold" && PlanName != "silver") {  
        cout << " I'm sorry, \""<< PlanName << "\" is not a known plan.\n";
        cout << " Please enter a plan name: ";
        cin >> PlanName;
    }
    return PlanName;
}

unsigned int getMonths() {
    unsigned int NumberOfMonths;
    cout<< " Enter number of months: ";
    cin >> NumberOfMonths;
    return NumberOfMonths;
}

unsigned int computeCost(string PlanName, unsigned int NumberOfMonths) {
    if(PlanName == "silver" && NumberOfMonths == 1){
        return 90;
    }
    else if(PlanName == "silver" && NumberOfMonths >= 2 ){
        return 60;
    }
    else if(PlanName == "gold" && NumberOfMonths == 1 ){
        return 90;
    }
    else if(PlanName == "gold" && NumberOfMonths >= 2 && NumberOfMonths < 6 ){
        return 70;
    }
    else if(PlanName == "gold" && NumberOfMonths >= 7 ){
        return 35;
    }
    return 0;
}

int main() {
    string PlanName = getPlan();
    unsigned int NumberOfMonths = getMonths();
    unsigned int cost = computeCost(PlanName, NumberOfMonths);
    cout << "The cost of your plan is $" << cost;
    return 0;
}