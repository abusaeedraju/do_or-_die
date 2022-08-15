#include<iostream>
using namespace std;
main()
{
    int flag=0,lowest, highest;
    cout<<"Enter two number using space =";
    cin>>lowest>>highest;
    cout<<"Prime numbers between "<<lowest<<" and "<<highest<<" are....";

    while(lowest<highest)
    {
        flag=0;
        if(lowest<=1)
        {
            ++lowest;
            continue;
        }


        for(int i=2; i<=lowest/2; ++i)
        {
            if(lowest%i == 0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            cout<<lowest<<" ";

        }
        ++lowest;
    }
    return 0;
}
