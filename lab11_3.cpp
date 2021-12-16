#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    
    ifstream  source("score.txt");
    string text;
    double sum,count;
    int n;
    
     while(getline(source,text)){
           
           sum += atof(text.c_str());
           count += pow(atof(text.c_str()),2);
           n++;
           
     }
    
    cout << "Number of data = " << n <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/n << "\n";
    cout << "Standard deviation = " << pow((count/n)-pow(sum/n,2),0.5) <<"\n";
    source.close();
    return 0;
}