#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
}User;

struct backpacks{
    int pencils;
    bool hasBooks;
};

typedef struct{
    char course[20];
    int courseNumber;

}Report;

typedef struct{
    int x;
    int y;
}Point;