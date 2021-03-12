#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[100],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>arr[i];
	}
	for(i=0;i<n/2;i++)
  
{
		int temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
		
	}
	for(i=0;i<n;i++)
{	cout<<arr[i]<<" ";
	}   
	
	
	return 0;
}
