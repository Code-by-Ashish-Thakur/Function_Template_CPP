/*ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
 धियो यो नः प्रचोदयात॥*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

/*@ashish thakur */

vector<int> KMP(string s)
{
    int n = s.size(), len = 0, i = 1;
    vector<int> lps(n, 0);
    while (i < n)
    {
        if (s[i] == s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len > 0)
                len = lps[len - 1];
            else
                i++;
        }
    }

    return lps;
}

int main()
{

    return 0;
}