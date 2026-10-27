#include<iostream>
#include <fstream>
using namespace std;
int main()
{  
   ofstream repl ("welcome.txt");
   repl << "Hello Everybody";
   repl.seekp(11);
   repl << "one ";
   repl.close();
   return 0;
}