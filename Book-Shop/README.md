# Sumário

- [Sumário](#sumário)
- [Book-Shop](#book-shop)
  - [Entrada](#entrada)
  - [Saída](#saída)
  - [Restrições](#restrições)
  - [Exemplos](#exemplos)
    - [Entrada 1](#entrada-1)
    - [Saída 1](#saída-1)
- [Solução](#solução)

# [Book-Shop](https://cses.fi/problemset/task/1158)

You are in a book shop which sells n different books. You know the price and number of pages of each book.

You have decided that the total price of your purchases will be at most x. What is the maximum number of pages you can buy? You can buy each book at most once.

## Entrada

The first input line contains two integers n and x: the number of books and the maximum total price.

The next line contains n integers h<sub>1</sub>,h<sub>2</sub>,…,h<sub>n</sub>: the price of each book.

The last line contains n integers s<sub>1</sub>,s<sub>2</sub>,…,s<sub>n</sub>: the number of pages of each book.

## Saída

Print one integer: the maximum number of pages.

## Restrições

- 1 ≤ **n** ≤ 1000
- 1 ≤ **x** ≤ 5×10<sup>5</sup>
- 1 ≤ **h<sub>i</sub>, s<sub>i</sub>** ≤ 1000

## Exemplos

### Entrada 1
```
4 10
4 8 5 3
5 12 8 1
```

### Saída 1
```
13
```

You can buy books 1 and 3. Their price is `4 + 5 = 9` and the number of pages is `5 + 8 = 13`.

# [Solução](./solution.cpp)

Knapsack
