//Encryption & Decryption

#include<stdio.h>
int main()
{
    char ar[500], ch;
    int key, i, j, k, choice;

            //take input from user as a sentence
            printf("\n\n");
            printf("Enter Your sentence: ");
            gets(ar);
            //input secret key(1-5)
            printf("Enter Your Secret Key: ");
            scanf("%d",&key);

            //Choose one option
            printf("\nPress one key , what do you want--- \n");
            printf(" 1. Encryption \n 2. Decryption \n");
            scanf("%d",&choice);

            //this condition use for Encryption
        if(choice == 1)
        {
            for(i=0; ar[i] != '\0'; ++i)
            {
                ch = ar[i];
                if(ch >= 'a' && ch <= 'z' )
                {
                    ch += key;
                    if(ch > 'z' )
                        ch = ch - 'z' + 'a' - 1;
                    ar[i] = ch;
                }
                else if(ch >= 'A' && ch <= 'Z' )
                {
                    ch += key;
                    if(ch > 'Z' )
                        ch = ch - 'Z' + 'A' - 1;
                    ar[i] = ch;
                }
            }
            printf("Encryption = %s",ar);
        }

        //This condition use for Decryption
        else if(choice == 2)
        {
            for(j=0; ar[j] != '\0'; ++j)
            {
                ch = ar[j];

                if(ch >= 'a' && ch <= 'z')
                {
                    ch -= key;
                if(ch < 'a' )
                    ch = ch + 'z' - 'a' + 1;
                ar[j] = ch;
                }

                else if(ch >= 'A' && ch <= 'Z')
                {
                    ch -= key;
                    if(ch < 'A')
                        ch = ch + 'Z' - 'A' + 1;
                    ar[j] = ch;
                }
            }
            printf("Decryption = %s",ar);
        }
    return 0;
}
