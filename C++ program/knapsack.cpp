/* A Naive recursive implementation of
0-1 Knapsack problem */
#include <bits/stdc++.h>
using namespace std;


int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{

	if (n == 0 || W == 0)
		return 0;

	
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

int main()
{
  int a,b;
  cin>>a>>b;
	int val[a];
  int wt[b];
  for(int i=0;i<n;i++)
  {
    cin>>val[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>wt[i];
  }
	int W;
  cin>>W;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n);
	return 0;
}



