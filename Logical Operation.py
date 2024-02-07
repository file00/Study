# Logical Operation
# 1. AND
# 2. OR
# 3. NOT
# -> A Propositional Formula: (p and q) or (p and r) or (not p and q and not r)

# Truth Table

x = True; print(x, not x)
x = False; print(x, not x)

x = True; y = True; print(x, y, x and y)
x = True; y = False; print(x, y, x and y)
x = False; y = True; print(x, y, x and y)
x = False; y = False; print(x, y, x and y)

x = True; y = True; print(x, y, x or y)
x = True; y = False; print(x, y, x or y)
x = False; y = True; print(x, y, x or y)
x = False; y = False; print(x, y, x or y)

# XOR(Exclusive OR)
x = True; y = True; print(x, y, (x or y) and not (x and y))
x = True; y = False; print(x, y, (x or y) and not (x and y))
x = False; y = True; print(x, y, (x or y) and not (x and y))
x = False; y = False; print(x, y, (x or y) and not (x and y))