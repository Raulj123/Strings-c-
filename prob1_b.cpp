//this need fixing 
//getting nan 

#include<iostream>
#include<string.h>
#include<vector>
#include<fstream>
#include <sstream>
#include<cstring>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;

float cal_pi_diff(int radius,long double area);
int main(){
    vector<string> content;
    vector<long double>differences_in_pi;
    ifstream input("pi2.txt");
    string info;
    
    long double final_products =1;
    int radius;
    long double area;
    if(input.is_open()){
        while(getline(input,info)){
            content.push_back(info);
        }

    }
    for(int i =0; i < content.size(); i++){
        //cout<<content[i]<<"\n\n";
      istringstream ss(content[i]);         //used to split string around white space
      if(ss>>radius && ss>>area){           //reads the next string from the input stream ss and stores it in the vars
        long double difference = cal_pi_diff(radius,area);       //calculating difference of erros
         cout<< endl <<radius <<endl<< area << endl <<difference;
        differences_in_pi.push_back(difference);
        //cout<< differences_in_pi[i] <<endl;
       
      }
     
    }
    sort(differences_in_pi.begin(),differences_in_pi.end());
    
    for(int i = 0; i<5; i++){
        cout<<endl<<differences_in_pi[i] <<endl;
        final_products *= differences_in_pi[i];
        


    }

    cout<< endl << setprecision(10) <<final_products;
return 0;
}
float cal_pi_diff(int radius,long double area){
    long double correct_area;
    float pi = 3.141592653589793;
    radius = radius*radius;     //cal r^2
    correct_area = pi * radius; //cal area
    correct_area = abs(area - correct_area);  //this is the difference between approximate value of oi and real value of pi
    
    return correct_area;
}
