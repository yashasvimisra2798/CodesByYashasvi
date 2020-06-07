# Given an array, X, of N integers, calculate and print the respective mean, median, and mode on separate lines.
# If your array contains more than one modal value, choose the numerically smallest one.

# Sample Input

# 10
# 64630 11735 14216 99233 14470 4978 73429 38120 51135 67060
# Sample Output

# 43900.6
# 44627.5
# 4978

# CODE:-

import numpy as np
from scipy import stats

size = int(input())
numbers = list(map(int, input().split()))
print(np.mean(numbers))
print(np.median(numbers))
print(int(stats.mode(numbers)[0]))
