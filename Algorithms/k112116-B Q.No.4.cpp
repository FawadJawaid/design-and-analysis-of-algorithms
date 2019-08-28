
// Name: Muhammad Fawad Jawaid Malik
// Section: B
// Roll No. 11k-2116
// Submitted To: Dr. Imran Rauf

#include <iostream>
#include <string>
#include <fstream>

class Dijkstra_Algo{
    private:
        int arr[15][15];
        int pred[15],dist[15];
        bool point[15]; 
        int src;
        int num;
        int myArray[150];
    
    public:
                  
    void setter()
    {
    
    for(int i=0;i<num;i++) 
    {
        point[i] = false;
        pred[i] = -1;
        dist[i] = -1 ;
    }
    dist[src]= 0;
    }

    int getClosestUnreachedNode()
    {
    int minDist = -1;
    int closestUnreachedNode;
    
    for(int i=0;i<num;i++) 
    {
        if((!point[i]) && ( minDist >= dist[i])) 
        {
            minDist = dist[i];
            closestUnreachedNode = i;
        }
    }
    return closestUnreachedNode;
    }

    void calculateDist()
    {
    setter();
    int minDist = -1;
    int closestUnreachedNode;
    int counter = 0;
    
    while(counter < num) 
    {
        closestUnreachedNode = getClosestUnreachedNode();
        point[closestUnreachedNode] = true;
        
        for(int i=0;i<num;i++) 
        {
            if((!point[i]) && (arr[closestUnreachedNode][i]>0) ) 
            {
                if(dist[i] > dist[closestUnreachedNode]+arr[closestUnreachedNode][i]) 
                {
                    dist[i] = dist[closestUnreachedNode]+arr[closestUnreachedNode][i];
                    pred[i] = closestUnreachedNode;
                }
            }
        }
        counter++;
    }
    }

        
};

int main()
{
    Dijkstra_Algo D;
    
    D.calculateDist();
 
   system("pause");
   return 0;   
}
