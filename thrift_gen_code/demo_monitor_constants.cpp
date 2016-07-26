/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "demo_monitor_constants.h"

namespace demomonitor {

const demo_monitorConstants g_demo_monitor_constants;

demo_monitorConstants::demo_monitorConstants() {
  METRIC_STR.insert(std::make_pair((METRIC::type)0, "sys"));
  METRIC_STR.insert(std::make_pair((METRIC::type)1, "usr"));
  METRIC_STR.insert(std::make_pair((METRIC::type)2, "memory"));
  METRIC_STR.insert(std::make_pair((METRIC::type)3, "swap"));
  METRIC_STR.insert(std::make_pair((METRIC::type)4, "read speed"));
  METRIC_STR.insert(std::make_pair((METRIC::type)5, "write speed"));
  METRIC_STR.insert(std::make_pair((METRIC::type)6, "free space"));
  METRIC_STR.insert(std::make_pair((METRIC::type)7, "inspeed"));
  METRIC_STR.insert(std::make_pair((METRIC::type)8, "outspeed"));

  TAG_STR.insert(std::make_pair((TAG::type)1, "ram"));
  TAG_STR.insert(std::make_pair((TAG::type)0, "cpu"));
  TAG_STR.insert(std::make_pair((TAG::type)2, "disk"));
  TAG_STR.insert(std::make_pair((TAG::type)3, "network"));

}

} // namespace

