#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    int randomNumber;
    int guessed;
    int number_of_guesses = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // printf("randomNumber = %d\n", randomNumber);

    printf("Guess the number (between 1 and 100): ");

    do
    {
        scanf("%d", &guessed);
        number_of_guesses++;
        if (guessed < randomNumber)
        {
            printf("Hgher number please\n");
        }
        else if (guessed > randomNumber)
        {
            printf("Lower number please.\n");
        }
        else
        {
            printf("Congratulations!\n");
        }
    } while (guessed != randomNumber);
    
    printf("You guessed the number in %d attempts.\n", number_of_guesses);

    return 0;
}
// To play this game, you need to guess a number between 1 and 100.
// If the guessed number is too low, it will display the message "Higher number please".
// If the guessed number is too high, it will display the message "Lower number please".
// If the guessed number is correct, it will display "Congratulations!"
// and show the total number of attempts you made.
//----------------------------------------------------------------------------------------
// এই গেম খেলতে হলে আপনাকে 1 থেকে 100 এর মধ্যে একটি সংখ্যা অনুমান করতে হবে।
// যদি অনুমান করা সংখ্যা কম হয় তাহলে "Hgher number please" মেসেজ দেখাবে।
// যদি অনুমান করা সংখ্যা বেশি হয় তাহলে "Lower number please" মেসেজ দেখাবে।
// যদি অনুমান করা সংখ্যা সঠিক হয় তাহলে "Congratulations!" মেসেজ দেখাবে
// এবং মোট কতবার অনুমান করেছেন তা দেখাবে।
