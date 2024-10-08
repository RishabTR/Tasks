#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1e7 + 1;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define IMAX 2e18
#define IMIN -2e18

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void onlinejudge()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  fast_cin();
}

void swap(char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
struct Node
{
  int data;
  struct Node *next;
};

void append(struct Node **head, int data)
{
  struct Node *nn = new Node;
  nn->data = data;
  nn->next = NULL;
  struct Node *last = *head;
  if (*head == NULL)
  {
    *head = nn;
    return;
  }
  while (last->next != NULL)
  {
    last = last->next;
  }
  last->next = nn;
  return;
}

void display(struct Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

void merge(vector<int>& arr,int l,int m,int h)
{
  vector<int> temp;
  int left = l,right = m+1;
  
  while(left<=m && right<=h){
    // int first = arr[left],sec = arr[right];
    if(arr[left] <= arr[right]){
      temp.push_back(arr[left++]);
    }
    else{
      temp.push_back(arr[right++]);
    }
  }
  while(left<=m){
    temp.push_back(arr[left++]);
  }
  while(right<=h){
    temp.push_back(arr[right++]);
  }

  for(int i = l ; i<=h;i++){
    arr[i] = temp[i-l];
  }
}

void mergeSort(vector<int> &arr,int l , int r)
{ 
  
  if(l>=r) return;
  int mid = l + (r-l)/2;
  mergeSort(arr,l,mid);
  mergeSort(arr,mid+1,r);
  merge(arr,l,mid,r);

}
/* Driver program to test above functions */

int main()
{
  onlinejudge();

  // string s1;
  // cin >> s1;
  int m, n;
  cin >> m ;

  vector<int> arr1(m);
  for (int i = 0; i < m; i++)
  {
    int data;
    cin >> data;
    arr1[i] = data;
  }
  // vector<int> arr2(n);
  // for (int i = 0; i < n; i++)
  // {
  //   int data;
  //   cin >> data;
  //   arr2[i] = data;
  // }

  mergeSort(arr1,0,m-1);

  return 0;
}