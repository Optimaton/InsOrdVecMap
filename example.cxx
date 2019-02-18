#include <string>
#include <InsOrdVecMap.h>

int main()
{
  InsOrdVecMap<std::string, std::string> insOrdVecMap {
    {"john", "male"},
    {"natasha","female"},
    {"sam", "male"},
    {"adam", "male"}
  };

  std::cout << "insOrdVecMap: " << std::endl;
  std::cout << "Current Size:" << insOrdVecMap.size() << std::endl;
  std::cout << "Capacity: " << insOrdVecMap.capacity() << std::endl;
  
  insOrdVecMap.print(); //debug function

  std::cout << "\n";

  decltype(insOrdVecMap) insOrdVecMap1 = insOrdVecMap;
  insOrdVecMap1.push_back(std::make_pair("rene", "female")); //debug function

  std::cout << "insOrdVecMap1: " << std::endl;
  std::cout << "Current Size:" << insOrdVecMap1.size() << std::endl;
  std::cout << "Capacity: " << insOrdVecMap1.capacity() << std::endl;
  std::cout << "Value at 3 is: " << insOrdVecMap1.at(2).first << "::" << insOrdVecMap1.at(2).second << std::endl;
  std::cout << "Value of inOrdVecMap[\"adam\"] is " << insOrdVecMap["adam"] << std::endl;
  insOrdVecMap["sam"].assign(std::string("raghu"));
  std::cout << "Value of inOrdVecMap[\"sam\"] is " << insOrdVecMap["sam"] << std::endl;
  insOrdVecMap1.print();


  std::cout << "\n";

  std::cout << "insOrdVecMap1 after pop_front: " <<std::endl;
  insOrdVecMap1.pop_front();
  insOrdVecMap1.print();

  std::cout << "\n";
  
  std::cout << "insOrdVecMap1 after pop_back: " <<std::endl;
  insOrdVecMap1.pop_back();
  insOrdVecMap1.print();
  
  insOrdVecMap1.clear();
  
  std::cout << "\n";
  std::cout << "insOrdVecMap1 after clear: " <<std::endl;
  std::cout << "Current Size:" << insOrdVecMap1.size() << std::endl;
  std::cout << "Capacity: " << insOrdVecMap1.capacity() << std::endl;
  insOrdVecMap1.print();
  return 0;
}
