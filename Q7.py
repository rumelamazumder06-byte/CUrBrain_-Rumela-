import math as m
def convert(arr):
    
    result=arr[0]
    for i in arr[1:]:
        result = m.gcd(result,i)
    print("The gcd is : ", result)
arr=[]
n =int(input("Enter the no of elements in your array:"))
if(n==0):
    print("The array is empty")
    exit()

for i in range(0,n):
    mv=int(input("Enter the element:"))
    arr.append(mv)
convert(arr)