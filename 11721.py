s=input()
x=0
for i in range(len(s)):
    if x==10:
        print()
        x=0
    x=x+1
    print(s[i],end='')