# L = []
# n = 1
# while n <= 99:
#     L.append(n)
#     n += 2
# # print(L[-99::2])

# for i in range(5):
    # print(L[i])

# def trim(s):
#     if s:
#         while len(s) > 0 and s[0] == ' ':
#             s=s[1:]
#         while len(s) > 0 and s[-1] == ' ':
#             s=s[:-1]
#     return s

# if trim('hello  ') != 'hello':
#     print('测试失败!')
# elif trim('  hello') != 'hello':
#     print('测试失败!')
# elif trim('  hello  ') != 'hello':
#     print('测试失败!')
# elif trim('  hello  world  ') != 'hello  world':
#     print('测试失败!')
# elif trim('') != '':
#     print('测试失败!')
# elif trim('    ') != '':
#     print('测试失败!')
# else:
#     print('测试成功!')


# L = [1]
# n = 1
# while n <= 99:
#     L.append(n)
#     n = n + 2

D = {'a': 1, 'b': 2, 'c': 3}
C=" I love China"
# for v,k in D.items():
#     print(D)
# for C in C:
#     print(C)

# def findMinAndMax(L):
#     if len(L) == 0:
#         return (None, None)
#     for i in L:
#         if len(L) == 1:
#             return (i,i)
#         else:
#             i_max=max(L)
#             i_min=min(L)
#     return (i_min, i_max)

# if findMinAndMax([]) != (None, None):
#     print('测试1失败!')
# elif findMinAndMax([7]) != (7, 7):
#     print('测试2失败!')
# elif findMinAndMax([7, 1]) != (1, 7):
#     print('测试3失败!')
# elif findMinAndMax([7, 1, 3, 9, 5]) != (1, 9):
#     print('测试4失败!')
# else:
#     print('测试成功!')

