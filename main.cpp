#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
#include "AcceptingFile.h"
using namespace std;
void makeNewFile()
{
    ofstream outFile;
    outFile.open("michaelmasakayan.out");
    string current;
    int num=0;
    for(int i = 0; i<1000;++i)
    {
       num= rand()%100;
       if(num ==0 )
       {
           current.push_back('A');
       }
       else if (num ==1 )
           {
               current.push_back('B');
           }
       else if (num ==2 )
       {
           current.push_back('T');
       }
       else if (num == 3 )
       {
           current.push_back('G');
       }
    }
    outFile.close();
}
int main() {
    int AGprob, ACprob, ATprob, AAprob, CAprob, CTprob, CGprob, CCprob, TAprob, TCprob, TGprob, TTprob, GAprob, GGprob, GCprob, Gtprob, GTprob;
    int AGcount, ACcount, ATcount, AAcount, CAcount, CTcount, CGcount, CCcount, TAcount, TCcount, TGcount, TTcount, GAcount, GGcount, GCcount, Gtcount, GTcount;
    int Glower, Alower;
    int sum = 0;
    int mean = 0;
    int varience = 0;
    int lineCount;
    int length;
    int counter = 0;
    ifstream inFile;
    string nameOfFile;
    cout << "type the string name of the file" << endl;
    cin >> nameOfFile;
    inFile.open(nameOfFile);
    string line;
   // checking for error
    if (!inFile) {
        cout << "Error opening";
//       fileName<<"for reading! \n";
    }
    inFile >> line;
    while (inFile >> line) {
        length = +line.length();
        string bi;
        for (int i = 0; i < line.length(); i = i + 2) {
            bi.push_back(line[i]);
            bi.push_back(line[i + 1]);
            lineCount++;
            counter++;
        }
        if (bi == "AG") {
            AGcount++;
        } else if (bi == "AC") {
            ACcount++;
        } else if (bi == "AT") {
            ATcount++;
        } else if (bi == "AA") {
            AAcount++;
        } else if (bi == "CA") {
            CAcount++;
        } else if (bi == "CC") {
            CCcount++;
        } else if (bi == "CT") {
            CTcount++;
        } else if (bi == "CG") {
            CGcount++;
        } else if (bi == "GA") {
            GAcount++;
        } else if (bi == "GC") {
            GCcount++;
        } else if (bi == "GT") {
            GTcount++;
        } else if (bi == "GG") {
            GGcount++;
        } else if (bi == "TA") {
            GAcount++;
        } else if (bi == "TC") {
            GCcount++;
        } else if (bi == "TT") {
            GTcount++;
        } else if (bi == "TG") {
            GGcount++;
        }
    }
    AGprob = AGprob / counter;
    ACprob = ACprob / counter;
    ATprob = ATprob / counter;
    AAprob = AAprob / counter;
    CAprob = CAprob / counter;
    CTprob = CTprob / counter;
    CGprob = CGprob / counter;
    CCprob = CCprob / counter;
    TAprob = TAprob / counter;
    TTprob = TTprob / counter;
    TGprob = TGprob / counter;
    TCprob = TCprob / counter;
    GAprob = GAprob / counter;
    GTprob = GTprob / counter;
    GGprob = GGprob / counter;
    GCprob = GCprob / counter;
    makeNewFile();
    bool keepGoing = true;
    if (keepGoing == true) {
    char ans;
    cout << "Would you like to proccess another list y/n" << endl;
    cin >> ans;
    if (ans == 'y') {
        makeNewFile();
    } else if (ans == 'n') {
        keepGoing = false;
    } else {
        cout << "respond with y/n and hit enter";
    }
}
    inFile.close();
}
