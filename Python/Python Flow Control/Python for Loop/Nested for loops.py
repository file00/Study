# Nested for loops

# outer loop 
attributes = ['Electric', 'Fast']
cars = ['Tesla', 'Porsche', 'Mercedes']

for attribute in attributes:
    for car in cars:
        print(attribute, car)
    
    # this statement is outside the inner loop
    print("-----")