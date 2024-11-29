# include <iostream>
using namespace std;
int main()
{
double basic_salary, HRA ,DA ,gross_pay;
cout<<"Enter the basic salary of the Employe : ";
cin>>basic_salary;
if (basic_salary <0){


cout<<"Invalid value !";
return 1;
}

if (basic_salary<1500){

DA=0.10* basic_salary;
HRA=0.98* basic_salary;
}else {
HRA=500;
DA=0.98*basic_salary;
}
gross_pay=basic_salary+HRA+DA;
cout<<"The Grosspay is "<< gross_pay<<endl;
return 0;
}

