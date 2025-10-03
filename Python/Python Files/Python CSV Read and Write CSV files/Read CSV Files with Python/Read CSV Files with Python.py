# Read CSV Files with Python

import csv

with open(r"people.csv", "r", newline="") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)