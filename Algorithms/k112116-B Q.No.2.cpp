
// Name: Muhammad Fawad Jawaid Malik
// Section: B
// Roll No. 11k-2116
// Submitted To: Dr. Imran Rauf

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
    int ver,edg,pt,x,i,j,t;
    int pointer[20], points[20]; 
    int edge[20][20],arr[20],myArray[3];
    
    ifstream ifs("q2 Input.txt");
    ofstream ofs("q2 Output.txt");
    
    for(int i=0; i < 2; i++)
    {
           ifs >> myArray[i]; 
    } 
    
    ver=myArray[0];
    edg=myArray[1];
     
    ifs.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for(int y=0;y<edg;y++)
    {
         ifs>>i>>j;
         edge[i][j]=1;
    }
    
    cout << "OUTPUT: " << endl;
    ofs << "OUTPUT: " << endl;
    
    x=1;
    t=1;
    
    points[x]=1;
    
    while(t<ver)
    {
        for(j=ver;j>=1;j--)
        if(edge[x][j]!=0 && points[j]!=1 )
        {
            pointer[j]=1;
            arr[pt]=j;
            pt++;
        }
        
        x=arr[--pt];
        
        cout << (arr[pt]-1) << x << endl;
        ofs  << (arr[pt]-1) << x << endl;        
        
        t++;
        
        pointer[x]=0;
        points[x]=1;
    }
        
        
     system("pause");
     return 0;
 }
