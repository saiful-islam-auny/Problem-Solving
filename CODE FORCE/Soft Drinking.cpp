#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,t_drink,t_slices,t_salt,ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    t_drink = (k*l)/nl;
    t_slices = c*d;
    t_salt = p/np;

    if(t_drink<t_slices && t_drink<t_salt)
    {
        ans = t_drink/n;
    }
    else if(t_slices<t_drink && t_slices<t_salt)
    {
        ans = t_slices/n;
    }
    else
        ans = t_salt/n;

    cout<<ans;

    return 0;
}
