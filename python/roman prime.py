# def roman(num):
#     rom=""
#     if num==100:
#         rom=="C"
#         num-=100
#     if num>=90:
#         rom+="XC"
#         num-=90
#     elif num>=50:
#         rom+="L"
#         num-=50
#     elif num>=40:
#         rom+="XL"
#         num-=40
#     while num>=10:
#         rom+="X"
#         num-=10
#     if num==9:
#         rom+="IX"
#         num-=9
#     elif num>=5:
#         rom+="V"
#         num-=5
#     elif num==4:
#         rom+="IV"
#         num-=4
#     while num>=1:
#         rom+="I"
#         num-=1
#     return rom

# num=int(input("Enter a number"))
# a=roman(num)
# print(a)

#PRIME NUMBER

#Prime number & Check
      
def prime_check(num):
    flag=False
    if num==0 or num==1:
        print("Composite number")
    elif num>=1:
        for i in range(2,num):
            if num%i==0:
                flag=True
                break
        if flag:
            print(num,"is not a prime number")
        else:
            print(num,"is a prime number")

        

num=int(input("Enter a number"))
a=prime_check(num)

def prime_check(num):
    flag=False
    if num==0 or num==1:
        print("Composite number")
    elif num>=1:
        for i in range(2,num):
            if num%i==0:
                flag=True
                break
    return flag
           
                


def printprime():
    n=int(input("Enter till u want prime number"))
    for i in range(2,n) :
        if not prime_check(i) :
            print(i)

printprime()