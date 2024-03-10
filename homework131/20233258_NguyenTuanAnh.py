# 13.1.01
"""n = int(input())
res = 1
for i in range(1,n+1,1):
    res = res * i
print(res)"""

# 13.1.02
"""res = int(1)
n = int (input())
x = int (input())
for i in range(1, n + 1):
    res =  res * x
print(res)"""

# 13.1.03
"""n = int(input())
res = float(1)
for i in range(2, 2*n+1, 2):
    res = res + 1.0/i
print(res)"""

# 13.1.04
"""n = int(input())
i = int(2)
f = int(1)
while (i * i <= n) & (f ==  1):
    if  n % i == 0:
        print(n,"khong phai so nguyen to")
        f = 0
    i = i + 1
if f == 1:
    print(n,"la so nguyen to ")"""

# 13.1.05
"""n = int(input())
k = int(input())
tu = int(1)
for i in range(k+1, n+1, 1):
    tu =  tu * i
for i in range(1, n-k+1, 1):
    tu = tu / i
print(int(tu))"""

#13.1.06
"""f = []
for i in range(0,8,1):
    f.append(0)
d = 7
n = int(input())
print("ma thap phan cua",n,"la :")
while  d >= 0:
    f[d] = n % 2
    n = int (n / 2)
    d = d - 1
for i in f:
    print(i, end="")"""

#13.1.07
"""mn = int(100000)
mx = int(-100000)
f = 1
while f == 1:
    x = int(input())
    if x == 0 :
        break
    mn = min(mn,x)
    mx = max(mx,x)
print ("so lon nhat la :",mx)
print("so be nhat la :", mn)"""

#13.1.08
"""cnt_c = int(0)
cnt_l = int(0)
cnt_8 = int(0)
f = 1
while f == 1:
    x = int(input())
    if x == 0:
        break
    if x % 2 == 0:
        cnt_c = cnt_c + 1
        if x % 8 == 0:
            cnt_8 += 1
    else :
        cnt_l += 1
print("so so chan la :",cnt_c)
print("so so le la :",cnt_l)
print("so so chia het cho 8 la:", cnt_8)

"""

#13.1.10
"""f1 = int(0)
f2 = int(1)
n = int(input())
while f2 < n:
    f2 = f2 + f1
    f1 = f2 - f1
    if f2 == n:
        print(n,"nam trong day fibonacci")
        f2 = 0
if f2 != 0:
    print(n,"khong thuoc day fibonacci")"""

#13.1.9
"""f1 = int(0)
f2 = int(1)
n = int(input())
print(n,"so dau tien trong day fibonacci:",1, end="")
for i in range (1,n,1):
    f2 = f2 + f1
    f1 = f2 - f1
    print(" ",f2,end="")  """

#13.1.11
"""num =  int(input())
error = 0.00001
s = float(num)
while ((s - num / s) > error):
    s = (s + num / s) / 2
print("can bac hai cua ", num , "la", "{:.8f}".format(s))"""

#13.1.12
"""a = int(input())
b = int(input())
c = int(input())
d = int(input())
num = int (1000*a + 100*b + 10*c + d)
error = 0.00001
s = float(num)
while ((s - num / s) > error):
    s = (s + num / s) / 2
print("can bac hai cua ", num , "la", "{:.8f}".format(s))"""

#13.1.13
"""cnt = int(1)
n = int(input())
m = int(input())
for i in range(0,m,1):
    for i in range(0,n,1):
        print( cnt," ", end="")
        cnt += 1
    print("")"""

#13.1.14
"""f = []
for i in range(0,3,1):
    x = int(input())
    f.append(x)
f.sort()
print("tam giac", end="")
if f[0] + f[1] == f[2]:
    print(" vuong",end="")
if f[0] == f[1] & f[1]!=f[2]:
    print (" can")
elif f[0]==f[2]:
    print(" deu")"""

#13.1.15
"""for i in range(ord('a'), ord('z')+1, 1):
    print(chr(i)," ",i)
for i in range(ord('A'), ord('Z')+1, 1):
    print(chr(i)," ",i)
for i in range(ord('0'), ord('9')+1, 1):
    print(chr(i)," ",i)"""





