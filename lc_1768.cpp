<<<<<<< Updated upstream
/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/
#include<iostream>


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final = "";
        int i=0;
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()){
                final+=word1[i];
            }
            if(i<word2.length()){
                final+=word2[i];
            }
            i++;
        }
        return final;
        
    }
=======
/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/
#include<iostream>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final = "";
        int i=0;
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()){
                final+=word1[i];
            }
            if(i<word2.length()){
                final+=word2[i];
            }
            i++;
        }
        return final;
        
    }
>>>>>>> Stashed changes
};