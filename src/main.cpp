//#include <iostream>
#include <cstdio>
#include <string>
#include "file_sys.h"

int main(){

    char path[200];
    char folder[100];
    while(1){
        
        printf("Enter path: ");
        std::scanf("%s", path);
        printf("Enter folder name: ");
        std::scanf("%s", folder);
        file_sys::create_project(path, folder);
    }

    return 0;
}