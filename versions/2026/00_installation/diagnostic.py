def function(numbers):
    x = 0

    for num in numbers:
        x += num

    return x, len(numbers)

numbers = [1, 2, 3, 4, -1, -2,-1]

result = function(numbers)
print(result)