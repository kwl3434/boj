S=''
for i in input().split():
    S+=i
if S=="12345678":
    print("ascending")
elif S=="87654321":
    print("descending")
else:
    print("mixed")
