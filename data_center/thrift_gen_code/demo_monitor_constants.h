/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef demo_monitor_CONSTANTS_H
#define demo_monitor_CONSTANTS_H

#include "demo_monitor_types.h"

namespace demomonitor {

class demo_monitorConstants {
 public:
  demo_monitorConstants();

  std::map<METRIC::type, std::string>  METRIC_STR;
  std::map<TAG::type, std::string>  TAG_STR;
};

extern const demo_monitorConstants g_demo_monitor_constants;

} // namespace

#endif