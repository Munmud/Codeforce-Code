/*    ABDULLAH AL GHALIB
      Date: 7-8-2020
*/

#include<bits/stdc++.h>

#define ll             long long int
#define pi             (2*acos(0.0))
#define ft             first
#define sd             second
#define pb             push_back
#define sortarr(a)     sort(a,a+n)
#define sortvec(a)     sort(a.begin(),a.end())
#define rev(a)         reverse(a.begin(),a.end())
#define MAX(a, b)      ((a) > (b) ? (a) : (b))
#define MIN(a, b)      ((a) < (b) ? (a) : (b))

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    int n,q,x;
    int a[100005]={0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;
    }
    int even=0,odd=0;
    int four = 0 , two = 0 ;

    for(int i=1; i<=100000; i++)
    {
        if (a[i] >= 4) {
            four+=a[i]/4 ;

        }
        if (a[i] >= 2) two+= a[i]/2 ;

    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        char c;
        int x;

        cin>>c>>x;

        if (c == '+'){
                a[x] ++ ;
                if (a[x]%2 == 0) two++ ;
            if (a[x]%4 == 0) four++ ;
        }
        else {
                a[x]-- ;
            if (a[x]%2 == 1) two-- ;
            if (a[x]%4 == 3) four-- ;
        }

        if (four >=2) cout << "YES" << endl ;
        else if (four >=1 &&  two >=4) cout << "YES" << endl ;
        else cout << "NO" << endl ;
        //cout << four <<  "  " << two  << endl ;






    }

}

int main()
{
    fast();

    int test=1;
    //cin>>test;

    while(test--)
    {
        solve();
    }

    return 0;
}
