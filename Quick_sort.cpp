#include<iostream>
using namespace std;
void swap(int arr[],int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition (int arr[], int begin, int end)
{
    int pivot = arr[end]; 
	   // pivot
    int i = (begin - 1);  
    for (int j = begin; j <end; j++)
    {
        if (arr[j] <pivot)
        {
            i++; 
           swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    return i+1;
}
void quickSort(int arr[], int begin, int end)
{
	if (begin < end)
	{
		 int pi = partition(arr, begin, end);
quickSort(arr, begin, pi - 1);
        quickSort(arr, pi + 1, end);
	}


}
int main()
{
		//int arr[] = { 4,2,3,6,7,5,39};
	int No_of_array;
	cout<<"how  many numbers do you want to enter:";
	cin>>No_of_array;
	int arr[No_of_array];
	cout<<"Enter numbers:";
	for(int i=0; i<No_of_array;i++)
	{
		cin>>arr[i];
		
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<endl;
quickSort(arr, 0, n-1);
	for (int i = 0; i <No_of_array; i++)
	{
		cout << arr[i] << endl;
	}
}
