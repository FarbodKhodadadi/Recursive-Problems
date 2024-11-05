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
void CalShirini(vector<int> &numStudents ,vector<int> &diff , int lastIdx){
    if(lastIdx>2){
        if((numStudents[lastIdx-1]-numStudents[lastIdx-2]) > abs(numStudents[lastIdx-1]-numStudents[lastIdx-3])){

            diff.push_back((numStudents[lastIdx-1]-numStudents[lastIdx-3]));
            numStudents.pop_back();
            numStudents.pop_back();
            CalShirini(numStudents , diff , numStudents.size());
        }
        else{
           
            diff.push_back((numStudents[lastIdx-1]-numStudents[lastIdx-2]));
            numStudents.pop_back();
            CalShirini(numStudents , diff , numStudents.size());
        }
    }
    else if(lastIdx==2){
        diff.push_back((numStudents[lastIdx-1]-numStudents[lastIdx-2]));
    }
}
void Count(vector<int> shirini ){
    int count=0;
    for(int i=0; i<shirini.size(); i++){
        count += shirini[i];
    }
    cout << count;
}

int main(){

    int numSchools=0;
    vector<int> numStudents;
    vector<int> shirini;
    cin >> numSchools;
    
    numStudents = HandleInput();
    Count(shirini);
}
