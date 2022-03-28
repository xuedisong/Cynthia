
CC=g++
CC_OPTIONS=-Wall
# -I /Users/yiche/dev/lib_c/eigen-3.4.0/Eigen/

all:clean
	${CC} ${CC_OPTIONS} a.cc -o a
	${CC} ${CC_OPTIONS} eigen.cc -o eigen

clean:
	rm -rf a
	rm -rf a.out
	rm -rf eigen

run_a:all
	./a

run_eigen:all
	./eigen