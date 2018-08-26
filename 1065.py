count=0
for i in range (int(input())):
    if i+1<100:
        count+=1
    if i+1==1000:
        break
    if i+1>=100:
        S=str(i+1)
        if (int(S[0])-int(S[1]))==(int(S[1])-int(S[2])):
            count+=1
print(count)
