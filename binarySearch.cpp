#include<iostream>
using namespace std;

int Bs(int arr[], int n, int x )
{
    int low, mid, high;
    low=0;
    high=n-1;

    while (low<=high)
    {
        mid = (low+high)/2;

        if(arr[mid] == x)
        {
        return mid;
        }
        else if( arr[mid] > x)
        {
            high = mid-1;  
        }  
        else if ( arr[mid] < x)
        {
            low = mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};

    int size = sizeof(arr)/sizeof(int);
    
    int x = 112;

    Bs(arr,size,x);

    int res = Bs(arr,size,x);

    if (res == -1)
    {
        cout << "item is not present";
    }
    else 
    {
        cout<< "item is present at "<<res<< " index";
    }
}
