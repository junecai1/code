def fib(n):
        if n==1:
            return 1
        return n*fib(n-1)
def fact(n):
    return fact_iter(n, 1)

def fact_iter(num, product):
    if num == 1:
        return product
    return fact_iter(num - 1, num * product)

print(fib(500))