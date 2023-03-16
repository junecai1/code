# 变成可接收一个或多个数并计算乘积
def mul(*nums):
    if len(nums) == 0: raise TypeError('不能为空值！')
    sum=1
    for n in nums:
        sum=sum*n
    return sum

# def mul(*args):

#     if not args:

#         raise TypeError('不能为空值！')

#     if isinstance(args, str):

#         raise TypeError('请输入数值！')

#     else:

#         mul = 1

#         for i in args:

#             mul *= i

#         return mul


print('mul(5) =', mul(5))
print('mul(5, 6) =', mul(5, 6))
print('mul(5, 6, 7) =', mul(5, 6, 7))
print('mul(5, 6, 7, 9) =', mul(5, 6, 7, 9))
if mul(5) != 5:
    print('测试失败!')
elif mul(5, 6) != 30:
    print('测试失败!')
elif mul(5, 6, 7) != 210:
    print('测试失败!')
elif mul(5, 6, 7, 9) != 1890:
    print('测试失败!')
else:
    try:
        mul()
        print('测试失败!')
    except TypeError:
        print('测试成功!')
