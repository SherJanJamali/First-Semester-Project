#include<iostream>
#include<string>
using namespace std;

	void displayOptions();
	void confirmRide(int option);
	void showHelpline();

int main(){
    int option;
    
    cout<<"\nWelcome to **ALLAH BADSHAH** Transport Service!\n"<<endl;
    cout<<"\tWhere do you want to go?"<<endl;
    
    while (true){
        displayOptions();
        cout<<"Please select an option (1-6): ";
        cin>>option;
        
        if (option >= 1 && option <= 5){
            confirmRide(option);
        }
        else if (option == 6){
            showHelpline();
        }
        else{
            cout<<"Invalid option. Please choose a number between 1 and 6."<<endl;
        }
        
        cout<<"Do you want to make another selection? (yes/no): ";
        string again;
        cin>>again;
        if(again == "no"){
            cout<<"Thank you for using ALLAH BADSHAH Transport Service! Goodbye."<<endl;
            break;
        }
    }

    return 0;
}

void displayOptions(){
    cout<<"1: Dadu to Kotari "<<endl;
    cout<<"2: Dadu to Tandojam "<<endl;
    cout<<"3: Dadu to Mehar "<<endl;
    cout<<"4: Sehwan to Sukkar "<<endl;
    cout<<"5: Sukkar to Sehwan "<<endl;
    cout<<"6: Helpline "<<endl;
}

void confirmRide(int option){
    string timetable;
    int payment;
    int correctPayment;
    
    switch(option){
        case 1:
            timetable = "8 AM";
            correctPayment = 700;
            break;
        case 2:
            timetable = "12 PM";
            correctPayment = 1000;
            break;
        case 3:
            timetable = "7:30 AM";
            correctPayment = 200;
            break;
        case 4:
            timetable = "7 AM";
            correctPayment = 1000;
            break;
        case 5:
            timetable = "12 PM";
            correctPayment = 700;
            break;
        default:
            cout<<"Invalid option selected."<<endl;
            return;
    }
    
    cout<<"Timetable for your selected city: " <<timetable<<endl;
    cout<<"Do you want to confirm this ride? (yes/no): ";
    string confirmation;
    cin>>confirmation;

    if(confirmation == "yes"){
    	cout<<"Enter your payment (PKR "<<correctPayment<< "): ";
        
        while (true){
            cin>>payment;
            if(payment == correctPayment){
                cout<<"Your booking is completed. Thank you!"<<endl;
                break;
            }
            else{
                cout<<"Incorrect payment. Please enter the correct payment: ";
            }
        }
    }
    else{
        cout<<"Confirmation Cancelled"<<endl;
    }
}

void showHelpline(){
    cout << "Helpline: Contact at +9999999999"<<endl;
}

