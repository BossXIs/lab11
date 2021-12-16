#include<iostream>

using namespace std;

int main(){
 char count[6] = {'A','B','C','D','F','0'}; 
 int i=0 , a=0 , b=0 , c=0 , d=0 , f=0;
 char grade;
 cout << "Please input grade of each student (A-F) or input 0 to exit." <<"\n";
 
 do{
  cout << "Student [" << i+1 << "]: ";
  cin >> grade; 
  if(grade == 'A') 
  {
            a++;
            i++;
  
  }
  else if(grade == 'B') 
  {
            b++;
            i++;
    
  }
  else if(grade == 'C')
  {
            c++;
            i++;
   
  }
  else if(grade == 'D')
  {
            d++;
            i++;
   
  }
  else if(grade == 'F')
  {
            f++;
            i++;
       
  }
  else if( grade != count[5] || grade != '0')
  {
            cout << "Wrong input. Please input again." << "\n";
  }       
 }while(grade != '0');
 
 
 cout << "In total " << i << " students."<<"\n";
 cout << "A = " << a <<", ";
 cout << "B = " << b <<", "; 
 cout << "C = " << c <<", ";
 cout << "D = " << d <<", "; 
 cout << "F = " << f;
 
 return 0;
}
