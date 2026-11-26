#include<iostream>
#include <fstream>
using namespace std;
int main()
{  
   string x , y , z; 
   fstream app ("fruit.txt",ios::in | ios::out | ios::app);
   app >> x >> y >> z;
   app << endl << "Fresh Fruits";
   app.close();
   return 0;
}