#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0);
vector<int> prime_factors;
unordered_map<int, int> umap;
void sieve_high_low(int n)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            lp[i] = hp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }
}
// void prime_factorization(int num)//using vector
// {
//     while(num>1)
//     {
//         int prime_factor = hp[num];
//         while(num%prime_factor==0)
//         {
//             num /= prime_factor;
//             prime_factors.push_back(prime_factor);
//         }
//     }
// }
void prime_factorization(int num) // using unordered map
{
    while (num > 1)
    {
        int prime_factor = hp[num];
        while (num % prime_factor == 0)
        {
            num /= prime_factor;
            umap[prime_factor]++;
        }
    }
}
int main()
{
    // O(nlogn+logn)
    sieve_high_low(100000000);

    prime_factorization(106006);
    // for (int i = 0; i < prime_factors.size();i++)
    //     cout << prime_factors[i] << " ";
    for (auto it : umap)
    {
        cout << it.first << " " << it.second << endl;
    }
}
