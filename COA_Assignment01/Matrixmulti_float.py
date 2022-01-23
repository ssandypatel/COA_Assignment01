# from re import T
import numpy as np
import time
extime = time.time()

n = 128
a = np.random.rand(n, n)
# print(a)
b = np.random.rand(n, n)
# print(b)
result = b*0
# print(result)
meat_time = time.time()
for i in range(n):
    for j in range(n):
        for k in range(n):
            result[i][j] += (a[i][k] * b[k][j])
# result = a.dot(b)
# for r in result:
#     print(r)

meat_time = time.time()-meat_time
extime = time.time()-extime
print("Meat time:")
print(meat_time)
print("Total time:")
print(extime)