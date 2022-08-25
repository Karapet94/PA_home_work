#include <iostream>
int main() {   
int x;
std::cout << "Please select length of side of triangle"<<std::endl;
std::cin >> x;
std::cout <<  std::endl;
int y;
y = x;
for (int i = 0; i < x; i++) {  
        for (int j = y; j > 0 ; j--) {           
             std::cout << " ";       
        } 
	for (int k = 0; k<= i * 2; k++){
       	std::cout<< "*";
	      }
	y--;
	std::cout<< std::endl;
}

for (int i = 0; i < x; i++) {  
       	std::cout<< " ";
	for (int k = 1; k < x * 2; k++){
       	std::cout<< "=";
	      }
	y--;
	std::cout<< std::endl;
}   
   
       return 0;
}


