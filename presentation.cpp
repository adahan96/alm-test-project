#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv){
    int median;
    if(argc % 2 == 0)
        median = atoi(argv[argc/2]);
    else
        median = (atoi(argv[(argc/2)]) +  atoi(argv[(argc/2) + 1])) / 2;
	cout << median;
    return 0; 
}
