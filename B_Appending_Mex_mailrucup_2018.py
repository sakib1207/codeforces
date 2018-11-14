samu = -1 
s = int(input())
a = [int(x) for x in input().split()]
for i in range(s):
    if a[i]<=samu:
        continue
    if a[i]==(samu+1):
        samu+=1 
    else:
        print(i+1)
        break
else:
    print("-1")
