import itertools
import numpy as np

p = [1, 2, 3]

# generate permutations
a = list(itertools.permutations(p))

# convert to numpy array
arr = np.array(a)

for idx, i in enumerate(arr):
    if list(i) == p:
        if idx + 1 < len(arr):
            print(arr[idx + 1])
        else:
            print(arr[0])   # if last permutation
