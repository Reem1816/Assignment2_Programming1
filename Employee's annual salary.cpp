#include <iostream>

using namespace std;

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Employee's annual salary.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

int main()
{
    float previous_annualSalary;
    float new_annualsalary;
    float new_monthlysalary;
    float retoactive_pay;
    for(int i =0; i<9999;i++){
    cout<<"enter your previous annual Salary"<<endl;
    cin>>previous_annualSalary;
    retoactive_pay = previous_annualSalary*(3.8/100);
    cout<<"the amount of retroactive pay due the employee "<<retoactive_pay<<endl;
    new_annualsalary = (previous_annualSalary*(7.6/100))+previous_annualSalary  ;
    cout<<"new annual salary is :"<<new_annualsalary<<endl;
    new_monthlysalary = new_annualsalary/12 ;
    cout<<"new monthly salary is :"<<new_monthlysalary<<endl;

    }

    return 0;
}
