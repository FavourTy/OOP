#include <string>
#include <cmath>
#include <cstdint>

class DollarAmount
{
public:
    explicit DollarAmount(__int64 value) : amount{value} {
                                           };
    void add(DollarAmount right)
    {
        amount += right.amount;
    };
    void substract(DollarAmount left)
    {
        amount -= left.amount;
    }
    void addInt(int rate, int divisor)
    {
        DollarAmount interest{
            (amount * rate + divisor / 2) / divisor};
        add(interest);
    }

    std::string tostring() const
    {
        std::string dollars{std::to_string(amount / 100)};
        std::string cents{std::to_string(std::abs(amount % 100))};
        return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }

private:
    __int64 amount{0};
};