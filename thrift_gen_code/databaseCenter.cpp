/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "databaseCenter.h"

namespace demomonitor {


databaseCenter_send_data_to_server_args::~databaseCenter_send_data_to_server_args() throw() {
}


uint32_t databaseCenter_send_data_to_server_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->dat.read(iprot);
          this->__isset.dat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t databaseCenter_send_data_to_server_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("databaseCenter_send_data_to_server_args");

  xfer += oprot->writeFieldBegin("dat", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->dat.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


databaseCenter_send_data_to_server_pargs::~databaseCenter_send_data_to_server_pargs() throw() {
}


uint32_t databaseCenter_send_data_to_server_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("databaseCenter_send_data_to_server_pargs");

  xfer += oprot->writeFieldBegin("dat", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->dat)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


databaseCenter_recieve_data_from_server_args::~databaseCenter_recieve_data_from_server_args() throw() {
}


uint32_t databaseCenter_recieve_data_from_server_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->dat.read(iprot);
          this->__isset.dat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->beginTime);
          this->__isset.beginTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->endTime);
          this->__isset.endTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t databaseCenter_recieve_data_from_server_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("databaseCenter_recieve_data_from_server_args");

  xfer += oprot->writeFieldBegin("dat", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->dat.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("beginTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->beginTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("endTime", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->endTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


databaseCenter_recieve_data_from_server_pargs::~databaseCenter_recieve_data_from_server_pargs() throw() {
}


uint32_t databaseCenter_recieve_data_from_server_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("databaseCenter_recieve_data_from_server_pargs");

  xfer += oprot->writeFieldBegin("dat", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->dat)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("beginTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64((*(this->beginTime)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("endTime", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64((*(this->endTime)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


databaseCenter_recieve_data_from_server_result::~databaseCenter_recieve_data_from_server_result() throw() {
}


uint32_t databaseCenter_recieve_data_from_server_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->e.read(iprot);
          this->__isset.e = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t databaseCenter_recieve_data_from_server_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("databaseCenter_recieve_data_from_server_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.e) {
    xfer += oprot->writeFieldBegin("e", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->e.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


databaseCenter_recieve_data_from_server_presult::~databaseCenter_recieve_data_from_server_presult() throw() {
}


uint32_t databaseCenter_recieve_data_from_server_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->e.read(iprot);
          this->__isset.e = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}


databaseCenter_debug_args::~databaseCenter_debug_args() throw() {
}


uint32_t databaseCenter_debug_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t databaseCenter_debug_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("databaseCenter_debug_args");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


databaseCenter_debug_pargs::~databaseCenter_debug_pargs() throw() {
}


uint32_t databaseCenter_debug_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("databaseCenter_debug_pargs");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void databaseCenterClient::send_data_to_server(const DataCollector& dat)
{
  send_send_data_to_server(dat);
}

void databaseCenterClient::send_send_data_to_server(const DataCollector& dat)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("send_data_to_server", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  databaseCenter_send_data_to_server_pargs args;
  args.dat = &dat;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void databaseCenterClient::recieve_data_from_server(TimeLapseData& _return, const DataCollector& dat, const int64_t beginTime, const int64_t endTime)
{
  send_recieve_data_from_server(dat, beginTime, endTime);
  recv_recieve_data_from_server(_return);
}

void databaseCenterClient::send_recieve_data_from_server(const DataCollector& dat, const int64_t beginTime, const int64_t endTime)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("recieve_data_from_server", ::apache::thrift::protocol::T_CALL, cseqid);

  databaseCenter_recieve_data_from_server_pargs args;
  args.dat = &dat;
  args.beginTime = &beginTime;
  args.endTime = &endTime;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void databaseCenterClient::recv_recieve_data_from_server(TimeLapseData& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("recieve_data_from_server") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  databaseCenter_recieve_data_from_server_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  if (result.__isset.e) {
    throw result.e;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "recieve_data_from_server failed: unknown result");
}

void databaseCenterClient::debug()
{
  send_debug();
}

void databaseCenterClient::send_debug()
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("debug", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  databaseCenter_debug_pargs args;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

bool databaseCenterProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void databaseCenterProcessor::process_send_data_to_server(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("databaseCenter.send_data_to_server", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "databaseCenter.send_data_to_server");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "databaseCenter.send_data_to_server");
  }

  databaseCenter_send_data_to_server_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "databaseCenter.send_data_to_server", bytes);
  }

  try {
    iface_->send_data_to_server(args.dat);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "databaseCenter.send_data_to_server");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "databaseCenter.send_data_to_server");
  }

  return;
}

void databaseCenterProcessor::process_recieve_data_from_server(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("databaseCenter.recieve_data_from_server", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "databaseCenter.recieve_data_from_server");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "databaseCenter.recieve_data_from_server");
  }

  databaseCenter_recieve_data_from_server_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "databaseCenter.recieve_data_from_server", bytes);
  }

  databaseCenter_recieve_data_from_server_result result;
  try {
    iface_->recieve_data_from_server(result.success, args.dat, args.beginTime, args.endTime);
    result.__isset.success = true;
  } catch (InvalidIOOperator &e) {
    result.e = e;
    result.__isset.e = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "databaseCenter.recieve_data_from_server");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("recieve_data_from_server", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "databaseCenter.recieve_data_from_server");
  }

  oprot->writeMessageBegin("recieve_data_from_server", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "databaseCenter.recieve_data_from_server", bytes);
  }
}

void databaseCenterProcessor::process_debug(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("databaseCenter.debug", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "databaseCenter.debug");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "databaseCenter.debug");
  }

  databaseCenter_debug_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "databaseCenter.debug", bytes);
  }

  try {
    iface_->debug();
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "databaseCenter.debug");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "databaseCenter.debug");
  }

  return;
}

::boost::shared_ptr< ::apache::thrift::TProcessor > databaseCenterProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< databaseCenterIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< databaseCenterIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new databaseCenterProcessor(handler));
  return processor;
}

void databaseCenterConcurrentClient::send_data_to_server(const DataCollector& dat)
{
  send_send_data_to_server(dat);
}

void databaseCenterConcurrentClient::send_send_data_to_server(const DataCollector& dat)
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("send_data_to_server", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  databaseCenter_send_data_to_server_pargs args;
  args.dat = &dat;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
}

void databaseCenterConcurrentClient::recieve_data_from_server(TimeLapseData& _return, const DataCollector& dat, const int64_t beginTime, const int64_t endTime)
{
  int32_t seqid = send_recieve_data_from_server(dat, beginTime, endTime);
  recv_recieve_data_from_server(_return, seqid);
}

int32_t databaseCenterConcurrentClient::send_recieve_data_from_server(const DataCollector& dat, const int64_t beginTime, const int64_t endTime)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("recieve_data_from_server", ::apache::thrift::protocol::T_CALL, cseqid);

  databaseCenter_recieve_data_from_server_pargs args;
  args.dat = &dat;
  args.beginTime = &beginTime;
  args.endTime = &endTime;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void databaseCenterConcurrentClient::recv_recieve_data_from_server(TimeLapseData& _return, const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("recieve_data_from_server") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      databaseCenter_recieve_data_from_server_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      if (result.__isset.e) {
        sentry.commit();
        throw result.e;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "recieve_data_from_server failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

void databaseCenterConcurrentClient::debug()
{
  send_debug();
}

void databaseCenterConcurrentClient::send_debug()
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("debug", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  databaseCenter_debug_pargs args;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
}

} // namespace

