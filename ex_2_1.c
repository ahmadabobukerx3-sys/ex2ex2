/******************
Name:ahmad abu bakr
ID:213109192
Assignment: ex2
*******************/
#include <stdio.h>

/*
///////////////////////
///Seconde Game stuff
#define NUM_OF_BRANDS 5
#define BRANDS_NAMES 15
#define NUM_OF_TYPES 4
#define TYPES_NAMES 10
#define DAYS_IN_YEAR 365
#define addOne  1
#define addAll  2
#define stats  3
#define print  4
#define insights  5
#define deltas  6
#define done  7

char brands[NUM_OF_BRANDS][BRANDS_NAMES] = {"Toyoga", "HyunNight", "Mazduh", "FolksVegan", "Key-Yuh"};
char types[NUM_OF_TYPES][TYPES_NAMES] = {"SUV", "Sedan", "Coupe", "GT"};

void printMenu(){
    printf("Welcome to the Cars Data Cube! What would you like to do?\n"
           "1.Enter Daily Data For A Brand\n"
           "2.Populate A Day Of Sales For All Brands\n"
           "3.Provide Daily Stats\n"
           "4.Print All Data\n"
           "5.Provide Overall (simple) Insights\n"
           "6.Provide Average Delta Metrics\n"
           "7.exit\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
*/
int main() {
    int Equal = 0;
    int sumcheer = 0;
    int sumsmile = 0;
    int try = -1;
    int digitscounter=0 ;
    int choice;
    int ErrorCounter = 0, SmilePosition = 0, CheerPosition = 0, CommaPosition = 0, NumbersValidater = 0, EndOfLinePosition = 0, UpNormality = 0;
    int powerof10 = 1;
    while(1) {
        printf("Choose an option:\n");
        printf("\t1. Happy Face\n");
        printf("\t2. Balanced Number\n");
        printf("\t3. Generous Number\n");
        printf("\t4. Circle Of Joy\n");
        printf("\t5. Happy Numbers\n");
        printf("\t6. Festival Of Laughter\n");
        printf("\t7. Exit\n");

        scanf("%d", &choice);

        if(choice < 1 || choice > 7) {
            printf("This option is not available, please try again.\n");
            continue;
        }

        if(choice == 7) {
            printf("Thank you for your journey through Numeria!\n");
            break;
        }

        if(choice == 1) {  // Happy Face
            char e, n, m;
            int size;

            printf("Enter symbols for the eyes, nose, and mouth:\n");
            scanf(" %c %c %c", &e, &n, &m);

            printf("Enter face size:\n");
            scanf("%d", &size);
            while(size <= 0 || size % 2 == 0) {
                printf("The face's size must be an odd and positive number, please try again:\n");
                scanf("%d", &size);
            }

            // Eyes
            printf("%c", e);
            for(int i = 0; i < size-2; i++) printf(" ");
            printf("%c\n", e);

            // Nose
            for(int i = 0; i < (size-1)/2; i++) printf(" ");
            printf("%c\n", n);

            // Mouth
            printf("\\");
            for(int i = 0; i < size; i++) printf("%c", m);
            printf("/\n");
        }
        else if(choice == 2) {  // Balanced Number
            int num, original, digits = 0, sum1 = 0, sum2 = 0;

            printf("Enter a number:\n");
            scanf("%d", &num);
            while(num <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &num);
            }

            original = num;

            // Count digits
            while(num > 0) {
                digits++;
                num /= 10;
            }

            num = original;
            int half = digits/2;

            // Calculate sums
            for(int i = 0; i < half; i++) {
                sum1 += num%10;
                num /= 10;
            }

            if(digits%2) num /= 10;

            for(int i = 0; i < half; i++) {
                sum2 += num%10;
                num /= 10;
            }

            if(sum1 == sum2)
                printf("This number is balanced and brings harmony!\n");
            else
                printf("This number isn't balanced and destroys harmony.\n");
        }
        else if(choice == 3) {  // Generous Number
            int num, sum = 0;

            printf("Enter a number:\n");
            scanf("%d", &num);
            while(num <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &num);
            }

            for(int i = 1; i < num; i++) {
                if(num%i == 0) sum += i;
            }

            if(sum > num)
                printf("This number is generous!\n");
            else
                printf("This number does not share.\n");
        }
        else if(choice == 4) {  // Circle Of Joy
            int num, rev = 0, temp;
            int is_prime1 = 1, is_prime2 = 1;

            printf("Enter a number:\n");
            scanf("%d", &num);
            while(num <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &num);
            }

            if(num == 1) {
                printf("The circle remains incomplete.\n");
                continue;
            }

            // Reverse number
            temp = num;
            while(temp > 0) {
                rev = rev*10 + temp%10;
                temp /= 10;
            }

            // Check original number
            for(int i = 2; i*i <= num; i++) {
                if(num%i == 0) {
                    is_prime1 = 0;
                    break;
                }
            }

            // Check reversed number
            if(rev < 2) is_prime2 = 0;
            else {
                for(int i = 2; i*i <= rev; i++) {
                    if(rev%i == 0) {
                        is_prime2 = 0;
                        break;
                    }
                }
            }

            if(is_prime1 && is_prime2)
                printf("This number completes the circle of joy!\n");
            else
                printf("The circle remains incomplete.\n");
        }
        else if(choice == 5) {  // Happy Numbers
            int n, current, sum, temp;

            printf("Enter a number:\n");
            scanf("%d", &n);
            while(n <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &n);
            }

            printf("Between 1 and %d only these numbers bring happiness: ", n);

            for(int i = 1; i <= n; i++) {
                current = i;
                while(1) {
                    sum = 0;
                    while(current > 0) {
                        temp = current%10;
                        sum += temp*temp;
                        current /= 10;
                    }
                    if(sum == 1) {
                        printf("%d ", i);
                        break;
                    }
                    if(sum == 4) break;
                    current = sum;
                }
            }
            printf("\n");
        }
        else if(choice == 6) {  // Festival of Laughter
            printf("Enter a smile and cheer number : \n");
            char Phrase[1000];
            //we need the user to give us his input and to reEnter it if its not in a certin style for that we need a while loop

            while ((ErrorCounter != 4) || (NumbersValidater != 2) || (UpNormality != 0)||(Equal!=0)) {
                if (try > 0) {
                    printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
                }
                //filing the array with garbage values to avoid random vlaues so we can manipulate the string each time it restarts
                for (int i = 0; i < 1000; i++) {
                    Phrase[i] = '\0';
                }
                //Restarting the Counters for each new input after reset
                ErrorCounter = 0;
                SmilePosition = 999;// it being 999 is a flag for the machine to know that it has not been set yet , it solves the problem of 0 being a valid value
                CheerPosition = 0;
                CommaPosition = 0;
                NumbersValidater = 0;
                EndOfLinePosition = 0;
                UpNormality = 0;
                digitscounter = 0;
                powerof10 = 1;
                Equal = 0;
                sumsmile = 0;
                sumcheer = 0;
                //we need to store the garbage value \n before any input
                //Phrase[0]=getchar() ;
                //Asking user for input till he clicks Enter
                for (int i = 0; i < 1000; i++) {
                    Phrase[i] = getchar();
                    //breaking mechansim in case of Enter
                    if (Phrase[i] == '\n') {
                        //saving the EndOfLinePosition for later
                        EndOfLinePosition = i;
                        break;
                    }
                }
                //The checking mechansim should recgonize a pattren within the string so we teach it to recgonize "smile:"
                //and recgonize "cheer:" and "," ,and there order in the array

                //smile: detction
                for (int i = 0; i < 1000; i++) {
                    if ((Phrase[i] == 's') && (Phrase[i + 1] == 'm') && (Phrase[i + 2] == 'i') && (Phrase[i + 3] == 'l') && (Phrase[i + 4] == 'e') && (Phrase[i + 5] == ':')) {
                        //here we introduce the Error counter each recgonition earns us a point
                        ErrorCounter++;
                        //here we introduce the Position saver to validate order
                        SmilePosition = i;
                    }
                }
                //comma detction
                for (int i = 0; i < 1000; i++) {
                    if ((Phrase[i] == ',')) {
                        ErrorCounter++;
                        CommaPosition = i;
                    }
                }
                //cheer:detction
                for (int i = 0; i < 1000; i++) {
                    if ((Phrase[i] == 'c') && (Phrase[i + 1] == 'h') && (Phrase[i + 2] == 'e') && (Phrase[i + 3] == 'e') && (Phrase[i + 4] == 'r') && (Phrase[i + 5] == ':')) {
                        ErrorCounter++;
                        CheerPosition = i;
                    }
                }
                //Order validation mechansim
                if ((CommaPosition > SmilePosition) && (CommaPosition < CheerPosition)) {

                    ErrorCounter++;

                }
                //validation of what is in bettwen the "smile:" and "," , and "cheer:" and "\n" ;
                // we need the machine to check what is in bettwen only when it recgonizes the format so it dosent check randomly
                //thus the ErrorCounter must be 4 then and only then what is in bettwen matters

                //"smile:" and "," *in bettwen the array only can hold numbers and " "
                if (ErrorCounter == 4) {
                    for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                        if ((Phrase[i] != '0') && (Phrase[i] != '1') && (Phrase[i] != '2') && (Phrase[i] != '3') && (Phrase[i] != '4') && (Phrase[i] != '5') && (Phrase[i] != '6') && (Phrase[i] != '7') && (Phrase[i] != '8') && (Phrase[i] != '9') && (Phrase[i] != ' ')) {
                            //in Such a case the space bettwen a comma and smile: is unknown
                            //but what is known is the format we need which is only numbers and spaces
                            //so for each wrong char in the array we take 1 from the ErrorCounter so the machine flags an Error
                            // in case of succuess the ErrorCounter remains unchanged
                            ErrorCounter--;
                        }
                    }
                }
                //Edge case would be if there is no numbers in bettwen since spaces are allowed so we fix that by detction for
                //numbers after confirming the format so we introduce a NumbersValidater
                if (ErrorCounter == 4) {
                    for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            NumbersValidater++;
                            //since all is requierd after confirming the format is at least one number exists we close the loop
                            break;
                        }
                    }
                }
                //we do the same for "cheer:" and "\n"
                if (ErrorCounter == 4) {
                    for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                        if ((Phrase[i] != '0') && (Phrase[i] != '1') && (Phrase[i] != '2') && (Phrase[i] != '3') && (Phrase[i] != '4') && (Phrase[i] != '5') && (Phrase[i] != '6') && (Phrase[i] != '7') && (Phrase[i] != '8') && (Phrase[i] != '9') && (Phrase[i] != ' ')) {
                            ErrorCounter--;
                        }
                    }
                }

                if (ErrorCounter == 4) {
                    for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            NumbersValidater++;
                            //since all is requierd after confirming the format is at least one number exists we close the loop
                            break;
                        }
                    }
                }
                //The machine now can recgonize this line and patterns withing the line  "Smile:integer , cheer:integer" in the string Phrase
                // A complication would be if there is more that exists
                // the solution would be for the machine to flag it as an error if something more than the trash we inputed exists
                //so we need a final check for the string before the line starts and after it ends

                //before the line starts check
                if ((ErrorCounter == 4) && (NumbersValidater == 2)) {
                    for (int i = 0; i < SmilePosition; i++) {
                        if ((Phrase[i] == '\0') || (Phrase[i] == '\n')) {

                        }
                        else {
                            //here we introduce for UpNormality check within the string if it exist it will flag it
                            UpNormality++;
                        }
                    }
                }
                //after the line ends check
                if ((ErrorCounter == 4) && (NumbersValidater == 2)) {
                    for (int i = EndOfLinePosition + 1; i < 1000; i++) {
                        if ((Phrase[i] == '\0') || (Phrase[i] == '\n')) {

                        }
                        else {
                            //here we introduce for UpNormality check within the string if it exist it will flag it
                            UpNormality++;
                        }
                    }
                }
                //we need to check if the numbers after smile and after cheer are the same in value
                //if they are we need to flag an error and return the user to reEnter the values.
                //we need to convert the string to an intger so we can compare them
                if ((ErrorCounter == 4)&&(NumbersValidater==2)&&(UpNormality==0)) {
                    for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            digitscounter++;
                        }
                    }
                    for (int i = 0; i < digitscounter-1; i++) {
                        //constructing power of 10
                        powerof10 = powerof10 * 10;
                    }
                    //we know how many are they now we need to run into them 1 by 1 and start multiplying them by 10 to the power of digitscounter-1
                    for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            sumsmile = sumsmile + (Phrase[i] - 48) * powerof10;
                            powerof10 = powerof10 / 10;
                        }
                    }

                }
                digitscounter = 0;
                powerof10 = 1;
                //we need to do the same for cheer
                if ((ErrorCounter == 4) && (NumbersValidater == 2) && (UpNormality == 0)) {
                    for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            digitscounter++;
                        }
                    }
                    for (int i = 0; i < digitscounter - 1; i++) {
                        //constructing power of 10
                        powerof10 = powerof10 * 10;
                    }
                    //we know how many are they now we need to run into them 1 by 1 and start multiplying them by 10 to the power of digitscounter-1
                    for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            sumcheer = sumcheer + (Phrase[i] - 48) * powerof10;
                            powerof10 = powerof10 / 10;
                        }
                    }
                    //here we need to check if the numbers are equal or not
                    //if they are equal we need to flag an error and return the user to reEnter the values.
                    //so we intrduce Equal checker 0 false 1 true
                    if ((sumsmile == sumcheer)) {
                        Equal++;

                    }
                }
                //The checks are over The pattren is set for the machine to detect if it pases all the flags then its valid
                try++;
            }

            int maxnumber = 0;
            printf("Enter the maximum number of the festival:\n");
            scanf("%d", &maxnumber);
            while (maxnumber < 0) {
                printf("Only positive maximum number is allowed, please try again:\n");
                scanf("%d", &maxnumber);
            }



            for (int i = 1; i <= maxnumber; i++)
            {
                if (i % sumsmile == 0 && i % sumcheer == 0)
                {
                    printf("Festival!\n");
                }
                else if (i % sumsmile == 0)
                {
                    printf("Smile!\n");
                }
                else if (i % sumcheer == 0)
                {
                    printf("Cheer!\n");
                }
                else
                {
                    printf("%d\n", i);
                }


            }
        }
    }
//Version 1.0.0
/*
////////////////////////////////////////////////////////////
///Seconde Game
 int cube[DAYS_IN_YEAR][NUM_OF_BRANDS][NUM_OF_TYPES] = {0};
    int days[NUM_OF_BRANDS] = {0};
    int choice2;

    printMenu();
    scanf("%d", &choice2);

    while (choice2 != done) {
        switch (choice2) {
            case addOne: {
                int b_idx;
                scanf("%d", &b_idx);
                if (b_idx < 0 || b_idx >= NUM_OF_BRANDS) {
                    printf("This brand is not valid\n");
                } else {
                    int v1, v2, v3, v4;
                    scanf("%d %d %d %d", &v1, &v2, &v3, &v4);
                    cube[days[b_idx]][b_idx][0] = v1;
                    cube[days[b_idx]][b_idx][1] = v2;
                    cube[days[b_idx]][b_idx][2] = v3;
                    cube[days[b_idx]][b_idx][3] = v4;
                    days[b_idx]++;
                }
                break;
            }

            case addAll: {
                int populated[NUM_OF_BRANDS] = {0};
                int completed = 0;

                while (completed < NUM_OF_BRANDS) {
                    printf("No data for brands");
                    for (int i = 0; i < NUM_OF_BRANDS; i++) {
                        if (!populated[i]) {
                            printf(" %s", brands[i]);
                        }
                    }
                    printf("\nPlease complete the data\n");

                    int b_idx;
                    scanf("%d", &b_idx);

                    // Check for invalid brand or already populated brand
                    if (b_idx < 0 || b_idx >= NUM_OF_BRANDS || populated[b_idx]) {
                        printf("This brand is not valid\n");
                        continue;
                    }

                    int v1, v2, v3, v4;
                    scanf("%d %d %d %d", &v1, &v2, &v3, &v4);
                    cube[days[b_idx]][b_idx][0] = v1;
                    cube[days[b_idx]][b_idx][1] = v2;
                    cube[days[b_idx]][b_idx][2] = v3;
                    cube[days[b_idx]][b_idx][3] = v4;
                    days[b_idx]++;
                    populated[b_idx] = 1;
                    completed++;
                }
                break;
            }

            case stats: {
                // Find the maximum valid day entered so far
                int max_day = 0;
                for (int i = 0; i < NUM_OF_BRANDS; i++) {
                    if (days[i] > max_day) {
                        max_day = days[i];
                    }
                }

                int d;
                printf("What day would you like to analyze?\n");
                scanf("%d", &d);

                while (d <= 0 || d > max_day) {
                    printf("Please enter a valid day.\n");
                    printf("What day would you like to analyze?\n");
                    scanf("%d", &d);
                }

                int d_idx = d - 1;
                int total_sales = 0;
                int brand_sales[NUM_OF_BRANDS] = {0};
                int type_sales[NUM_OF_TYPES] = {0};

                for (int b = 0; b < NUM_OF_BRANDS; b++) {
                    for (int t = 0; t < NUM_OF_TYPES; t++) {
                        int val = cube[d_idx][b][t];
                        total_sales += val;
                        brand_sales[b] += val;
                        type_sales[t] += val;
                    }
                }

                int max_brand_idx = 0;
                for (int b = 1; b < NUM_OF_BRANDS; b++) {
                    if (brand_sales[b] > brand_sales[max_brand_idx]) {
                        max_brand_idx = b;
                    }
                }

                int max_type_idx = 0;
                for (int t = 1; t < NUM_OF_TYPES; t++) {
                    if (type_sales[t] > type_sales[max_type_idx]) {
                        max_type_idx = t;
                    }
                }

                printf("In day number %d:\n", d);
                printf("The sales total was %d\n", total_sales);
                printf("The best sold brand with %d sales was %s\n", brand_sales[max_brand_idx], brands[max_brand_idx]);
                printf("The best sold type with %d sales was %s\n", type_sales[max_type_idx], types[max_type_idx]);
                break;
            }

            case print: {
                printf("*****************************************\n");
                for (int b = 0; b < NUM_OF_BRANDS; b++) {
                    printf("Sales for %s:\n", brands[b]);
                    for (int d = 0; d < days[b]; d++) {
                        printf("Day %d- SUV: %d Sedan: %d Coupe: %d GT: %d\n",
                               d + 1, cube[d][b][0], cube[d][b][1], cube[d][b][2], cube[d][b][3]);
                    }
                }
                printf("*****************************************\n");
                break;
            }

            case insights: {
                int best_brand_sales = -1, best_brand_idx = -1;
                int best_type_sales = -1, best_type_idx = -1;
                int best_day_sales = -1, best_day_idx = -1;

                int total_brand[NUM_OF_BRANDS] = {0};
                int total_type[NUM_OF_TYPES] = {0};
                int total_day[DAYS_IN_YEAR] = {0};

                int max_day = 0;
                for (int b = 0; b < NUM_OF_BRANDS; b++) {
                    if (days[b] > max_day) max_day = days[b];
                }

                for (int b = 0; b < NUM_OF_BRANDS; b++) {
                    for (int d = 0; d < days[b]; d++) {
                        int daily_sum = 0;
                        for (int t = 0; t < NUM_OF_TYPES; t++) {
                            int val = cube[d][b][t];
                            total_brand[b] += val;
                            total_type[t] += val;
                            daily_sum += val;
                        }
                        total_day[d] += daily_sum;
                    }
                }

                for (int b = 0; b < NUM_OF_BRANDS; b++) {
                    if (total_brand[b] > best_brand_sales) {
                        best_brand_sales = total_brand[b];
                        best_brand_idx = b;
                    }
                }

                for (int t = 0; t < NUM_OF_TYPES; t++) {
                    if (total_type[t] > best_type_sales) {
                        best_type_sales = total_type[t];
                        best_type_idx = t;
                    }
                }

                for (int d = 0; d < max_day; d++) {
                    if (total_day[d] > best_day_sales) {
                        best_day_sales = total_day[d];
                        best_day_idx = d;
                    }
                }

                printf("The best-selling brand overall is %s: %d$\n", brands[best_brand_idx], best_brand_sales);
                printf("The best-selling type of car is %s: %d$\n", types[best_type_idx], best_type_sales);
                printf("The most profitable day was day number %d: %d$\n", best_day_idx + 1, best_day_sales);
                break;
            }

            case deltas: {
                for (int b = 0; b < NUM_OF_BRANDS; b++) {
                    if (days[b] <= 1) {
                        printf("Brand: %s, Average Delta: 0.000000\n", brands[b]);
                    } else {
                        double total_delta = 0;
                        for (int d = 0; d < days[b] - 1; d++) {
                            int sum_today = 0;
                            int sum_tomorrow = 0;
                            for (int t = 0; t < NUM_OF_TYPES; t++) {
                                sum_today += cube[d][b][t];
                                sum_tomorrow += cube[d + 1][b][t];
                            }
                            total_delta += (sum_tomorrow - sum_today);
                        }
                        double avg_delta = total_delta / (days[b] - 1);
                        printf("Brand: %s, Average Delta: %f\n", brands[b], avg_delta);
                    }
                }
                break;
            }

            default:
                printf("Invalid input\n");
        }

        printMenu();
        scanf("%d", &choice2);
    }

    printf("Goodbye!\n"); */
















    return 0;
}