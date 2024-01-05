#include <string>

class Resource
{
public:
    /// @brief Function for change status of resource
    /// @details It sets status if it is positive
    /// @param[in] in status for change
    /// @return none.
    void setStatus(const int in) noexcept;

    /// @brief Function for change status of resource
    /// @details It sets status and adds constant if status is positive
    /// @param[in] in status for change
    /// @return none.
    void setStatusIncr(const int in) noexcept;

    /// @brief Function for print status of resource
    /// @details Will not be covered
    /// @return none.
    void printStatus();

    /// @brief Function for get status of resource
    /// @return status of resource
    [[nodiscard]] int getStatus() const
    {
        return status_;
    }

private:
    /// @brief Status of resource
    int status_ = 0;
};