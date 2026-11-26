#include<iostream>
#include <fstream>
using namespace std;
int main()
{   
   string name;
   int id;
   float grade;
   cout << "enter your full name" << endl;
   getline(cin,name);
   cout << "enter your id" << endl;
   cin >> id;
   cout << "enter your grade" << endl;
   cin >> grade;
   ofstream info("Student.txt");
   info << name << endl;
   info << id << endl;
   info << grade;
   info.close();
   return 0;
}