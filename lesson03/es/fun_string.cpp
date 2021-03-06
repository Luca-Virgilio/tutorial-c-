#include "fun_string.h"
#include <iostream>

using namespace std;

void print_char(char *word)
{
    if (word != NULL)
    {

        while (*word != '\0')
        {
            cout << *word << endl;
            word++;
        }
    }
    else
    {
        cout << "null pointer" << endl;
    }
}

int string_length(char *word)
{
    int length = 0;
    if (word != NULL)
    {
        while (*word != '\0')
        {
            length++;
            word++;
        }
        return length;
    }
    else
    {
        cout << "null pointer" << endl;
    }
}

void inverse(char *word)
{
    // not neccessary
    char *p_start = word;
    if (p_start != NULL)
    {
        char *p_end = p_start + string_length(p_start) - 1;
        char temp;
        while (p_end - p_start != 0 && p_end - p_start != 1)
        {
            temp = *p_start;
            *p_start = *p_end;
            *p_end = temp;
            p_end--;
            p_start++;
        }
        p_start = NULL;
        p_end = NULL;
    }
    else
    {
        cout << "null pointer" << endl;
    }
}

char *copy(char *word)
{
    if (word != NULL)
    {
        int len = string_length(word);
        // char copy[len];
        char *p_copy;
        // array allocated dinammically
        p_copy = new char[len];
        for (int i = 0; i < len; i++)
        {
            p_copy[i] = *(word + i);
        }
        return p_copy;
    }
    else
    {
        cout << "null pointer" << endl;
        return NULL;
    }
}

char *concat(char *word1, char *word2)
{
    if (word1 != NULL && word2 != NULL)
    {
        int size = string_length(word1) + string_length(word2);
        char *p_res;
        // array allocated dinammically
        p_res = new char[size];
        char *res = p_res;
        while (*word1 != '\0')
        {
            *res = *word1;
            res++;
            word1++;
        }
        while (*word2 != '\0')
        {
            *res = *word2;
            res++;
            word2++;
        }
        return p_res;
    }
    else if (word1 != NULL)
    {
        char *res = copy(word1);
        return res;
    }
    else if (word2 != NULL)
    {
        char *res = copy(word2);
        return res;
    }
    else
        return NULL;
}

bool equals(char *p, char *token)
{
    if (token != NULL && p != NULL)
    {
        bool res = true;
        int len = string_length(token);
        for (int i = 0; res && i < len; i++)
        {
            if (*(p + i) != *(token + i))
                res = false;
        }
        return res;
    }
    else
        return false;
}
char *index(char *word, char *token)
{
    if (word != NULL)
    {
        if (token != NULL)
        {   
            int len = string_length(word);
            char * p = word + len; 
            bool flag = true;
            for (int i = 0; flag && i < len; i++)
            {
                if (equals(word + i, token))
                {
                    flag = false;
                    p = word + i;
                }
            }
            return p;
        }
        else
            return NULL;
    }
    else
        return NULL;
}