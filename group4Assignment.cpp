// ***************************************************************
// Program: YOUR_FILENAME.cpp
// Course: CCP6114 Programming Fundamentals
// Lecture Class: TC3L
// Tutorial Class: TT5L
// Trimester: 2430
// Member_1: 242UC244T5 | MUHAMMAD NUR AIZAD BIN MURTADHA | MUHAMMAD.NUR.AIZAD@student.mmu.edu.my | 0195659972
// Member_2: 242UC242NF | LEE CHEE XUAN | LEE.CHEE.XUAN@student.mmu.edu.my | 01110510766
// Member_3: 242UC2444H | NELSON NG YAOHAN | NELSON.NG.YAOHAN@student.mmu.edu.my | 0177470261
// Member_4: 242UC244DJ | YUVENDAR A/L MARAN | yuvendar.maran@students.mmu.edu.my | +60127420244
// ***************************************************************
// Task Distribution
// Member_1:
// Member_2:
// Member_3:
// Member_4:
// ***************************************************************

#include <iostream>
#include <fstream>
using namespace std;

//Function protoypes
void createDatabase();
void createTable();
void viewDatabaseName();
void viewTableName();
void viewTableCSV();
void insertRow();
void updateTableRows();
void deleteTableRows();
void countShowRows();

bool databaseExist = false;
string currentDatabase;



int main()
{
    int choice;
    do
    {
        cout << "\t\tMENU OF OPERATIONS\n\n";

        cout << "Press 1 to create database file\n";
        cout << "Press 2 to create table in database file\n";
        cout << "Press 3 to view database name\n";
        cout << "Press 4 to view table name\n";
        cout << "Press 5 to insert rows to table\n";
        cout << "Press 6 to view table in CSV mode\n";
        cout << "Press 7 to update table rows\n";
        cout << "Press 8 to delete table rows\n";
        cout << "Press 9 to count and show number of rows in table\n";
        cout << "Press 0 to exit program\n\n";

        cin >> choice;
        cout << " \n";

        switch(choice)
        {
            case 1 :createDatabase();
                   break;
            case 2 :createTable();
                   break;
            case 3 :viewDatabaseName();
                   break;
            case 4 :viewTableName();
                   break;
            case 5 :viewTableCSV();
                   break;
            case 6 :insertRow();
                   break;
            case 7 :updateTableRows();
                   break;
            case 8 :deleteTableRows();
                   break;
            case 9 :countShowRows();
                   break;
            case 0 :
                    break;
            default : cout << "Invalid input. Try again\n";
        }
    }while (choice != 0);

}

void createDatabase()
{
    // https://www.tutorialspoint.com/cpp_standard_library/fstream.htm
    // https://youtu.be/EaHFhms_Shw?si=ql9_pY7Zn8Sj5klt


    ofstream outfile;
    string databaseName;

    if (databaseExist == false)
    {
        cout << "Input database name\n";
        cin >> databaseName;
        currentDatabase = databaseName;

        outfile.open(databaseName + ".txt"); //create database name ofstream = write

        databaseExist = true;
    }
    else
    {
        cout <<"Database already exist\n\n";
    }

    outfile.close();
}

void createTable()
{
    cout << "2 is pressed\n\n";
}
void viewDatabaseName()
{
    if (databaseExist=true)
    {
        cout <<"Database name is " << currentDatabase << endl << endl;
    }
    else
    {
        cout<<"Database doesn't exist\n\n";
    }
}
void viewTableName()
{
    cout << "4 is pressed\n\n";
}
void viewTableCSV()
{
    cout << "5 is pressed\n\n";
}
void insertRow()
{
    cout << "6 is pressed\n\n";
}
void updateTableRows()
{
    cout << "7 is pressed\n\n";
}
void deleteTableRows()
{
    cout << "8 is pressed\n\n";
}
void countShowRows()
{
    cout << "9 is pressed\n\n";
}
