check=input()
N=check
c=0
s=''
if int(check)<10:
    check='0'+N[0]
    N=check
while s!=check :
    sum=int(N[0])+int(N[1])
    if sum<10 :
        s=N[1]+ str(sum)
    else :
        sum=str(sum)
        s=N[1]+ sum[1]
    c+=1
    N=s
print(c)