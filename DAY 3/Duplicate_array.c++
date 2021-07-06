#include <iostream>
using namespace std;
int findDuplicate(int *arr, int n)
{
   
    
   int ans=0;
  for(int i=0;i<n;i++){
      
      ans=ans+arr[i];
  }     
  
    int sum= (n-1)*(n-2)/2; // from 0 to n-1 we have n numbers but if we remove 0 we have n-2 numbers to sum formula n*(n+1)/2
    ans=ans-sum;
    return ans;
    
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}