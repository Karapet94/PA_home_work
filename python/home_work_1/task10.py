a = int(input('Please enter num: '))
b = int(input('Please enter num: '))
sign = input('Please enter operand: ')

def calculate(a,b,sign):
    if sign == '/':
        if b == 0:
            print('Division by zero')
            return
            sum1 = a/b
    elif sign == '*' :
        sum1 = a * b
    elif sign == '+' :
        sum1 = a + b
    elif sign == '-' :
        sum1 = a - b 
    else:
        print('"Please enter valid operator. + , - , / , * " ')
        return
    print(sum1)

calculate(a,b,sign)
