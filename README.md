This is a C++ reimplementation of OpenAI's gym environment LunarLander (the continuous version).
It works but definitely needs more work.

Unfortunately it requires a box2d fork that supports getting and setting the sleep time of bodies.
The fork is linked in this repository.

To use it, copy both `lunar_lander.cpp` and `lunar_lander.hpp` to your project and add the box2d fork as a dependency.
An example for cmake can be found [here](https://github.com/instance01/GRAB0/blob/master/src/CMakeLists.txt).
