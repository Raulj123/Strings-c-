//ddint finish this 
#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;
vector<string> token;
int count_frankie(words);
int main(){
    ifstream input("msg.txt");
    string in;
    int n = 4104;
    vector<string> token;
    string enter = "high";
    int count = 0;
    int max = 0;
   if(input.is_open()){
        while(getline(input,in)){
            token.push_back(in);
        } 
    }
   input.close();

    for(int i =0; i < token.size(); i++){
        
        int found = token[i].find(enter);
        string words = token[i];
        int last_space = words.find_last_of(" ");
        string last_word = words.substr(last_space +1);
        if(last_word == "room"){
            count += count_frankie(words);
        }
    }
    cout << max;
  


    return 0;
}

int count_frankie(words){
    int countf = 0;
    for(int i =0; i<words.size(); i++){
        //how to count++ untill it hit 'and'
        if(wor)
    }

}