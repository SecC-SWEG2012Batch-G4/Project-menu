#include<iostream>


using namespace std;

void menu();
void patient();
void doctor();

int main ()
{
     system("color 9F");

    menu()

    return 0;
}


void menu(){
char opp;

    cout<<"            |=============================================================================|"<<endl;
    cout<<"            |==============This is HMSS hospital management system software===============|"<<endl;
    cout<<"            |=================Option 1-For patient =======================================|"<<endl;
    cout<<"            |=================Option 2-For Doctors =======================================|"<<endl;
    cout<<"            |=================Option 3-major Information about the hospital ==============|"<<endl;
    cout<<"            |=================Option 4-For exit ==========================================|"<<endl;
    cout<<"            |=============================================================================|"<<endl;

cout<<"\nEnter your choice from the option listed above: ";
enter:
cin>>opp;

if(opp=='1'||opp=='2'||opp=='3'||opp=='4')
switch(opp){
case '1':
    system("cls");//used to clear screan
    patient();//patient function is being called
    break;

case '2':
    system("cls");
    doctor();//doctores function is being called
    break;

case '3':
    system("cls");
    hospital_information();//hospital information function is being called
    break;

case '4':
  exit(0);
    break;
}
    else
   cout<<"\nwrong input try again: ";
goto enter;

}

//patient function definition
//patient options
void patient(){
int choice;
cout<<"=================Choose your option from listed below==============";

cout<<"\n\t[1].For new patient registration"<<endl;
cout<<"\t[2].for existing patient login"<<endl;
cout<<"\t[3].for inpatient "<<endl;
cout<<"\t[4].For editing information"<<endl;
cout<<"\t[5].Back main menu"<<endl;

cout<<"\n\nEnter your option from listed above: ";
cin>>choice;

switch(choice){
case 1:
    system("cls");
    newPatient();//calling newpatient function
    break;

case 2:
    system("cls");
    oldPatient();//oldpatient function is being called
    break;

 case 3:
     system("cls");
     inpatient();
    break;

 case 4:
     system("cls");
     edit();
    break;
case 5:
     system("cls");
     menu();//the system return back to menu part
    break;
}

}

void doctor(){
    int c,x,code,response;
    x=1565;
cout<<"Enter password:";
cin>>code;
if(code==x){
cout<<"=================Choose your option from listed below==============";
 cout<<"\n\n1.display patients information\n";
 cout<<"2.doctors note for patient\n";
 cout<<"3.back\n";

 cout<<"enter your option: ";
 cin>>c;
 cout<<endl;

 switch(c){
 case 1:
     system("cls");
     display();//calling display funtion

     break;
 case 2:
     system("cls");
     medicalTip();//calling medical tip function
    break;

case 3:
     system("cls");
     menu();//if the user press 3 it return to menu function

    break;
 }}
 else
{cout<<"\nIncorrect password!!!Please try again\n "<<endl;}
 do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     doctor();
 }
