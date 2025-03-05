#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
    char szName[32];
    char szPhone[32];

    struct USERDATA* pNext;
} USERDATA;

void func(USERDATA* pUser){
    if(pUser == NULL)
        return;
    
    printf("[%p] %s, %s, pNext : [%p]\n", pUser, pUser->szName, pUser->szPhone, pUser->pNext);
    func(pUser->pNext);
    return;
};

int main(void){
    USERDATA userList[4] = {
        {"Kim Du Sik", "1234", NULL},
        {"Lee Mi Hyeoun", "2345", NULL},
        {"Kim Bong Suck", "3456", NULL},
        {"Jang He Su", "4567", NULL}
    };

    userList[0].pNext = &userList[1];
    userList[1].pNext = &userList[2];
    userList[2].pNext = &userList[3];
    userList[3].pNext = NULL;

    func(userList);
}



