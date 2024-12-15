
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define ipair pair<int,int>
#define llpair pair<ll,ll>
#define dblpair pair<double,double>
#define vpi vector< pair<int,int> >
#define vpll vector< pair<ll,ll> >
#define li list<int> 
#define lill list<long long int>
#define lid list<double>
#define loopi(i,a,n) for(int i=a;i<n;i++)
#define loopl(i,a,n) for(ll i=a;i<n;i++)

#define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
#define lcm(aaa, aaaa) (abs((aaa)*(aaaa))/gcd(aaa, aaaa))

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define sz(x) x.size()
#define sqr(a) ((a) * (a))
const ll MOD = 1e9+7;

#define TestCase() int tc;cin >> tc; while(tc--)
#define fasterIO() ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define openFile() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define noScientific() cout.setf(ios::fixed)

using namespace std;

int prime_number(ll num) {

   if(num == 1 || (num%2==0 && num!=2) ) {
      return 0;
   }
   else {
      for(int i=3;i<=sqrt(num);i+=2) {
         if(num % i == 0 ) {
            return 0;
         }
      }
   }

   return 1;

}

int bin_exponentiation(int base, int power) {
    int res = 1;
    //Time Complexity --- 0(log(n))
    while(power) {
        if(power%2) {
            res = (res * base) % MOD;
            power--;
        }
        else {
            base = (base * base) % MOD;
            power /=2;
        }
    }
    return res;

}

int palindrome(vi &ar, int elm) {
   bool flag=true;

   for(int i=0;i<(elm/2);i++) {
      if(ar[i] != ar[elm-i-1]) {
         flag = false;
         break;
      }
   }

   if(!flag) return 0;

   return 1;
}
const int N = 1e5;
struct Queue {
   int a[N];
   int start = 1, end =0;

   void push(int x) {
      a[++end] = x;
   }

   void pop() {
      if(start>end) cout<<"Queue is empty!!\n";
      start++;
   }

   int front() {
      if(start>end) {
         cout<<"Queue is empty!!\n";
         return 0;
      }

      return a[start];

   }

   int back() {
      if(start>end) {
         cout<<"Queue is empty!!\n";
         return 0;
      }

      return a[end];
   }

   int size() {
      return end-start+1;
   }

   bool empty() {
      return start > end;
   }

};

int main() {
   fasterIO();
   Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  cout << q.front() << '\n'; // Output: 10
  cout << q.back() << '\n'; // Output: 30
  q.pop();
  cout << q.front() << '\n'; // Output: 20
  cout << q.back() << '\n'; // Output: 30
  q.pop();
  cout << q.front() << '\n'; // Output: 30
  cout << q.back() << '\n'; // Output: 30
  q.pop();
  cout << q.front() << '\n'; 
  cout << q.back() << '\n'; 
  q.pop(); 
   
   
   return 0;
}