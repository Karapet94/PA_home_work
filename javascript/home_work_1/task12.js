const x = 5; // Input number 5
let y = x;

for (let i = 0; i < x; i++) {
        let line = '';
        
        for (let j = y; j > 0 ; j--) {           
            line += ' ';
        }

	    for (let k = 0; k<= i * 2; k++){
            line += '*';
        }
        console.log(line);
	    y--;
}
