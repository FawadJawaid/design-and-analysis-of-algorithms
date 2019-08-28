
// Name: Muhammad Fawad Jawaid Malik
// Section: B
// Roll No. 11k-2116
// Submitted To: Dr. Imran Rauf

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
   ifstream file("q3 Input.txt");
   ofstream filing("q3 Output.txt");
   
   char stuff;
   //char stuff[5];
   int counter=0;
   int num;
   int i,k;
   
   file >> num;
    
    // Checking if file opened or not
    if(file.is_open())
	{ 
      file.ignore(numeric_limits<streamsize>::max(), '\n');
      
      for(i=0; i<num; i++)
      {                  
        for(k=0; k<num; k++)
        {
           file >> stuff;
           
           if((file.peek()=='.' && stuff=='#') || (stuff=='.') || (file.peek()=='#' && stuff=='#'))
           {
                counter++;
           }
           
        }
      } 
    }
    
    int area=0;
    int cal;
      
    cal=counter-1;
      
    area=cal*3*3;
      
    
    cout << "OUTPUT: " << area << endl;
    filing << "OUTPUT: " << area << endl;
      
   file.close();
   
   system("pause");
   return 0;
}
