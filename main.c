#include <stdio.h>
/* Create string to encrypt/decrypt
 encryption; e(x) = (m + k)(mod 26)where key = k, integer
d(c) = (c - k)(mod 26) mod = % in C 
%c tells printf and scanf to convert between ASCII and numbers
c = c-65 convert letter to number i.e. A = 0, B = 1*/

void rotation (char str[], int key);

int main()
{
char str[100];
int key;
scanf("%s", str);
printf("Enter a message:"); // This message gets encrypted.

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




    
  
    
  
