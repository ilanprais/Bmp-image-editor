#include "BitAdjuster.hpp"

namespace bitmap {

    BitAdjuster::BitAdjuster(std::string data) : m_data(std::move(data)) {}

    const std::string& BitAdjuster::getData() const {
        return m_data;
    }

    void BitAdjuster::setData(std::string data) {
        m_data = std::move(data);
    }

}