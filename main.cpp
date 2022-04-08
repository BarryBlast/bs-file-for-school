#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    string *studentID;
    string *studentAnswers;

    studentID = new string[5]; ///student id
    studentAnswers = new string[5]; ///student answers
    int totalRight = 0;
    int totalWrong = 0;
    int totalBlank = 0;


    inFile.open("input.txt");
    int a, b;
    string key;
    inFile >> key;
    cout << "Processing Data\n" << "Key: " << key << endl << endl;
    cout << "Student ID   Student Answers         Score       Grade\n";

    for (a = 0, b = 0; a < 5; a++, b++)
    {
        inFile >> studentID[a];
        getline(inFile, studentAnswers[b]);

        studentAnswers[b].erase (0,1);

        cout << studentID[a] << "    " << studentAnswers[b] << endl;

    }


    char charArray[20];



    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 20; b++)
       {
          charArray[b] = studentAnswers[a].at(b);
        cout << charArray[b];


            if (charArray[b] == 'T')
            {
              totalRight = totalRight + 1;
            }
           else if (charArray[b] == 'F')
            {
               totalWrong = totalWrong + 1;
            }
            else if (charArray[b] == ' ')
            {
                totalBlank = totalBlank + 1;
            }


        }



   }
    cout << totalRight << endl << totalWrong << endl << totalBlank;
}






