#include <iostream>
using namespace std;
//1.)BINARY_SEARCH
/*
int main()
{
    int a[100],n,i,beg,endd,mid,item;

    cout<<"---------BINARY SEARCH-------\n";
    cout<<"\nEnter No of Elements\n";
    cin>>n;

    cout<<"\nEnter the Elements\n";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout<<"\nEnter item you want\n";
    cin>>item;

    beg = 0;
    endd = n;

    mid = (beg + endd)/2;

    while(beg <= endd && a[mid] != item)
    {
        if(a[mid] < item)
            beg = mid + 1;
        else
            endd = mid - 1;
        mid = (beg + endd)/2;
    }

    if(a[mid] == item)
    {
        cout<<"\nElement found at location:\n"<<mid+1;
    }
    else{
        cout<<"Element not found ";
    }
    return 0;
}
*/

//2.) BINARY SEARCH & Operation
