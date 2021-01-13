This is a C++ reimplementation of OpenAI's gym environment LunarLander (the continuous version).
It works but definitely needs more work.

Since it supports model-based approaches such as AlphaZero (which requires the environment to be clonable for the MCTS), it unfortunately requires a box2d fork that supports getting and setting the sleep time of bodies.
The fork is linked in this repository.

## Installation

To use it, copy both `lunar_lander.cpp` and `lunar_lander.hpp` to your project and add the box2d fork as a dependency.
An example for cmake can be found [here](https://github.com/instance01/GRAB0/blob/master/src/CMakeLists.txt).

After you're done, do `cmake` and `cmake --build .`.

## Usage

The API follows the standard OpenAI gym API (except for reset(), which requires a generator).
As for the generator, I'm open for PRs that move it to the constructor.

```
std::vector<float> reset(std::mt19937 &generator);
std::tuple<std::vector<float>, double, bool> step(std::vector<double> &action);
```
