if [ ! -d "$bin" ]; then
	mkdir "bin"
fi
g++ "src/main.c" -o "bin/main"
./bin/main