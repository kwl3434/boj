import sys
add=0
count=0
for i in range(int(input())):
    s=sys.stdin.readline().split()
    for j in range(int(s[0])):
        if j+1 <= int(s[0]):
            add+=int(s[j+1])
    avg=add/int(s[0])  
    for j in range(int(s[0])):
        if j+1 <= int(s[0]):
            if avg<int(s[j+1]):
                count+=1
    print("%.3f%%" % ((int(count)/int(s[0]))*100))
    count=0
    add=0
