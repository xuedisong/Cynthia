
CC=g++
CC_OPTIONS=-Wall -std=c++11 -I /Users/yiche/dev/lib_c/eigen-3.4.0/Eigen/
#
# -Wc++11-extensions  标准使用c++11 即可
test:
	@echo 2:$(null):2
all:clean
	${CC} ${CC_OPTIONS} a.cc -o a
	${CC} ${CC_OPTIONS} eigen.cc -o eigen
	${CC} ${CC_OPTIONS} lc2315StatStar.cpp lc1138Board.cpp -o lc2315StatStar
	${CC} ${CC_OPTIONS} Like.cpp -o Like

clean:
	rm -rf a
	rm -rf a.out
	rm -rf eigen

run_a:all
	./a

run_eigen:all
	./eigen