# String Matching

We assume that the text is an array $T[1..n]$ of length $n$ and that the pattern is an array $P[1..m]$ of length $m \leq n$. We further assume that the elements of $P$ and $T$ are characters drawn from a finite alphabet $∑$.

We say that pattern $P$ **occurs with shift $s$** in text $T$ (or, equivalently, that pattern $P$ **occurs beginning at position $s + 1$** in text $T$) if $0 \leq s \leq n-m$ and $T[s+1..s+m] = P[1..n]$. If $P$ occurs with shift $s$ in $T$, then we call $s$ a **valid shift**; otherwise, we call $s$ an **invalid shift**.

The **string-matching problem** is the problem of finding all valid shifts with which a given pattern P occurs in a given text T.

### Notation and Terminology

We denote by $∑^\*$ (read "sigma-star") the set of all finite-length strings formed using characteres from the alphabet $∑$. The zero-length **empty string**, denoted $\epsilon$, also belongs to $∑^*$. The length of a string $x$ id denoted $|x|$. The **concatenation** of two strings $x$ and $y$, denoted $xy$, has length $|x|+|y|$ and consists of the characters from $x$ followed by the characters from $y$.

We say that a string $w$ is a **prefix** of a string $x$, denoted $w \sqsubset x$, if $x = wy$ for some string $y \in ∑^\*$. Note that if $w \sqsubset x$, then $|w| \leq |x|$. Similarly, we say that a string $w$ is a **suffix** of a string $x$, denoted $w \sqsupset x$, if $x = yw$ for some $y \in ∑^\*$. As with a prefix, $w \sqsupset x$ implies $|w| \leq |x|$.

### *Overlapping-Suffix Lemma*

Suppose that $x$, $y$ and $z$ are strings such that $x \sqsupset z$ and $y \sqsupset z$. If $|x| \leq |y|$, then $x \sqsupset y$. If $|x| \geq |y|$, then $y \sqsupset x$. If $|x| = |y|$, then $x = y$.

## Bibliography

Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2022). Introduction to algorithms. MIT press.