# Nested Conditional Statements

x = 3
y = 4
z = 5
if(x > y):
    if(x > z):
        print('x = ', x)
    else:
        print('z = ', z)
else:
    if(y > z):
        print('y = ', y)
    else:
        print('z = ', z)