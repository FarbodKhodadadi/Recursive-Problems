#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> HandleInput(){

    string input;
    cin.ignore();
    getline(cin ,input);
    vector<int> numStudents;
    stringstream s(input);
    int token;

    while(s >> token){
        numStudents.push_back(token);
    }

    return numStudents;

}



int main(){

    int numSchools=0;
    vector<int> numStudents;
    vector<int> shirini;
    cin >> numSchools;
    
    numStudents = HandleInput();

}
