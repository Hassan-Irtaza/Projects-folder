#include <iostream>
using namespace std;

int main() {
    int salary,exp,bt,bonus;
    cout<<"Enter the employee Salary: ";
    cin>>salary;
    cout<<"Enter the employee experience: ";
    cin>>exp;
    cout<<"Enter the employee bonus tasks: ";
    cin>>bt;
    if(salary == 10000 && exp == 2 && bt == 5){
        bonus = 1500;
        cout<<"bonus is equal to: "<<bonus;
    }
    else if(salary == 10000 && exp == 3 && bt == 10){
        bonus = 2500;
        cout<<"bonus is equal to: "<<bonus;
    }
    else if(salary == 25000 && exp == 3 && bt == 4){
        bonus = 2000;
        cout<<"bonus is equal to: "<<bonus;
    }else if(salary == 75000 && exp == 4 && bt == 7){
        bonus = 3500;
        cout<<"bonus is equal to: "<<bonus;
    }
    else if(salary == 100000 && exp == 5 && bt == 10){
        bonus = 5000;
        cout<<"bonus is equal to: "<<bonus;
    }
    return 0;
}