
/*

NAME: MARIPET KERETO
REG: CT101/G/26655/25

PAYPAL SYSTEM USING FUNCTION

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Fixed overtime rate per hour
const double OVERTIME_RATE = 500.0;


// Function 1: Get employee details
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours)
{
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}


// Function 2: Calculate overtime pay
double calculateOvertimePay(double overtimeHours)
{
    return overtimeHours * OVERTIME_RATE;
}


// Function 3: Calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay)
{
    return basicSalary + overtimePay;
}


// Function 4: Display payslip
void displayPayslip(string name, double basicSalary,
                     double overtimeHours, double overtimePay,
                     double netSalary)
{
    cout << "\n====================================\n";
    cout << "             PAYSLIP                \n";
    cout << "====================================\n";

    cout << fixed << setprecision(2);

    cout << "Employee Name   : " << name << endl;
    cout << "Basic Salary    : " << basicSalary << endl;
    cout << "Overtime Hours  : " << overtimeHours << endl;
    cout << "Rate Per Hour   : " << OVERTIME_RATE << endl;
    cout << "Overtime Pay    : " << overtimePay << endl;
    cout << "Net Salary      : " << netSalary << endl;

    cout << "====================================\n";
}


int main()
{
    // Variables
    string employeeName;
    double basicSalary;
    double overtimeHours;
    double overtimePay;
    double netSalary;

    // Step 1: Get employee details
    getEmployeeDetails(employeeName, basicSalary, overtimeHours);

    // Step 2: Calculate overtime pay
    overtimePay = calculateOvertimePay(overtimeHours);

    // Step 3: Calculate net salary
    netSalary = calculateNetSalary(basicSalary, overtimePay);

    // Step 4: Display payslip
    displayPayslip(employeeName, basicSalary,
                   overtimeHours, overtimePay, netSalary);

    return 0;
}