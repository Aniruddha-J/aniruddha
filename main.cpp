#include <iostream>

using namespace std;
/*
}*/

int main()
{
    int n,s,x,y,p,q,r;
    cout<<"enter the no.";
    cin>>n;
    while(n!=0)

    {
        cout<<"enter the"<<n<<"th set of numbers \n";
     cin>>x>>y;

        p=reverse(x);
        q=reverse(y);
        r=p+q;
        s=reverse(r);
        cout<<s<<endl;

        n--;

    }

    return 0;
}
