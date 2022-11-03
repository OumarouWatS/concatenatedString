#include <iostream>
#include <vector>
using namespace std;

string Concatenate(vector<string> input);

int main()
{
    int num;
    string word;
    string theCatString;
    vector<string> in;
    cout << "How big is your vector?";
    cin >> num;
    
    cout << "Enter the info";
    for(int i=0; i<num; i++){
        cin >> word;
        in.push_back(word);
    }
    
    theCatString = Concatenate(in);
    cout<< theCatString;

    return 0;
}

string Concatenate(vector<string> input){
    string finalString;
    for(int i=0;i<input.size();i++){
        finalString += input[i];
    }
    
    return finalString;
}
