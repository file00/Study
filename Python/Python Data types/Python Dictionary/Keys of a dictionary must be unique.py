# Keys of a dictionary must be unique

hogwarts_houses = {
    "Harry Potter": "Gryffindor",
    "Hermione Granger": "Gryffindor",
    "Ron Weasley": "Gryffindor",
    # duplicate key with a different house
    "Harry Potter": "Slytherin"
}

print(hogwarts_houses)