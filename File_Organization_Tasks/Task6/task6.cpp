#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int grade , del;
    ofstream f ("grades.txt");
    f << 60 << endl;
    f << 70 << endl;
    f << 80 << endl;
    f << 90 << endl;
    f << 100 << endl;
    f.close();

    ifstream x ("grades.txt");
    while (x >> grade)
        cout << grade << endl;
    x.close();

    cout << "enter the grade you need delete it ";
    cin >> del;

    x.open("grades.txt");
    ofstream t ("temp.txt");
    while (x >> grade)
    {
       if (grade != del)
          t << grade << endl;
    }
    x.close();
    t.close();

    remove("grades.txt");
    rename("temp.txt" , "grades.txt");
    
    return 0;
    }