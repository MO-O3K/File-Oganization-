#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct person {
    string name;
    int age;
};

int main() {
    int num;
    cout << "Enter the number of persons ";
    cin >> num;

    ofstream ofile("persons.txt");
    
    for (int i = 0 ; i < num ; i++) {
        person p;
        cout << "enter the name ";
        cin >> p.name;
        cout << "enter the age ";
        cin >> p.age;
        ofile << p.name << " " << p.age << endl;
    }
    ofile.close();
    cout << "data saved successfully" << endl;

    ifstream ifile("persons.txt");
    vector<person> persons;
    person temp;
    
    while (ifile >> temp.name >> temp.age) {
        persons.push_back(temp);
    }
    ifile.close();
    
    person youngest = persons[0];
    person oldest = persons[0];

    for (int i = 1; i < persons.size(); i++) {
        if (persons[i].age < youngest.age) {
            youngest = persons[i];
        }
        if (persons[i].age > oldest.age) {
            oldest = persons[i];
        }
    }
    ofstream result("results.txt");
    result << "Youngest Person: " << youngest.name << ", Age: " << youngest.age << endl;
    result << "Oldest Person: " << oldest.name << ", Age: " << oldest.age << endl;
    
    result.close();
    return 0;
}
