#include <stdio.h>
/* Create string to encrypt/decrypt
 encryption; e(x) = (m + k)(mod 26)where key = k, integer
d(c) = (c - k)(mod 26) mod = % in C 
%c tells printf and scanf to convert between ASCII and numbers
c = c-65 convert letter to number i.e. A = 0, B = 1*/

char str[100]
int key;
printf("Enter a message:", ); // This message gets encrypted.

printf("Enter a Key:", ); // This is the adjustment factor for the roatation. 
scanf("%d", &key); // Enters the 'key' (adjustment factor)

if (char >= 'a' && char <= 'z',){
    char = char + key; //Adds key if letter entered is lower case. 
}


int main()  {
    
    
    return 0;
}
