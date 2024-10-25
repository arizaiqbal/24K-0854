#include <stdio.h>

int main() {
    char str[100];
    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(str);  

    while (str[i]!= '\0') { 
        switch (str[i]) {
            case 'A': case 'a':
                aCount++;
                break;
            case 'E': case 'e':
                eCount++;
                break;
            case 'I': case 'i':
                iCount++;
                break;
            case 'O': case 'o':
                oCount++;
                break;
            case 'U': case 'u':
                uCount++;
                break;
        }
        i++;  
    }

    printf("a=%d, e=%d, i=%d, o=%d, u=%d\n", aCount, eCount, iCount, oCount, uCount);
    return 0;
}
