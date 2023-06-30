# Sumário

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
