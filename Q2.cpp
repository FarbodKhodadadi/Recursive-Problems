#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

const char PLUS = '+';
const char MINUS = '-';
const char MULTIPLY = '*';

vector<int> Calculate(string &equation, int numOfTokens){
    vector<int> result;

    if(equation.length()==1) result.push_back(stoi(equation));
    else{
        for(int i=1 ; i<numOfTokens ; i+=2){

            string leftEq = equation.substr(0,i);
            string rightEq = equation.substr(i+1,numOfTokens);

            vector<int> reslutLeft=Calculate(leftEq,leftEq.length());
            vector<int> reslutRight=Calculate(rightEq,rightEq.length());

            for(auto left : reslutLeft){
                for(auto right : reslutRight){
                    if(equation[i] == PLUS) result.push_back(left + right);
                    else if(equation[i] == MINUS) result.push_back(left - right);
                    else if(equation[i] == MULTIPLY) result.push_back(left * right);
                }
            }
        }
    }
    return result;

}
int NumOfUniqeAns(vector<int> &result){
    
    sort(result.begin() ,result.end());
    auto it  = unique(result.begin() , result.end());

    result.erase(it ,result.end());

    return result.size();
}

int main(){

    int n=0;
    cin >> n ;
    int numOfTokens = 2*n-1;

    string equation;
    cin >> equation;
    
    vector<int> result = Calculate(equation ,numOfTokens);
    cout <<NumOfUniqeAns(result);

}
