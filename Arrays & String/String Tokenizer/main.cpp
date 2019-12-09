#include<bits/stdc++.h>
using namespace std;

//Customized function for string tokenizer
char *mystroke(char str[], char delim) {

	//strtic pointer variable initialized with NULL
	static char *input = NULL;
		
	//user must have given a token
	if(str != NULL) input = str;
		
	//if there is no character left
	if(input == NULL) return NULL;

	//Dynamic Array to store original string
	// +1 for the '\0' at thye end
	//Return a word as dynamically allocated word array from my function
	//Read the word from input and strore in output and return the word till delimiter
	char *output = new char[strlen(input) + 1];

	//Iterating over the entire array till i != NULL
	int i;
	for(i=0; input[i] != '\0'; i++) {
		//copying the char into output array 
		if(input[i] != delim) output[i] = input[i];
		else {
			//program now at delim
			output[i] = '\0';
			//pointing next word
			input = input + i + 1;
			return output;
		}
	}

	//Return the last word even if delim is not there
	output[i] = '\0';
	input = NULL;
	return output;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char str[] = "Hi, What's up, How'z it going? Am coding now !";
	//inbuit function for string tokenizer
	char *ptr;
	// ptr = strtok(str, " ,");
	ptr = mystroke(str, ' ');

	

	while(ptr != NULL) {
		cout<<ptr<<endl;
		ptr = mystroke(NULL, ' ');
	}

	return 0;
}