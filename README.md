#include<iostream>


using namespace std;
    bool running = true;

 int opp,x,y=1234,z;
struct dateofadd
{
    int dd,mm,yy;
};
struct appoint
{
    int dd,mm,yy;
    string day;
};
struct password
{
double password;
};
struct Doctors
{
string name;
int age;
char sex;
string specialst;
string schedule;
};

struct Address
{
string city;
string kfleketema;
int kebele,wereda;
string email;
string phone;
};
struct Hospitals
{
string name;
string service;
Doctors hos_doc;
Address hos_add;

};

struct patient_info
{
char fname[100];
char city[50];
char kfleketema[20];
char lname[100];
 char blood[100];
 char  id[100];
 char  contact[100];
 char sex[100];
 int date,month,year,age,kebele,wereda;
 string health_condition;
    string medicine_taken;
    int no_medicine;
    string illnesses;
    string surgeries;
    int no_surgeries;
    string vacsination;
    string allergies;
    string symptoms;
    dateofadd dateadd;
    Address patiadd;
    double weight, height, heightt,bmi;
};


struct doctors_form
{
string prescription;
string medicine;
string tip;
string recommendation;
string str1;
}d;


patient_info getdata(patient_info);
void displaydata(patient_info);
int menu(int &option);
void hospital_information();
void expatient();
void appointment();

int main ()
{
    int opp;

    menu(opp);

    return 0;
}


int menu(int &option)
{



    cout<<"               |=============================================================================|"<<endl;
    cout<<"               |==============This is mpdo hospital management system software===============|"<<endl;
    cout<<"               |=================Option 1-For new patient registration=======================|"<<endl;
    cout<<"               |=================Option 2-For existing patient===============================|"<<endl;
    cout<<"               |=================Option 3-Information about major hospitals in Addis Ababa===|"<<endl;
    cout<<"               |=================Option 4-For exit===========================================|"<<endl;
    cout<<"               |=============================================================================|"<<endl;

    cout<<endl<<endl;

    cout<<"Enter your option: ";

    cin>>option;  //store users choice.

    if (option == 1) //Option 1.
    {
        system("cls");
        cout<<"he"<<endl;
        system("pause");
        return 0;
    }

    else if(option == 2) //Option 2.
    {
        system("cls");
        cout<<"hle"<<endl;
        system("pause");
        return 0;
    }

    else if (option == 3) //Option 3.
    {
        system("cls");
        cout<<"hleww"<<endl;
        system("pause");
        return 0;
    }

 else if (option == 4) //Option 4.
    {
        system("cls");
        return 0;
    }

    else //Value different from the options.
    {
        cout<<"Incorect number"<<endl;
        system("pause");
        return 0;
    }
}

void expatient()
{
cout<<"\nEnter password: "<<endl;
cin>>z;
if(z==y){

/**cout<<"================================================================"<<endl;
cout<<"your check up:                   "<<setw (30)<< left<<d.medicine<<endl;
cout<<"your medical recommendation:     "<<setw (30)<< left<<d.recommendation<<endl;
cout<<"your prescription:               "<<setw (30)<< left<<d.prescription<<endl;
cout<<"doctors Tips for you:            "<<setw (30)<< left<<d.tip<<endl;
cout<<"================================================================"<<endl;}
else
  cout<<"\nIncorrect password please try again";

system("pause");
system("cls");
menu(opp);*/
int days,cost;

    cout<< "Enter the number of days patients have Stayed : ";

cin>>days;
cout<<"The severity of illness is : " ;

if(days<=1)
    cout<<" Minor"<< endl;

    else if(days<=3)
    cout<<" Moderate"<< endl;

        else if(days<=6)
        cout<<" Major"<< endl;

        else
        cout<<" Extreme"<< endl;
        cost= 200*days;

   cout<<"The total cost for "<<days<<" days is : "<<cost<<"price"<<endl;
   system("pause");
system("cls");
menu(opp);
}
else
  cout<<"\nIncorrect password please try again";

system("pause");
system("cls");
menu(opp);


}
