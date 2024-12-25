#include <iostream>
using namespace std;

class Strategy {
public:
    virtual void execute() = 0; // Abstract method
};

class ConcreteStrategyA : public Strategy {
public:
    void execute() {
        cout << "Executing Strategy A\n";
    }
};

class ConcreteStrategyB : public Strategy {
public:
    void execute() {
        cout << "Executing Strategy B\n";
    }
};

class Context {
private:
    Strategy* strategy;

public:
    Context(Strategy* strat) : strategy(strat) {}
    void setStrategy(Strategy* strat) {
        strategy = strat;
    }
    void executeStrategy() {
        strategy->execute();
    }
};

int main() {
    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    Context context(&strategyA);
    context.executeStrategy();

    context.setStrategy(&strategyB);
    context.executeStrategy();

    return 0;
}
