#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define ALL(a) (a).begin(), (a).end()
const int mod = 1000000007;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tc\
    int t;\
    cin>>t;\
    while(t--)
void takeinput(){
    #ifndef ONLINE_JUDGE
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
void sk(){
    // Your code goes here
    /*
    for calculating nth fibanocci number in O(1) when n<72 ,
    f(n) = ((pow((1 + sqrt(5)), n)) - (pow((1 - sqrt(5)), n))) /( pow(2, n) * (sqrt(5)));
    binet's formula can be used.
    */
    ll n;
    cin >> n;
    ll nthFib = ((pow((1 + sqrt(5)), n)) - (pow((1 - sqrt(5)), n))) / (pow(2, n) * (sqrt(5)));
    cout << nthFib;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
    sk();
    return 0;
}