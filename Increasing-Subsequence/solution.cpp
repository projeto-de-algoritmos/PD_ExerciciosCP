#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()

int lis(const vector<int> &v)
{
  vector<int> res;
  for (auto x : v)
  {
    auto it = lower_bound(all(res), x);
    if (it == res.end())
      res.push_back(x);
    else
      *it = x;
  }
  return (int)res.size();
}

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v) cin >> x;

  cout << lis(v) << '\n';
}

int main(# Sumário

- [Sumário](#sumário)
- [Increasing Subsequence](#increasing-subsequence)
  - [Entrada](#entrada)
  - [Saída](#saída)
  - [Restrições](#restrições)
  - [Exemplos](#exemplos)
    - [Entrada 1](#entrada-1)
    - [Saída 1](#saída-1)
- [Solução](#solução)

# [Increasing Subsequence](https://cses.fi/problemset/task/1145)

You are given an array containing n integers. Your task is to determine the longest increasing subsequence in the array, i.e., the longest subsequence where every element is larger than the previous one.

A subsequence is a sequence that can be derived from the array by deleting some elements without changing the order of the remaining elements.

## Entrada

The first line contains an integer n: the size of the array.

After this there are n integers x<sub>1</sub>,x<sub>2</sub>,…,x<sub>n</sub>: the contents of the array.

## Saída

Print the length of the longest increasing subsequence.

## Restrições

- 1 ≤ **n** ≤ 2×10<sup>5</sup>
- 1 ≤ **x<sub>i</sub>** ≤ 10<sup>9</sup>

## Exemplos

### Entrada 1
```
8
7 3 5 3 6 2 9 8
```

### Saída 1
```
4
```

# [Solução](./solution.cpp)

LIS
)
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t; cin.ignore();
  for (auto i = 1; i <= t; i++)
    solve();

  return 0;
}
