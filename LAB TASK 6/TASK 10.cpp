#include<stdio.h>
int main(){
	char username[21];
	int i=0;
	int vowels=0;
	int consonants=0;
	
	printf("Enter username (up to 20 characters) : ");
	scanf("%20s",username);
	
	while(username[i]!='\0'){
		char ch = username[i];
		
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        
    if (username[i] >= 'a' && username[i] <= 'z') {
            username[i] = username[i] - 32;
	}
	
	i++;
	
	}
	
	printf("Vowel Count     : %d\n", vowels);
    printf("Consonant Count : %d\n", consonants);
    printf("Uppercase Output: %s\n", username);

    return 0;
}

