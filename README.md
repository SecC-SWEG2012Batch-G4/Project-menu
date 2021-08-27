#include<iostream>


using namespace std;

int menu(int &option);

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

