#include <iostream>
using namespace std;


int EditDistance(string s1, string s2, int m, int n)
{
	
	
	int DP[m+1][n+1];
	for(int i=1;i<=m;i++)
	{
		DP[i][0] = i;
		
	}
	
	for(int j=1;j<=n;j++)
	{
		DP[0][j] = j;
	}
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1 ;j<=n;j++)
		{
			if(s1[i-1] == s2[j-1]
				DP[i][j] = DP[i-1][j-1]
			else
				DP= 1 + min{DP[i-1][j],DP[i],j-1],DP[i-1][j-1]};
		}
		
	}
	
	return DP[m][n];
	
	
	
}