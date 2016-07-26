/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef demo_monitor_TYPES_H
#define demo_monitor_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace demomonitor {

struct METRIC {
  enum type {
    CPU_SYS = 0,
    CPU_USR = 1,
    RAM_PHYSIC = 2,
    RAM_SWAP = 3,
    DISK_READ = 4,
    DISK_WRITE = 5,
    DISK_FREE = 6,
    NET_IN = 7,
    NET_OUT = 8
  };
};

extern const std::map<int, const char*> _METRIC_VALUES_TO_NAMES;

struct TAG {
  enum type {
    CPU = 0,
    RAM = 1,
    DISK = 2,
    NET = 3
  };
};

extern const std::map<int, const char*> _TAG_VALUES_TO_NAMES;

class DataCollector;

class TimeLapseData;

class InvalidIOOperator;

typedef struct _DataCollector__isset {
  _DataCollector__isset() : metric(false), tag(false), object(false), value(false) {}
  bool metric :1;
  bool tag :1;
  bool object :1;
  bool value :1;
} _DataCollector__isset;

class DataCollector {
 public:

  DataCollector(const DataCollector&);
  DataCollector& operator=(const DataCollector&);
  DataCollector() : metric((METRIC::type)0), tag((TAG::type)0), object(), value(0) {
  }

  virtual ~DataCollector() throw();
  METRIC::type metric;
  TAG::type tag;
  std::string object;
  double value;

  _DataCollector__isset __isset;

  void __set_metric(const METRIC::type val);

  void __set_tag(const TAG::type val);

  void __set_object(const std::string& val);

  void __set_value(const double val);

  bool operator == (const DataCollector & rhs) const
  {
    if (!(metric == rhs.metric))
      return false;
    if (!(tag == rhs.tag))
      return false;
    if (!(object == rhs.object))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const DataCollector &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DataCollector & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(DataCollector &a, DataCollector &b);

inline std::ostream& operator<<(std::ostream& out, const DataCollector& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _TimeLapseData__isset {
  _TimeLapseData__isset() : beginTime(false), totalElements(false), values(false) {}
  bool beginTime :1;
  bool totalElements :1;
  bool values :1;
} _TimeLapseData__isset;

class TimeLapseData {
 public:

  TimeLapseData(const TimeLapseData&);
  TimeLapseData& operator=(const TimeLapseData&);
  TimeLapseData() : beginTime(), totalElements(0) {
  }

  virtual ~TimeLapseData() throw();
  std::string beginTime;
  int32_t totalElements;
  std::vector<double>  values;

  _TimeLapseData__isset __isset;

  void __set_beginTime(const std::string& val);

  void __set_totalElements(const int32_t val);

  void __set_values(const std::vector<double> & val);

  bool operator == (const TimeLapseData & rhs) const
  {
    if (!(beginTime == rhs.beginTime))
      return false;
    if (!(totalElements == rhs.totalElements))
      return false;
    if (!(values == rhs.values))
      return false;
    return true;
  }
  bool operator != (const TimeLapseData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TimeLapseData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TimeLapseData &a, TimeLapseData &b);

inline std::ostream& operator<<(std::ostream& out, const TimeLapseData& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidIOOperator__isset {
  _InvalidIOOperator__isset() : iwhat(false), swhy(false) {}
  bool iwhat :1;
  bool swhy :1;
} _InvalidIOOperator__isset;

class InvalidIOOperator : public ::apache::thrift::TException {
 public:

  InvalidIOOperator(const InvalidIOOperator&);
  InvalidIOOperator& operator=(const InvalidIOOperator&);
  InvalidIOOperator() : iwhat(0), swhy() {
  }

  virtual ~InvalidIOOperator() throw();
  int32_t iwhat;
  std::string swhy;

  _InvalidIOOperator__isset __isset;

  void __set_iwhat(const int32_t val);

  void __set_swhy(const std::string& val);

  bool operator == (const InvalidIOOperator & rhs) const
  {
    if (!(iwhat == rhs.iwhat))
      return false;
    if (!(swhy == rhs.swhy))
      return false;
    return true;
  }
  bool operator != (const InvalidIOOperator &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidIOOperator & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidIOOperator &a, InvalidIOOperator &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidIOOperator& obj)
{
  obj.printTo(out);
  return out;
}

} // namespace

#endif
