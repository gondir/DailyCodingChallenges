//DailyCodingChallenges

/*GridTraveller(1,1)==>1
GridTraveller(0,1)==>0
GridTraveller(0,1)==>0
GridTraveller(0,8)==>0
GridTraveller(9,0)==>0
GridTravller(3,3)==> ?

GridTraveller(2,3) ==>3 */

#include <iostream>
using namespace std;
int GridTraveller(int m, int n){
    if(m<=0 || n<=0)
    return 0;
    
    if(m==1 && n==1)
        return 1;
        
    return GridTraveller(m-1,n) + GridTraveller(m,n-1);

}

int main() {
    cout << GridTraveller(2,3)<<endl;
    cout << GridTraveller(3,3)<<endl;
    cout << GridTraveller(4,3)<<endl;
    cout << GridTraveller(3,0)<<endl;
	// your code goes here
	return 0;
}
