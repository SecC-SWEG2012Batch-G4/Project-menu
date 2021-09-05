#include <iostream>
#include<string.h>//string library.

#include<iomanip>// used to construct table with proper width.
#include<cmath>

#include<cstdlib>
#include<stdio.h>

#include<vector>

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

patient_info getdata(patient_info);
void displaydata(patient_info);

int menu(int &option);
void hospital_information();

void expatient();
void appointment();

 patient_info p1,p2;

int menu(int &option)
{

    cout<<"            |=============================================================================|"<<endl;
    cout<<"            |==============This is HMSS hospital management system software===============|"<<endl;
    cout<<"            |=================Option 1-For new patient registration=======================|"<<endl;
    cout<<"            |=================Option 2-For existing patient===============================|"<<endl;
    cout<<"            |=================Option 3-Doctors side=======================================|"<<endl;
    cout<<"            |=================Option 4-major Information about the hospital===============|"<<endl;
    cout<<"            |=================Option 5-For exit===========================================|"<<endl;
    cout<<"            |=============================================================================|"<<endl;

    cout<<endl<<endl;

    cout<<"Enter your option: ";

    cin>>option;  //store users choice.

    if (option == 1) //Option 1.
    {
        system("cls");
     p2=getdata(p1);
        cout<<endl;
        system("pause");
        // return 0;
    }


    else if(option == 2) //Option 2.
    {
        system("cls");
      expatient();
        system("pause");
        // return 0;
    }

    else if (option == 3) //Option 3.
    {
        system("cls");
         displaydata(p2);
        cout<<endl;
        system("pause");
        // return 0;
    }

 else if (option == 4) //Option 4.
    {
        system("cls");
        hospital_information();
        cout<<endl;
        system("pause");
        // return 0;
    }

    else if(option == 5) //Option 5
    {
    	running = false;
       exit(1);
        // return 0;
    }


}
