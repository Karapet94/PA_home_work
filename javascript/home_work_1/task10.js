    let  a = 4, b = 5, sum;
    let sign = '*';
    if (sign == '/') {
        if(b == 0) {
            console.log("Division by zero " );
            return;
        }
        sum = a / b;
    } else if (sign == '*') {
        sum = a * b;
    } else if (sign == '+') {
        sum = a + b;
    } else if (sign == '-') {
        sum = a - b;
    } else {
        console.log("Please enter valid operator. + , - , / , * " );
        return;
    }

    console.log("Result is " + sum);
