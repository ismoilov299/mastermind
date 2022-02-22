#include <stdio.h>
#include <stdlib.h>     
#include <time.h>       
#include <string.h>
int main (int argc, char* argv[] ) {

   srand (time(NULL));
   
   int c = 0, t = 10;
   int k, indexc, indext;
   int result1 = 0, result2 = 0, num = 0, correct_counter = 0, guess = 0;
   int num1, num2, num3, num4;
   int c1, c2, c3, c4;
   int  var1[] = {rand() % 8, rand() % 8 , rand() % 8, rand() % 8  };
   char str1[] = "-c";
   char str2[] = "-t";
   char guessstr[20];
   


   for (int i = 1; i < argc; i++){   
       result1 = strcmp(str1, argv[i]);
       result2 = strcmp(str2, argv[i]);
       if (result1 == 0){
           indexc = i;
           c = atoi(argv[indexc+1]);
        }

      if (result2 == 0){
           indext = i;
           t = atoi(argv[indext+1]);
        }
    }

    if (c != 0){
        c1 = c/1000;
        c2 = (c -c1*1000)/100;
        c3 = (c -c1*1000 - c2*100)/10;
        c4 = (c -c1*1000 - c2*100 - c3*10);
        var1[0] = c1; var1[1] = c2; var1[2]=c3; var1[3]=c4;
    }
   for (int k=0; k<4; k++){
        
    }
    printf("\n");



    
   for (int k=0; k<t; k++){  
        printf("ROUND %d \n", k+1);  
        int guess_counter = 0, correct_counter = 0, misplaced_pieces = 0, misplaced_pieces2; 
        int guess_count[] = {0, 0, 0, 0};
   
        printf("Enter Your Guess: ");
        scanf("%s", guessstr);
        num = atoi(guessstr);
        if (num == 0){
            printf("Wrong Input!");
        }
        num1 = num/1000;
        num2 = (num -num1*1000)/100;
        num3 = (num -num1*1000 - num2*100)/10;
        num4 = (num -num1*1000 - num2*100 - num3*10);
        int  var2[] = {num1, num2, num3, num4};

        for (int i=0; i<4; i++){
        }

        for (int i = 0; i < 4; i++) {
            if (var1[i]== var2[i]){
            correct_counter++;
            }
        }

        for (int m = 0; m<4; m++){

            for (int j=0; j<4; j++){
                if (var2[m] == var1[j]){
                    guess_count[m]++;
                }
            }    
        }

        for (int l = 0; l<4; l++){
            if (guess_count[l] >=1){
                misplaced_pieces++;
            }  
        }


        misplaced_pieces2 = misplaced_pieces - correct_counter;


        if (correct_counter ==4){
            printf("Congratz! You did it!\n");
            k =11;
        }
        else {
            printf("Well placed pieces: %d \n", correct_counter);
            printf("Misplaced pieces: %d\n\n", misplaced_pieces2);
        }
    
    } 
        
   return 0;
}