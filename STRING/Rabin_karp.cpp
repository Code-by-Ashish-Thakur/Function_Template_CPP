/*ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
 धियो यो नः प्रचोदयात॥*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

/*@ashish thakur */

vector<ll> Rabin_Karp(string &t, ll p, ll m)
{

    int T = t.size();
    vector<ll> vec(T);
    vec[0] = 1;
    for (int i = 1; i < (int)vec.size(); i++)
    {
        vec[i] = (vec[i - 1] * p) % m;
    }

    vector<long long> hg(T + 1, 0);
    for (int i = 0; i < T; i++)
    {
        hg[i + 1] = (hg[i] + (t[i] - 'a' + 1) * vec[i]) % m;
    }

    return hg;
}

int main()
{

    return 0;
}