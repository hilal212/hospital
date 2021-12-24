#include <iostream>
using namespace std;

double input_validate(double);

char user_choice(char);

double calculate_totalcharges(double,double);

double calculate_totalcharges(double,double, 
double,double);

int main()
{
  char user_choice; 
 double days_spent,daily_rate,med_charges,services_charge,total_charges;

    cout << "Where you admitted as an in-patient or an out-patient? " << endl
         << "Enter 1 for in-patient or 2 for out-patient"
         << endl;
     
    user_choice =user_choice (user_choice);

    if (user_choice == '1')
    {
        cout << "Number of days been spent in the hospital:";
        days_spent = input_validate(days_spent);
 cout << "Daily rate:";daily_rate = input_validate(daily_rate);

cout << "Hospital medication charges: $";
med_charges = input_validate(med_charges);

cout << "Charges for hospital services\n"
<< "(lab tests, etc.): $";
  services_charge = input_validate(services_charge);

cout << "total_charges = $" << total_charges << endl;
    }
    else
    {
        cout << "Hospital medication charges: $";
        med_charges = input_validate(med_charges);

        cout << "Charges for hospital services\n"
            << "(lab tests, etc.): $";
        services_charge = input_validate(services_charge);
        cout << "total_charges = $" <<total_charges<< endl;
    }
    

    return 0;
}

