#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include <sstream>
using namespace std;
//451
int main(){
    ifstream input("pi.txt");
    stringstream buffer;
    string file_contents;
    input.open("pi.txt");
    int count = 0;
    buffer << input.rdbuf();
    file_contents = buffer.str();

  

    for(int i =0; i<file_contents.size(); i ++){
        if(file_contents[i] == '4'){
            if(file_contents[i+1] == '5'){
                if(file_contents[i+2] == '0'){
                        count++;
                }
            
            }
            

        }
    }
    char a = char(count);
      int count2 =0;
    for(int i = 0; i<file_contents.size(); i++){
        if(file_contents[i] == a[0] ){
          count2++;
        }
    };
  
    cout<<count2;
    return 0;
}

