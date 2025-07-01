# class car:
#     def __init__(self,brand,color):
#         self.brand=brand
#         self.color=color

#     def start(self):
#         print(f"{self.brand}{self.color} car is starting")

# my_car= car(["Toyota","audi"],"red")
# my_car.start()


# class student:
#     def __init__(self,name,clas,roll):
#         self.name=name
#         self.clas=clas
#         self.roll=roll
    
#     def show(self):
#         print("name: ",self.name)
#         print("class:",self.clas)
#         print("roll no:",self.roll)

# s1=student("parul","bca",101)
# s1.show()

# class animal:
#     def speak(self):
#         print("Animal is created")

# class dog(animal):
#     def bark(self):
#         print("animal is barking")

# d=dog()
# d.speak()
# d.bark()

class bird:
    def fly(self):
        print("Bird is flying")                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

class penguin(bird):
    def fly(self):
        print("Penguin cant fly")

b1=bird()
p1=penguin()
b1.fly()
p1.fly()