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
/*
Given an array of integers and a number k,
find the maximum sum of a subarray of size k.
*/
void sk() {
    // Your code goes here
    ll n; cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll k; cin >> k;
    int maxSum = 0;
    for (int i=0; i<k; i++) maxSum += arr[i];
    int sum = maxSum;
    for (int i=k; i<n; i++)
    {
       sum += arr[i] - arr[i-k];
       maxSum = max(maxSum, sum);
    }
    cout<< maxSum;
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