# Finding Prime Numbers or Composite Numbers

# Choose all prime numbers from the following numbers.
# Ex)
n = 15
is_prime = True
for i in range(2, n):
    if (n % i == 0):
        is_prime = False
        break
if (is_prime):
    print(n, 'is a prime number.')
else:
    print(n, 'is a composite number.')
    
#1
numbers1 = [19, 37, 47, 57, 71, 83, 87]
for n in numbers1:
    is_prime = True
    for i in range(2, n):
        if (n % i == 0):
            is_prime = False
            break
    if (is_prime):
        print(n, 'is a prime number.')
    else:
        print(n, 'is a composite number.')

#2
numbers2 = [127, 1023, 2333, 2337, 8191, 10867, 10869]
def isPrime(n):
    for i in range(2, n):
        if (n % i == 0):
            return False
    return True
for n in numbers2:
    if (isPrime(n)):
        print(n, 'is a prime number.')
    else:
        print(n, 'is a composite number.')
