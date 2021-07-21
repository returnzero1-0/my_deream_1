#include<iostream>

#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{


    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
auto start = high_resolution_clock::now();
    // Insertion Sort Algorithm

    int key,k;

    for(int j=1;j<n;j++)
    {
        key=arr[j];

        k=j-1;

        while(k >- 1 && key<arr[k])
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=key;
    }
auto stop = high_resolution_clock::now();

    cout<<"Sorted Array: ";

    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<" | ";
    }
    


auto duration = duration_cast<microseconds>(stop - start);
//auto duration = duration_cast<milliseconds>(stop - start);
//auto duration = duration_cast<seconds>(stop - start);
//auto duration = duration_cast<seconds>(stop - start);
//auto duration = duration_cast<hours>(stop - start);

cout << "\nTime Taken:"<< duration.count() <<" micro sec" << endl;
   

return 0;
}