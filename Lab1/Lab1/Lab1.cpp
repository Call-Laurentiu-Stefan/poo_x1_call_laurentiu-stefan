// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>

int  conv(char c[100]) {
    int s=0, i;
    for (i = 0; i < strlen(c); i++) {
        s = s * 10 + (c[i] - '0');
    }
    return s;
}

int main()
{
    FILE* f = fopen("in.txt", "r");
    if (f == NULL) {
        printf("%s", "Eroare la deschidere");
        return 0;
    }
    int val, sum;
    val = sum = 0;
    
    char buf[200];
    while (val != EOF) {

        val = fscanf(f, "%s", buf);
        int aux = conv(buf);
        sum = sum + aux;
        if (val == EOF) break;
        printf("%s, %d\n", buf, val);
    }
    printf("%d", sum);


    fclose(f);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
