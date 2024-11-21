
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include "LinkedQueue.h"
#include "PriQueue.h"
#include "HPC.h"
#include "UI.h"

using namespace std;
void parseString(vector<string>& v, string s);

void UI::readFile()
{
    
        fstream Finput;
        Finput.open("Input.txt", ios::in);

        if (!Finput.is_open()) {
            cout << "Error opening file!" << endl;
            return;
        }

        int NoHp;

        if (!(Finput >> NoHp)) {
            cout << "Error reading integer from file!" << endl;
            Finput.close();
            return;
        }

        cout << NoHp << endl;
        Finput.close();
    



}

void parseString(vector<string>& v, string s)
{
	string word;
	istringstream iss(s);
	while (iss >> word)
	{
		v.push_back(word);
	}
}