# list - fruits  , strings with length more than 5 - print on screen

# l=["apple","watermelon","mango","papaya","grapes","guava"]
# for i in l:
#    if len(i)>5:
#     print(i)
    
#l=["apple","watermelon","mango","papaya","grapes","guava"]
#for i in l:
 #   print(i)

# for i in range(1,4):
#     for k in range(1,4):
#         print("*",end="  ")
#     print()


# for i in range(1,5):
#     print("."*i)
# for i in range(3,0,-1):
#     print("."*i)

# for i in "python":
#     print(i)

# for i in range(1,8):
#     if i<=4:
#         print("*"*i)
#     else:
#         print("*"*(8-i))
    
# n=int(input("Enter no. of rows"))
# for i in range(1,n+1):
#     if n%2 != 0:
#         if i<=(n+1)/2:
#             print("*"*i)
#         else:
#             print("*"*(n+1-i))
#     elif n%2==0:
#         if i<=n/2:
#             print("*"*i)
#         else:
#             print("*"*(n-i+1))


# for i in range(1,6):
#     print("square of number",i,"is",i*i)

# l=[2,4,5,6,7,245,64]
# index=0
# for i in l:
#     print("Element",i,"has index",index)
#     index+=1
    
# n=int(input("Enter no. of rows"))
# for i in range(1,n+1):
#     if n%2 != 0:
#         if i<=(n+1)/2:
#             print("*"*i)
#         else:
#             print("*"*(n+1-i))
#     elif n%2==0:
#         if i<=n/2:
#             print("*"*i)
#         else:
#             print("*"*(n-i+1))

#NESTED LIST

#A alphabet pattern through stars

# result=""
# for row in range(0,7):
#     for coloumn in range(0,7):

#         if (((coloumn==1 or coloumn == 5)and row !=0) or ((row ==0 or row==3)and (coloumn>1 and coloumn <5 ))):
#             result=result + "*"
#         else:
#             result=result + " "
#     result=result + "\n"
# print(result)

s="search ess instititute"
# print(s.split()[1])
print(s.partition(" ")[-1])