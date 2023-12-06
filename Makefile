compile-without-extension:
	g++ -std=c++17 -g -O2 -Wconversion -Wshadow -Wall -Wextra -D_GLIBCXX_DEBUG -D_GLIBCXX_ASSERTIONS -DLOCAL -fmax-errors=2 -Wno-sign-conversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -Winvalid-pch -o .\bin\${F}.out ${F}.cpp
compile-with-extension:
	g++ -std=c++17 -g -O2 -Wconversion -Wshadow -Wall -Wextra -D_GLIBCXX_DEBUG -D_GLIBCXX_ASSERTIONS -DLOCAL -fmax-errors=2 -Wno-sign-conversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -Winvalid-pch -o .\bin\${F}.out ${F}
run:
	make compile-without-extension && .\bin\${F}.out
run-wi:
	make compile-with-extension && .\bin\${F}.out
