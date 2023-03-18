//gave up couldnt get the min converted to ints whithout the extra 0


#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<bits/stdc++.h>      //split
#include <sstream>            //split
#include <algorithm>
#include<cstring>
#include<chrono>
using namespace std;
int final = 0;
vector<string>options;
int cal_min(string time_in_city);
int main(){
    ifstream input("flights2.txt");
    string flights;
    
    if(input.is_open()){                     //placing contents in vector called options
        while(getline(input,flights)){
            options.push_back(flights);
        }
    }
    string starting_pos = "Lisbon";       //placing starting, ending & flights in var.
    string ending_pos = "Tanza";
    vector<int>times;
    int i =0;
    string from;
    string to;
    string time_in_city;
    string duration;
    int hours;
    int mins_in_city;

while(starting_pos !=ending_pos){
    istringstream ss(options[i]);
    cout<<options[i];
    cout<<options.size();
    if(ss>>from && ss>>to && ss>>time_in_city && ss>>duration){
        mins_in_city = cal_min(time_in_city);
        cout<<mins_in_city<<endl;
        if(mins_in_city > 180){
            swap(options[i],options.back());
            options.pop_back();
        
        }
        if(starting_pos == from){
            times.push_back(mins_in_city);
        }
    }
    if(i +1 == options.size()){
        sort(times.begin(),times.end());
        cout<<times[0]<<times[1];
    }
    else{
        i++;
    }
        
    
}
    for(i=0; i<options.size(); i++){
        cout<<options[i] <<endl;
    }
    // while(starting_pos !=ending_pos){
    
        
    //     istringstream ss(options[i]);
    //     if(ss>>from && ss>>to && ss>>hour && ss>>min){
    
                    
    //     }
    //     //start at index 0 if run to the end of file
    //     if(i+1 == options.size()){
    //         i = 0;
    //     }else{
    //         i++;
    //     }
         
            
       
    // }
   
    cout<< final << "\n\n";

    return 0;
}
int cal_min(string time_in_city){
    string hours;
    string mins;
    int total_mins;
    total_mins = (stoi(time_in_city.substr(0,2)) *60);
    
    return total_mins;
}
