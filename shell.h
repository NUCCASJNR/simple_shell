#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>            /* Definition of AT_* constants */
#include <sys/syscall.h>      /* Definition of SYS_* constants */
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <signal.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>


 int access(const char *pathname, int mode);
 int chdir(const char *path);
 int fchdir(int fd);
 int close(int fd);
 int closedir(DIR *dirp);
  int execve(const char *pathname, char *const argv[],
                  char *const envp[]);
noreturn void exit(int status);

noreturn void _exit(int status);
noreturn void _Exit(int status);
 int fflush(FILE *stream);
 pid_t fork(void);
 free [options]
  char *getcwd(char *buf, size_t size);
       char *getwd(char *buf);
       char *get_current_dir_name(void);
ssize_t getline(char **restrict lineptr, size_t *restrict n,
                       FILE *restrict stream);
       ssize_t getdelim(char **restrict lineptr, size_t *restrict n,
                       int delim, FILE *restrict stream);
 pid_t getpid(void);
       pid_t getppid(void);
        int isatty(int fd);
	int kill(pid_t pid, int sig);
	void *malloc(size_t size);
       void free(void *ptr);
       void *calloc(size_t nmemb, size_t size);
       void *realloc(void *ptr, size_t size);
       void *reallocarray(void *ptr, size_t nmemb, size_t size);
       nt open(const char *pathname, int flags);
       int open(const char *pathname, int flags, mode_t mode);

       int creat(const char *pathname, mode_t mode);

       int openat(int dirfd, const char *pathname, int flags);
       int openat(int dirfd, const char *pathname, int flags, mode_t mode);
 DIR *opendir(const char *name);
       DIR *fdopendir(int fd);
void perror(const char *s);
ssize_t read(int fd, void *buf, size_t count);
ssize_t pread(int fildes, void *buf, size_t nbyte, off_t offset);
ssize_t read(int fildes, void *buf, size_t nbyte);

       typedef void (*sighandler_t)(int);

       sighandler_t signal(int signum, sighandler_t handler);
       int stat(const char *path, struct stat *buf);
int fstat(int fd, struct stat *buf);
int lstat(const char *path, struct stat *buf);

int stat(const char *path, struct stat *buf);
int fstat(int fd, struct stat *buf);
int lstat(const char *path, struct stat *buf);
char *strtok(char *restrict str, const char *restrict delim);
       char *strtok_r(char *restrict str, const char *restrict delim,
                      char **restrict saveptr);
 pid_t wait3(int *wstatus, int options, struct rusage *rusage);
       pid_t wait4(pid_t pid, int *wstatus, int options,
                   struct rusage *rusage);
ssize_t write(int fd, const void *buf, size_t count);



#endif SHELL_H
