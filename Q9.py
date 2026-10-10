import math as m
def isprime(a):
    for i in range(2,int(m.sqrt(a))+1):
        if(a%i==0):
            return False
    return True


def prime(b):
    ans=0
    if(b<2):
        print("2")
        exit()
    b=b+1
    while(True):
        if(isprime(b)):
            ans=b
            print(ans)
            exit()
        else:
            b=b+1
          
prime(int(input("Enter the number:")))
