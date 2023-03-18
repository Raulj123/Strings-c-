#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<bits/stdc++.h>      //split
#include <sstream>            //split
#include <algorithm>
#include<cstring>
using namespace std;
int final = 0;
vector<string>options;
int main(){
    ifstream input("flights.txt");
    string flights;
    
    if(input.is_open()){                     //placing contents in vector called options
        while(getline(input,flights)){
            options.push_back(flights);
        }
    }
    string starting_pos = "Lisbon";       //placing starting, ending & flights in var.
    string ending_pos = "Tanza";
    
    int i =0;
    string from;
    string to;
    while(starting_pos !=ending_pos){
        //cout<<options.size() << "   " <<i;
        
        istringstream ss(options[i]);
        if(ss>>from && ss>>to){
           //cout<<from <<" "<<to<<endl;
           // cout<<starting_pos;
            if(starting_pos == from){
                
                if(to.size() > from.size()){        //to longer 
                 
                    final +=5;

                }else if(to.size() < from.size()){  //to shorter
                    
                    final -=2;
               
                }                  
                starting_pos = to;
                           
            }
                    
                    
        }
        //start at index 0 if run to the end of file
        if(i+1 == options.size()){
            i = 0;
        }else{
            i++;
        }
         
            
       
    }
   
    cout<< final << "\n\n";

    return 0;
}
