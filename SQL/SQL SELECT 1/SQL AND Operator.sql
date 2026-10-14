-- [Title] SQL AND Operator
-- select the first_name and last_name of all customers
-- who live in 'USA' and have the last name 'Doe'

SELECT first_name, last_name
FROM Customers
WHERE country = 'USA' AND last_name = 'Doe';