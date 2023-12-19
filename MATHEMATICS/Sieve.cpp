/*ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
 धियो यो नः प्रचोदयात॥*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

/*@ashish thakur */

const ll MaxRange = 1000008;
ll prime[MaxRange + 2];
void sieve()
{
    for (ll i = 2; i <= MaxRange; i++)
    {
        if (prime[i] == 0)
        {

            for (ll j = i; j <= MaxRange; j += i)
            {
                if (prime[j] == 0)
                {
                    prime[j] = i;
                }
            }
        }
    }
}

int main()
{

    return 0;
}
