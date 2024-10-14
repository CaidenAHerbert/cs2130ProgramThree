#include <iostream>
#include <string>

std::string generateSequence(){

	std::string result;

	for (int i = 5; i > 0; --i) {
		result.append(i, 'a');
		result.append(i, 'b');
	}

	return result;
}

int main() {
	std::string sequence = generateSequence();
	std::cout << sequence << std::endl;
	return 0;
}
	   
	

	

