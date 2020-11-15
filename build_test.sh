echo "Run cd 'box2d && ./build.sh' first."
g++ -std=c++17 -Lbox2d/build/bin/ -Ibox2d/include/ -lbox2d test.cpp lunar_lander.cpp 
