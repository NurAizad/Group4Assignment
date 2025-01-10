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
#include <sstream>
using namespace std;

 //variable to place words in the input.txt


//const int COLUMN_SIZE = 7;
//const int ROW_SIZE = 4;
//Function protoypes
//int insertTable(string arrayName[ROW_SIZE][COLUMN_SIZE]);
int insertTable(vector<vector<string>>&);

int main()
{
    string words;
    //string wordsVector[ROW_SIZE][COLUMN_SIZE]; //2d array
    vector<vector<string>> wordsVector;

    insertTable(wordsVector);

    for (const vector<string> row : wordsVector)
            {
                for (const string words : row)
                {
                    cout << words << endl;
                }
            }


    return 0;
}

//int insertTable(string arrayName[ROW_SIZE][COLUMN_SIZE])
int insertTable(vector<vector<string>>& vectorName)
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
    // getline(where to read input from, input is stored in this object, delimter if tkde, jadi \n)
    while (getline(infile, line))
    {

        if (line.find("VALUES(") != string::npos || line.find(");") != string::npos) // !=string;;npos means jumpa
        {
            int valuesStartPos = line.find("VALUES(")+7; //+7 to skip VALUES(
            int valuesEndPos = line.find(");");

            // substr(index of first char to be copied, length)
            string valuesData = line.substr(valuesStartPos, valuesEndPos-valuesStartPos);
            //cout << valuesData<<endl;

            //stringstream class mcm input output
            stringstream valuesDataSS(valuesData);
            string words;
            vector<string> row; //need this bcs 2d vector

            while (getline(valuesDataSS, words, ','))//delimiter utk buang comma
            {
                if(words.front()=='\'' && words.back()=='\'') //utlk buang quote
                {
                    words = words.substr(1,words.size()-2); //kena -2 sbb ada 2 quotes
                }
                row.push_back(words);
            }

            vectorName.push_back(row); //row jadi mcm single element in vectorName



        }
    }

    infile.close();
    outfile.close();

    return 0;
}
