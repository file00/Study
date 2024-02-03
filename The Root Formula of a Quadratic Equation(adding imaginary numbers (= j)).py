# The Root Formula of a Quadratic Equation(adding imaginary numbers (= j))

import math 

a = (1j)
b = (2 - 1j)
c = (-1 -1j)

x1 = (-b + ((b ** 2 - 4 * a * c)) ** (0.5)) / (2 * a)
x2 = (-b - ((b ** 2 - 4 * a * c)) ** (0.5)) / (2 * a)
print('x1 =', x1)
print('x2 =', x2)
