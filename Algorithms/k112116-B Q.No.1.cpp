
// Name: Muhammad Fawad Jawaid Malik
// Section: B
// Roll No. 11k-2116
// Submitted To: Dr. Imran Rauf

#include <iostream>
#include <string>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile("q1 Input.txt");
    ofstream outfile("q1 Output.txt");
    
    int myArray[150];
    int counter=1;

	for(int i=0;i<150;i++)
	{
        myArray[i]=9;
    }
	
	// Checking if file opened or not
	if(infile.is_open())
	{ 
      for(int i=0; i < 150; i++)
      {
           infile >> myArray[i]; 
      } 
    }
    
        int num,i;
        num=myArray[0];
      
      if(myArray[1]==1)
      {    
        for(i=2; i<(num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==2)
      {    
        for(i=2+num; i<(2*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==3)
      {    
        for(i=2+num*2; i<(3*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==4)
      {    
        for(i=2+num*3; i<(4*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==5)
      {    
        for(i=2+(num*4); i<(5*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==6)
      {    
        for(i=2+num*5; i<(6*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==7)
      {    
        for(i=2+num*6; i<(7*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==8)
      {    
        for(i=2+num*7; i<(8*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==9)
      {    
        for(i=2+num*8; i<(9*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      else if(myArray[1]==10)
      {    
        for(i=2+num*9; i<(10*num+2); i++)
        {
           if(myArray[i]==1)
           {
               counter++;
           } 
        }
      }
      
    
      
    cout << "Output: " << counter << endl;
    outfile << "Output: " << counter << endl;
    
    cout<<endl;
    
    infile.close();
    
    system("pause");
    return 0;
}
