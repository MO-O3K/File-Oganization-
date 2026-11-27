#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("students.txt", ios::app);
    char name[20];
    int id;
    float grade;
    char c;
    char d = '$';
    cout << "are you need to add (y/n) \n";
    cin >> c;
    cin.ignore();
    while (c == 'y' && c != 'n')
    {
        cout << "enter name: ";
        cin.getline(name, 20);
        cout << "enter id: ";
        cin >> id;
        cout << "enter grade: ";
        cin >> grade;

        f << name << ", " << id << ", " << grade << " " << d << endl;

        cout << "are you need to add (y/n) \n";
        cin >> c;
        cin.ignore();
    }
    f.close();
    return 0;
}
