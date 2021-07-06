#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    
    
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int j=0,i=0;
    
          while(i<n&& j<m)
    {
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                i++;
                j++;
                
            }
     } 
       
        
        
        
    // complexity nlogn+ mlogm(for sorting) + O(m+n)
    
    
    
    
    
    
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}