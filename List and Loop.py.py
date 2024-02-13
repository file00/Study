# List and Loop
# Given 10 different integers, output the largest of these integers.

#1
number_list = [15, 12, 23, 11, 17, 20, 19, 18, 99, 25]
max = 0
for n in number_list:
    print(n, end = ' ')
    if (max < n):
        max = n
print('\n', max)

#2
number_list =  [99, 32, 10, 26, 82, 77, 63, 15, 64, 51]
max = 0
for n in number_list:
    print(n, end = ' ')
    if (max < n):
        max = n
print('\n', max)