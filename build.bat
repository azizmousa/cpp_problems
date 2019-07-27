ECHO OFF
echo "open build folder:"
cd build

echo "compiling:"
cmake -G "MinGW Makefiles"  ..

echo "build exe:"
make