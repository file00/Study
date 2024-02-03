# The Root Formula of a Quadratic Equation

import math

a = (math.sqrt(2) - 1)
b = (3 - math.sqrt(2))
c = math.sqrt(2)

x1 = (-b + ((b ** 2 - 4 * a * c)) ** (0.5)) / (2 * a)
x2 = (-b - ((b ** 2 - 4 * a * c)) ** (0.5)) / (2 * a)
print('x1 =', x1) 
print('x2 =', x2)