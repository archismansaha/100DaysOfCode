#include <iostream>
#include <string>
using namespace std;



void printPermutationsHelper(string input, string output){ 
    if(input.length() == 0){
        cout << output << endl; 
        return;
    }
    for(int i = 0; i<= output.length(); i++){
        printPermutationsHelper(input.substr(1), output.substr(0,i) + input[0] + output.substr(i));
    }
}
void printPermutations(string input){ 
    printPermutationsHelper(input, "");
    return;
}

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}