#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

const string EMPTY = ".";
const string OCCUPIED = "1";
const string OBSTACLE = "*";
const int DIMENSION =8 ;

typedef vector<vector<string>> GamesBoard; 


int main(){

    GamesBoard board( DIMENSION , vector<string>(DIMENSION));
    int count = 0;

    ReadInput(board);
    Queens(count ,board ,0);
    
    cout << count;
}
