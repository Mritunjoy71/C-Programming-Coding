
    #include <stdio.h>
    #include <math.h>

    int main()
    {
        int n, num = 0, i, digits;

        /* Reads a number from user */
        printf("Enter any number to print in words: ");
        scanf("%d", &n);

        digits = (int)log10(n); //Counts total number of digits in n

        /* Finds reverse of the number */
        while(n!=0)
        {
            num = (num * 10) + (n % 10);
            n /=10;
        }

        digits =  digits - ((int)log10(num));  //Counts total number of trailing zeros

        /*
         * Finds last digit of the number and print corresponding number in words
         * till num becomes 0
         */
        while(num!=0)
        {
            switch(num%10)
            {
                case 0: printf("Zero ");
                    break;
                case 1: printf("One ");
                    break;
                case 2: printf("Two ");
                    break;
                case 3: printf("Three ");
                    break;
                case 4: printf("Four ");
                    break;
                case 5: printf("Five ");
                    break;
                case 6: printf("Six ");
                    break;
                case 7: printf("Seven ");
                    break;
                case 8: printf("Eight ");
                    break;
                case 9: printf("Nine ");
                    break;
            }

            num /= 10;
        }

        /* Prints all trailing zeros */
        while(digits)
        {
            printf("Zero ");
            digits--;
        }

        return 0;
    }


