CC = g++
CFLAGS = -Wall -std=c++11 -fPIC
LFLAGS = -shared

# BOOST_SYS = /usr/lib/x86_64-linux-gnu/libboost_system.so.1.58.0
# BOOST_FILE_SYS =  /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.58.0

	
Data.o:
	$(CC) -c ${CFLAGS} Data.cpp