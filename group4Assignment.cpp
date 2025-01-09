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
#include <string>
#include <vector>
using namespace std;

 //variable to place words in the input.txt



//Function protoypes
int insertTable(vector<string>);

int main()
{
    string words;
    vector<string> wordsVector;

    insertTable(wordsVector);


    return 0;
}

int insertTable(vector<string> vectorName)
{
    ifstream infile;
    infile.open("input.txt");

    ofstream outfile;
    outfile.open("output.txt");

    if (!infile) {
        cout << "Error: Could not open the input file." <<endl;
        return 1;
    }

    if (!outfile) {
        cout << "Error: Could not open the output file." <<endl;
        return 1;
    }

    string line;
    //string insertTableArray[];
    // getline(where to read input from, input is stored in this object, delimter if tkde jadi \n)
    while (getline(infile, line))
    {
        if (line.find("INSERT INTO"))
        {
            vectorName.push_back(line);
        }
    }

    // for( declarationOfVariable : nameOfRange)
    for (const string data : vectorName)
    {
        outfile << data << endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
