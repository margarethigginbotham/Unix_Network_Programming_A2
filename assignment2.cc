//******************************************************************//
//   PROGRAM:    CSCI 330 Assignment 2                              //
//   PROGRAMMER: Margaret Higginbotham                              //
//   LOGON ID:   z1793581                                           //
//   DUE DATE:   February 9, 2018                                   //
//                                                                  //
//   FUNCTION:   Implementation of the cat command using C++        //
//******************************************************************//

#include <unistd.h>				//read(), write()
#include <iostream>				//cout, endl, sizeof()
#include <stdio.h>  		            	//perror()
#include <stdlib.h>

#include <sys/types.h>				//open()
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main(int argc, char *argv[]){

  for(int i = 0; i < argc; i++){		//Loops through all files

    int fd;					//File
    int count;
    char buffer[1024];

    fd = open(argv[i], O_RDONLY | O_CREAT);	//Opens file, if doesn't exist, creates

    if(fd == 1){
      perror("Can't open file");
      exit(1);
    }
						//Reads then prints the file
    while((count = read(fd, buffer, sizeof(buffer))) > 0){
      printf("%s", buffer);
    }

    close(fd);					//Closes file
  }

  exit(0);

}
