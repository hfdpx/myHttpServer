/*
 * common_functions.h
 *
 *  Created on: Jul 27, 2017
 *      Author: amapola
 */

#ifndef SRC_COMMON_FUNCTIONS_H_
#define SRC_COMMON_FUNCTIONS_H_
bool AddFd(int epollfd,int fd);
bool RemoveFd(int epollfd,int fd);
bool ModifyFd(int epollfd,int fd,uint32_t ev);
int SetNonblocking(int fd);
void SigHandler(int sig);
void AddSig(int sig,void(handler)(int),bool restart = true);
#endif /* SRC_COMMON_FUNCTIONS_H_ */
