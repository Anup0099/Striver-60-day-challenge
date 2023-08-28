
// A permutation — is a sequence of length n
//  integers from 1
//  to n
// , in which all the numbers occur exactly once. For example, [1]
// , [3,5,2,1,4]
// , [1,3,2]
//  — permutations, and [2,3,2]
// , [4,3,1]
// , [0]
//  — no.

// Polycarp was recently gifted a permutation a[1…n]
//  of length n
// . Polycarp likes trees more than permutations, so he wants to transform permutation a
//  into a rooted binary tree. He transforms an array of different integers into a tree as follows:

// the maximum element of the array becomes the root of the tree;
// all elements to the left of the maximum — form a left subtree (which is built according to the same rules but applied to the left part of the array), but if there are no elements to the left of the maximum, then the root has no left child;
// all elements to the right of the maximum — form a right subtree (which is built according to the same rules but applied to the right side of the array), but if there are no elements to the right of the maximum, then the root has no right child.
// For example, if he builds a tree by permutation a=[3,5,2,1,4]
// , then the root will be the element a2=5
// , and the left subtree will be the tree that will be built for the subarray a[1…1]=[3]
// , and the right one — for the subarray a[3…5]=[2,1,4]
// . As a result, the following tree will be built:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define pb push_back
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define mini(a) (min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a) (max_element((a).begin(), (a).end()) - (a).begin())
typedef vector<ll> vi;

template <class T>
istream &operator>>(istream &stream, vector<T> &v)
{
    for (T &vi : v)
    {
        stream >> vi;
    }
    return stream;
}

vi a;
typedef struct node
{
    int val;
    struct node *left, *right;
} node;

node *create(int l, int r)
{
    ll maxe = -1, maxi = -1;
    for (int i = l; i <= r; ++i)
    {
        if (a[i] > maxe)
        {
            maxe = a[i];
            maxi = i;
        }
    }
    if (maxe == -1)
        return NULL;
    else
    {
        node *n = new node;
        n->val = maxe;
        n->left = create(l, maxi - 1);
        n->right = create(maxi + 1, r);
        return n;
    }
}

void trav(node *n, int x, vi &vals)
{
    vals[n->val] = x;
    if (n->left != NULL)
        trav(n->left, x + 1, vals);
    if (n->right != NULL)
        trav(n->right, x + 1, vals);
}

void solve()
{
    ll n;
    cin >> n;
    a = vi(n);
    cin >> a;
    node *root = new node;
    root->val = maxe(a);
    ll i = maxi(a);
    root->left = create(0, i - 1);
    root->right = create(i + 1, n - 1);
    vi vals(n + 1, 0);
    trav(root, 0, vals);
    for (int i = 0; i < n; i++)
    {
        cout << vals[a[i]] << ' ';
    }
    cout << nl;
}

signed main()
{

    int T = 1;
    cin >> T;
    for (int ttt = 1; ttt <= T; ttt++)
        solve();
    return 0;
}