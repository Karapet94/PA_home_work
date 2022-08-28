x = int(input("Please select length of side of triangle "))
y = x
for i in range(x):
    print(" " * y, "*" * ((i*2)+1) if i else "*")
    y -=1
