#!/usr/bin/env python3
"""Fibonacci sequence generator."""

def fibonacci(n):
    """Return the first n terms of the Fibonacci sequence."""
    if n <= 0:
        return []
    if n == 1:
        return [0]
    seq = [0, 1]
    for _ in range(2, n):
        seq.append(seq[-1] + seq[-2])
    return seq

if __name__ == "__main__":
    result = fibonacci(20)
    print(result)
    input("Press Enter to exit...")
