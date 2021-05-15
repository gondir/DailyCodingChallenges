// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        if(!S.empty())
        {
        
        for(int i=1;i<S.size();i++)
            S.erase(S.begin()+i);
            
        }
        
         // std::cout<<"New String: "<<S<<std::endl;
          return S;
        // code here
    }
  
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}