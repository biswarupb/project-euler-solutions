/*

Name: Biswarup Bhattacharya
PE Handle: biswarupb
Date: 08 May 2014
Problem: 4

*/

#include <cstdio>
#include <algorithm>
#include <utility>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <fstream>
#define MOD (10e9)+7
#define gc getchar()
#define pc putchar
using namespace std;
typedef long long ll;

//Fast read
inline void read(ll& n)
{
	n = 0;
	char ch = gc; int sign = 1;
	while(ch < '0' || ch > '9'){if(ch == '-') sign = -1; ch = gc; }
	while(ch >= '0' && ch<= '9')
	{
		n = n*10 + ch - '0';
		ch = gc;
	}
	n *= sign;
}

//Fast print
inline void print(ll n)
{
	char ch[15];
	int ind=0;
	if(n<0)
    {
        pc('-');
        n *= -1;
    }
	if(n == 0)
	{
		pc('0');
	}
	while(n > 0)
	{
		ch[ind] = n%10 + '0';
		n /= 10;
		ind++;
	}
	while(ind--) pc(ch[ind]);
	pc('\n');
}

int palin(ll x)
{
    ll d=0;
    ll num=x;
    ll sum=0;
    while(x>0)
    {
        d=x%10;
        sum=(sum*10)+d;
        x=x/10;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}

int main()
{
    ll ans=0;
    for(ll i=100; i<=999; i++)
    {
        for(ll j=100; j<=999; j++)
        {
            if(((palin(i*j))==1) && ((i*j)>ans))
                ans=i*j;
        }
    }
    print(ans);
    return 0;
}
