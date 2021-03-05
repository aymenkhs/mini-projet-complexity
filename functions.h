#ifndef base
#define base

// structur to store the results of the time execution
typedef struct StoreTime StoreTime;
struct StoreTime
{
	long num; // the size of the table 
    double time_ordered; // time to sort a list in good order
    double time_inverse; // time to sort a list in inverse order
    double time_random; // time to sort a random list
};


// time measurement functions
double * tab_execution(int * (* function)(long), long * tab1);
double execution_time(int * (* function)(long), long n);

// tables generation
long * generer_bon_ordre(long n);
long * generer_ordre_inverse(long n);
long * generer_random(long n);

// ecrire les resultats dans un fichier csv
writeCSV(int * tab1, double * results_part1, double * results_part2, double * results_part3)

#endif // base
