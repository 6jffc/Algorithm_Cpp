#include<iostream>
#include<string>
#include<vector>
using namespace std;

void addStairs(vector<string> &words){
    vector<string> result;
    result.push_back("***");
    for(const auto words){
        result.push_back(words);
        result.push_back("***");
    }
    words = result;
}
int main(){
    vector<string> words = {"the", "quick", "brown", "fox"};
    addStairs(words);

    for(const auto &word: words){
        cout<<words<<" "<<endl;
    }
    cout<<endl;
    return 0;
}
