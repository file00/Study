# Read CSV file Having Tab Delimiter
import csv
with open('innovators.csv', 'r') as file:
    reader = csv.reader(file, delimiter = '\t')
    for row in reader:
        print(row)