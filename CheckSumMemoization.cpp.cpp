

#include <iostream>
#include <unordered_map>
using namespace std;
   

bool checksum(int target, int *arr, int size){
     unordered_map<int, bool>memo;
   if(memo.find(target)!=memo.end())
   {
       return memo[target];
   }  
 if(target==0){ 
     //cout<<"true"<<endl;
    return true;
    
 }
 if(target<0)
   return false;
   
 for(int i=0;i<size;i++)
 {
     int rem = target-arr[i];
     if(checksum(rem,arr,size) == true)
     {
         memo[target] =true;
        return true;
     }
        
        
 }
 memo[target]=false;
 return false;
 
}


int main() {
    int a[] = {2,3};
    int b[] = {5,3,4};
    int c[] = {2,4};
    int d[] = {2,3,5};
    int e[] = {7,14};
   cout << checksum(7,a,2)<<endl;
    cout << checksum(7,b,3)<<endl;
    cout << checksum(7,c,2)<<endl;
    cout << checksum(8,d,3)<<endl;
    cout << checksum(300,e,2)<<endl;
	// your code goes here
	return 0;
}
