// name: Lilit Khamalyan
// date: 1/07/2020
// Programming Challenge 2: The East Coast Sales division of a company generates 58% of total sales.
// Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $860,000 in sales this year. 
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
     double yearlySale = 860000.0;
     double prediction;
     // Calculate and display East Coast division's sales
     prediction = yearlySale * 0.58;
     cout << "East Coast will generate $" << prediction << " of total sales." << endl;
     system("pause");
     return 0;
}

