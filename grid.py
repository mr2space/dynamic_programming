def gridpath(m,n):
    if m==1 and n==1:
        return 1
    if m==0 or n==0:
        return 0
    return gridpath(m-1,n) + gridpath(m,n-1)



def gridPathSmall(m,n,memo={}):
    key = f"{m},{n}"
    if key in memo:
        return memo[key]
    if m == 1 and n == 1:
        return 1
    if m == 0 or n == 0:
        return 0
    memo[key]=gridPathSmall(m-1, n,memo) + gridPathSmall(m, n-1,memo)
    return memo[key]
    
m = int(input("enter: "))
n = int(input("enter: "))
result=gridPathSmall(m,n)
print(result)