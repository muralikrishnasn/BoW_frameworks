
# generated by ./configure.sh --msse4

CC=gcc

CFLAGS=-fPIC -Wall -g -O3  -msse4 
LDFLAGS=-g -fPIC 

PYTHONCFLAGS = -I/usr/include/python2.7

YAELCONF=linux64
YAELCFLAGS=-I/home/beahacker/Desktop/workspace/dense_trajectories_BoW/yael_v438
YAELLDFLAGS=-L/home/beahacker/Desktop/workspace/dense_trajectories_BoW/yael_v438/yael -Wl,-rpath,/home/beahacker/Desktop/workspace/dense_trajectories_BoW/yael_v438/yael -lyael


SWIG=swig -python

WRAPLDFLAGS=-shared
LAPACKLDFLAGS=/usr/lib/libblas.so.3gf /usr/lib/liblapack.so.3gf
LAPACKCFLAGS=-DFINTEGER=int

USEARPACK=no
ARPACKLDFLAGS=/usr/lib64/libarpack.so.2

USETHREADS=yes
THREADCFLAGS=-DHAVE_THREADS

SHAREDEXT=so
SHAREDFLAGS=-shared
YAELSHAREDFLAGS=-shared

USENUMPY=
NUMPYCFLAGS=
NUMPYSWIGFLAGS=


USEOPENMP=yes

