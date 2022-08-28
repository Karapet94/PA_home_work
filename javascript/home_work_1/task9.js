let num1 = 5479;
let s_num1 = num1.toString();
let sum_value = 0;
for (let x of s_num1) {
	sum_value += parseInt(x)
}

console.log(sum_value);
