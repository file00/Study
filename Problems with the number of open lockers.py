# Problems with the number of open lockers

# There are 100 lockers (number 1 to 100)
# There are 100 students (number 1 to 100)
# Student N opens or closes the door of the locker N times. -> If the door is open, close it. -> Point!
# Imagine at first all the lockers are closed.
# When all the students are gone, how many lockers are open?
# And, what's the number of the open locker?

n = 100
i = 1
open_lockers = []
while (i ** 2 <= n):
    open_lockers.append(i ** 2)
    i += 1
print('Total number of open lockers = ', len(open_lockers))
print('Each number of the open lockers = ', open_lockers)
