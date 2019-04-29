#include <stdio.h>
/* Create string to encrypt/decrypt
 encryption; e(x) = (m + k)(mod 26)where key = k, integer
d(c) = (c - k)(mod 26) mod = % in C 
%c tells printf and scanf to convert between ASCII and numbers
c = c-65 convert letter to number i.e. A = 0, B = 1*/

/*void rotation (char str[], int key);

int main()
{
char str[100];
int key;
scanf("%s", str);
printf("Enter a message:", ); // This message gets encrypted.

scanf("%d", &key);
printf("Enter a Key:" ); // This is the adjustment factor for the roatation. 
 // Enters the 'key' (adjustment factor)

rotation (str, key);
return 0;
}

void rotation (char str[], int key) {
int i = 0;

while (str[i] != 0) {
    if((str[i] + key) >= 65 && (str[i] + key) <=90 ) {
str[i] = str[i] + (key);
}
 else {
    str[i] += (key - 25);
}

i++ ;
}

printf("%s", str);


}
*/

int main() {
    int i, option;
    char str[100];
    
    printf ("Enter a message: \n");
    scanf("%s", str);
    
    printf("Choose from following options: \n");
    printf("1 = Encryption. \n");
    printf("2 = Decryption. \n");
    
    scanf("%d", &option);
    
switch (option) {
    case 1:
        for (i = 0; (i < 100 && str[i] != 0); i++)
        str[i] = str[i] + 4; // 4 is the key for encryption. i.e number of letters message entered moves forward
        printf("Encrypted message: %s\n", str); //Show encrypted message entered.
    break;
        
    case 2: 
        for (i = 0; (i < 100 && str[i] != 0); i++)
        str[i] = str[i] - 4; // 4 is key for decryption. i.e number of letters message entered moves backwards.
        
        printf("Decrypted message: %s\n", str); // shows Decrypted message entered.
        break;
        

    }
 return 0;   
}



    
  
    
  
