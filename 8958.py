count=0
check=0
for i in range(int(input())):
    for s in input():
        if s=='O':
            if check>=1:
                check+=1
                count+=check
            else:
                check+=1
                count+=1
        else:
            check=0
            
    print(count)
    count=0
    check=0
            
