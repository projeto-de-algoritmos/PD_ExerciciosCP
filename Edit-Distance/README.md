# Sumário

- [Sumário](#sumário)
- [Edit Distance](#edit-distance)
  - [Entrada](#entrada)
  - [Saída](#saída)
  - [Restrições](#restrições)
  - [Exemplos](#exemplos)
    - [Entrada 1](#entrada-1)
    - [Saída 1](#saída-1)
- [Solução](#solução)

# [Edit Distance](https://cses.fi/problemset/task/1639)

The edit distance between two strings is the minimum number of operations required to transform one string into the other.

The allowed operations are:
- Add one character to the string.
- Remove one character from the string.
- Replace one character in the string.

For example, the edit distance between LOVE and MOVIE is 2, because you can first replace L with M, and then add I.

Your task is to calculate the edit distance between two strings.

## Entrada

The first input line has a string that contains n characters between A-Z.

The second input line has a string that contains m characters between A-Z.

## Saída

Print one integer: the edit distance between the strings.

## Restrições

- 1 ≤ **n,m** ≤ 5000

## Exemplos

### Entrada 1
```
LOVE
MOVIE
```

### Saída 1
```
2
```

# [Solução](./solution.cpp)

EDIT DISTANCE
