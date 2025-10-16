#include "tableFactory.h"

#include <algorithm>
#include <cctype>
#include <stdexcept>

#include "Amazon.h"
#include "Lazada.h"
#include "Shoppe.h"

namespace
{
std::string normalizeName(const std::string &name)
{
    std::string normalized = name;
    std::transform(normalized.begin(), normalized.end(), normalized.begin(), [](unsigned char ch) {
        return static_cast<char>(std::tolower(ch));
    });
    return normalized;
}
}  // namespace

std::unique_ptr<IFactory> TableFactory::createFactory(PlatformType platform)
{
    switch (platform)
    {
    case PlatformType::Amazon:
        return std::make_unique<Amazon>();
    case PlatformType::Lazada:
        return std::make_unique<Lazada>();
    case PlatformType::Shoppe:
        return std::make_unique<Shoppe>();
    default:
        throw std::invalid_argument("Unsupported platform type");
    }
}

std::unique_ptr<IFactory> TableFactory::createFactory(const std::string &platformName)
{
    const std::string normalized = normalizeName(platformName);
    if (normalized == "amazon")
    {
        return createFactory(PlatformType::Amazon);
    }
    if (normalized == "lazada")
    {
        return createFactory(PlatformType::Lazada);
    }
    if (normalized == "shoppe" || normalized == "shopee")
    {
        return createFactory(PlatformType::Shoppe);
    }

    throw std::invalid_argument("Unknown platform name: " + platformName);
}
