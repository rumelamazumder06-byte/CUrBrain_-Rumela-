import math as m
def factor(arr,f):
    ans=[]
    for i in range (1,int(m.sqrt(arr))+1):
        if(arr%i==0):
            ans.append(i)
            if(i!=arr/i):
                ans.append(arr/i)
    ans.sort()
    if(len(ans)<f) or f<1:
        print("-1")
        exit()
    else:
        print(int(ans[f-1]))
   
ans =int(input("Enter the number:"))
f=int(input("Enter the index:"))
factor(ans,f)