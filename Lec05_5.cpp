#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(0));
	char sentence[]="Today is rainy day";
	char **words;
	int i, wordNo, letterNo, countWords = 1;
	for (i = 0 ; sentence[i] != 0 ; i++)
		if (sentence[i]  == ' ')
			countWords++;
	words = new char*[countWords];
	for (i = 0 ; i < countWords ; i++)
		words[i] = new char[6];
	for (i = wordNo = letterNo = 0 ; sentence[i] != 0 ; i++){
		if (sentence[i]  == ' '){
			words[wordNo][letterNo] = 0;
			wordNo++;
			letterNo=0;
		}
		else
			words[wordNo][letterNo++] = sentence[i];
	}
	words[wordNo][letterNo] = 0;//To store null character in last word
	for (i = 0 ; i < countWords ; i++)		
		cout << words[i] << '\n';
	return 0;
}
