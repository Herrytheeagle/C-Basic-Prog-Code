#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;



//declaring variables
           int i;
               int scores[531811]; //array for scores of found words
                string wordlist[531811]; //array for found matched words
                     string word[531811]; //array of strings for dictionary words about to be read it
                                             string tester;//string for scrambled letters that will be read in

int scorefinder(string scrab) //SCORE FINDER FUNCTION
{
    int score = 0;
    int x = 0;
    int j = 0;
    while (scrab[j])
    {
        char ltr = toupper(scrab[j]); //converts to all caps

        //assings values to each letter and adds it to itself
        if(ltr == 'A' || ltr == 'E' || ltr == 'I' || ltr == 'L' || ltr == 'N' || ltr == 'O' || ltr == 'R' || ltr == 'S' || ltr == 'T' || ltr == 'U')
            x += 1;
        else if(ltr == 'D' || ltr == 'G')
            x += 2;
        else if(ltr == 'B' || ltr == 'C' || ltr == 'M' || ltr == 'P')
            x += 3;
        else if(ltr == 'F' || ltr == 'H' || ltr == 'V' || ltr == 'W' || ltr == 'Y')
            x += 4;
        else if(ltr == 'K')
            x += 5;
        else if(ltr == 'J' || ltr == 'X')
            x += 8;
        else if(ltr == 'Q' || ltr == 'Z')
            x += 10;
        ++j;
    }
    score = x;
    return score;
}

int main () {

//READS IN DICTIONARY
    ifstream file("words.txt"); //reads in dictionary
    if (!file.is_open()){ //checks if file is being NOT read correctly
        cout << "BROEKN \n"; //prints error message if so
    }
    if(file.is_open()){ //checks if file IS being read correctly
        for(int i = 0; i < 531811; i++){
            file >> word[i]; //read in each word from the file and
        }   //assigns each to it's position in the words array
    }
//END OF READ IN DICTIONARY

    cout << "Enter scrambled letters: ";
    cin >> tester; //reads in scrambled letters

    sort(tester.begin(),tester.end()); //sorts scrambled letters for next_permutation
    while (next_permutation(tester.begin(),tester.end())){  //while there are still permutations available
        for(i=0;i<531811;i++){
            if ( is_permutation (word[i].begin(),word[i].end(), tester.begin())){
                wordlist[i] = word[i]; //assigns found word to foundword array
                scores[i] = scorefinder(word[i]); //assigns found word score to foundscore array
            }
        }
    }

    //PRINTS OUT ONLY MATCHED WORDS AND SCORES
    for(i=0;i<531811;i++){
        if(scores[i]!=0){
            cout << "Found word: " << wordlist[i] << " " << scores[i] << "\n";
        }
    }
}
