#!/usr/bin/python3
# Function to check if a number is palindrome
def is_palindrome(n):
    return str(n) == str(n)[::-1]

# Initialize variables to store the largest palindrome and the corresponding factors
largest_palindrome = 0
factor1 = 0
factor2 = 0

# Loop through all 3-digit numbers in descending order
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
            factor1 = i
            factor2 = j

# Print the largest palindrome and save it to a file
print(largest_palindrome)
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
