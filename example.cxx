#include <string>
#include <InsOrdVecMap.h>

int main()
{
  InsOrdVecMap<std::string, std::string> insOrdVecMap {
    {"raghu", "boy"},
    {"megha","girl"},
    {"shiva", "boy"},
    {"lalitha", "girl"}
  };

  std::cout << "Current Size:" << insOrdVecMap.size() << std::endl;
  std::cout << "Capacity: " << insOrdVecMap.capacity() << std::endl;

  decltype(insOrdVecMap) insOrdVecMap1 = insOrdVecMap;

  std::cout << "Current Size:" << insOrdVecMap1.size() << std::endl;
  std::cout << "Capacity: " << insOrdVecMap1.capacity() << std::endl;

  return 0;
}
