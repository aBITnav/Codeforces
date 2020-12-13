n=int(input())
num=1
den=1
for i in range(11):
	num*=(n-i-1)
	den*=(i+1)
print(num//den)