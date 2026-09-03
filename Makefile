TARGET := ./bin/${F}.out
STATIC_RUNTIME := -static

.PHONY: compile run xd xd-dbg icpc icpc-dbg

compile:
	@mkdir -p ./bin
	g++ -std=c++17 -g -Wl,--stack=26843545600 -O2 -Wconversion -Wshadow -Wall -Wextra -D_GLIBCXX_DEBUG -D_GLIBCXX_ASSERTIONS -DLOCAL -fmax-errors=2 -Wno-sign-conversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -Winvalid-pch ${STATIC_RUNTIME} -o ${TARGET} ${F}
run: compile
	${TARGET}
xd:
	@mkdir -p ./bin
	g++ -std=c++17 ${STATIC_RUNTIME} -o ${TARGET} ${F}
	${TARGET}
xd-dbg:
	@mkdir -p ./bin
	g++ -std=c++17 -DLOCAL ${STATIC_RUNTIME} -o ${TARGET} ${F}
	${TARGET}
icpc:
	@mkdir -p ./bin
	g++ -std=c++11 ${STATIC_RUNTIME} -o ${TARGET} ${F}
	${TARGET}
icpc-dbg:
	@mkdir -p ./bin
	g++ -std=c++11 -DLOCAL ${STATIC_RUNTIME} -o ${TARGET} ${F}
	${TARGET}
