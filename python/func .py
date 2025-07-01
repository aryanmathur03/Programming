# def calculator(x,y,opr):
#     if opr=="+":
#         return x+y
#     elif opr=="-":
#         return x-y
#     elif opr=="*":
#         return x*y
#     elif opr=="/":
#         return x/y
#     elif opr=="**":
#         return x**y
#     elif opr=="%":
#         return x%y
#     else:
#         print("Enter a valid operator")


# x=int(input("Enter a number"))
# y=int(input("Ennter 2nd number"))
# opr=input("Enter a operator(+,-,*,/,**,%)")
# output=calculator(x,y,opr)
# print(f"Output of {x} {opr} {y} is {output}")

# x=[1,2,4,[4,5,6,[456,6,7]]]
# print(x[3][3][1])

#   * is arg function
# def add_all(*num):
#     t=0
#     for n in num:
#         t+=n
#     return t

# print(f"The sum of all no. is {add_all(1,2,4,5,6)}")

# def show_details(**details):
#     for key,value in details.items():
#         print(f"{key}:{value}")

# show_details(name="niket",age=22,marks=90,clas="python")

x=(2,5,6,3,5,4,8,6,5)
print(x[1:4])
x.count(5)

