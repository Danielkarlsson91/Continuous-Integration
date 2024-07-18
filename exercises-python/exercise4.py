#Make a program to read an integer greater than 0 from the input and calculate the factorial of the number and print it to the output.

number = int(input("Enter the number: "))

factorial = 1

if(number < 0):
    print("Can't compute factorial for negative numbers")
elif(number < 2):
    print("{}! = {}".format(number, factorial))
else:
    for num in range(number, 1, -1):
        factorial = factorial * num

    print("{}! = {}".format(number, factorial))   