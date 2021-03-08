Question Link : https://leetcode.com/problems/ugly-number-iii/

//Solution by Amreen

class Solution {
public:
#define ll long long
    ll l1,l2,l3,l4;
    ll gcd(ll a, ll b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    void lcm(ll a, ll b, ll c)
    {
        l1 = (a*b)/gcd(b,a);
        l2 = (b*c)/gcd(c,b);
        l3 = (a*c)/gcd(c,a);
        l4 = l2*a/gcd(l2,a);
    }
    ll factors(ll m, ll a, ll b, ll c)
    {
        ll g = 0;
        g+=m/a;
        g+=m/b;
        g+=m/c;
        g-=m/l1;
        g-=m/l2;
        g-=m/l3;
        g+=m/l4;
        return g;
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        vector<int> v = {a,b,c};
        sort(v.begin(),v.end());
        a = v[0];
        b = v[1];
        c = v[2];
        lcm(a,b,c);
        ll i = a, j = a*n;
        while(i<j)
        {
            ll mi = i+(j-i)/2;
            ll f = factors(mi,a,b,c);
            if(f<n)
                i = mi+1;
            else
                j = mi;
        }
        int ans = i;
        if(i%a !=0 && i%b !=0 && i%c !=0)
            ans = min((i/a)*a,min((i/b)*b,(i/c)*c));
        return ans;
    }
};
