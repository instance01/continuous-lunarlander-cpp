#include "lunar_lander.hpp"


int main() {
  std::mt19937 generator;

  LunarLanderEnv lunarlander = LunarLanderEnv();
  auto obs = lunarlander.reset(generator);

  std::vector<double> action = {0.5, 0.5};
  double reward;
  bool done;
  std::tie(obs, reward, done) = lunarlander.step(action);
}
