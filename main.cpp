//Jose Sandoval
//June 24th, 2024
//This software program will be able to calculate the salary of emails for a retail store through the use of comissions.


#include <iostream>
#include <iomanip>

using namespace std;

//My Constant for my Software program of minimum wage, hours worked, and overtime pay of 50 percent higher than the actual minimum wage pay

const double Minimum_Hourly_Wage = 18.00;
const double Maximum_Hours_Work_Per_Week = 40;
const double Overtime_Pay =
1.5;

//Comssion Rate of 2%, 3%, 4%, and 5%
const double ComissionRate_One = 0.02;
const double ComissionRate_Two = 0.03;
const double ComissionRate_Three = 0.04;
const double ComissionRate_Four = 0.05;



int main() {

    //What is the purpose of the calculation

    cout << "The Software Program will allow us to see the paychecks that come in weekly from workers who are employed in a retail store, where they will work a minimum of 40 hours or more with overtime pay." << endl;

    double TheAmountOfHoursWorked, TheSalesAmount;

    //The Amount the User worked within their job
    cout << "User must enter the amount of works they have worked within their job: ";
    cin >> TheAmountOfHoursWorked;
    while (TheAmountOfHoursWorked < 0) {
        cout << "The number of hours that an employee works will not be able to be negative. User: Please Enter The Number Gain: ";
        cin >> TheAmountOfHoursWorked;
    }

    //Knowinhg the amount Sales that the user has done while working

    cout << "Please enter the number of Sales within the time you worked";
    cin >> TheAmountOfHoursWorked;
    while (TheAmountOfHoursWorked < 0); {
        cout << "The number of hours that an employee works will not be able to be negative. User: Please Enter The Number Gain: ";
        cin >> TheAmountOfHoursWorked;

    }

    //How We Will Be Calucluting "Minimum Weekly Wage"

    double TheHourlyWage = 0.0;
    double HoursWorkedRegulary = 0.0;
    double HoursofOvertime = 0.0;

    //What is the Regular and Overtime Hour shifts 

    if (TheAmountOfHoursWorked <= Maximum_Hours_Work_Per_Week) {
        HoursWorkedRegulary = TheAmountOfHoursWorked;
        HoursofOvertime = 0.0;
    }
    else; {
        HoursWorkedRegulary = Maximum_Hours_Work_Per_Week;
        HoursofOvertime = TheAmountOfHoursWorked - Maximum_Hours_Work_Per_Week;

    }

    //The Calculation made on minimum wage while also taking a part of the over time and regular housr worked 

    TheAmountOfHoursWorked = (HoursWorkedRegulary * Minimum_Hourly_Wage) + (HoursofOvertime * Minimum_Hourly_Wage * Overtime_Pay);

    //How We Wil be Calculating "Commission Rate"
    double commissionrate = 0.0;
    if (TheSalesAmount < 5000) {
        commissionrate = ComissionRate_One;
    }
    else if (TheSalesAmount >= 5000 && TheSalesAmount < 10000) {
        commissionrate = ComissionRate_Two;
    }
    else if (TheSalesAmount < 20000) {
        commissionrate = ComissionRate_Three;
    }
    else {
        commissionrate = ComissionRate_Four;
    }
    //How We Will be Calculating "Commission"

    double comission = TheSalesAmount * commissionrate;

    //Paycheck Calculations and amount 

    double paycheck = max(Minimum_Hourly_Wage, comission);

    //Displaying Our Results from the given Information 

    cout << fixed << setprecision(2);
    cout << "The Minimum Hourly Wage $" << Minimum_Hourly_Wage << endl;
    cout << "The Commission $" << comission << endl;
    cout << "The Total Paycheck" << paycheck << endl;


    return 0;