/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package demomonitor;

import org.apache.thrift.scheme.IScheme;
import org.apache.thrift.scheme.SchemeFactory;
import org.apache.thrift.scheme.StandardScheme;

import org.apache.thrift.scheme.TupleScheme;
import org.apache.thrift.protocol.TTupleProtocol;
import org.apache.thrift.protocol.TProtocolException;
import org.apache.thrift.EncodingUtils;
import org.apache.thrift.TException;
import org.apache.thrift.async.AsyncMethodCallback;
import org.apache.thrift.server.AbstractNonblockingServer.*;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.EnumMap;
import java.util.Set;
import java.util.HashSet;
import java.util.EnumSet;
import java.util.Collections;
import java.util.BitSet;
import java.nio.ByteBuffer;
import java.util.Arrays;
import javax.annotation.Generated;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked"})
@Generated(value = "Autogenerated by Thrift Compiler (0.9.3)", date = "2016-07-27")
public class DateTimeStruct implements org.apache.thrift.TBase<DateTimeStruct, DateTimeStruct._Fields>, java.io.Serializable, Cloneable, Comparable<DateTimeStruct> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("DateTimeStruct");

  private static final org.apache.thrift.protocol.TField YEAR_FIELD_DESC = new org.apache.thrift.protocol.TField("year", org.apache.thrift.protocol.TType.I32, (short)1);
  private static final org.apache.thrift.protocol.TField MON_FIELD_DESC = new org.apache.thrift.protocol.TField("mon", org.apache.thrift.protocol.TType.I32, (short)2);
  private static final org.apache.thrift.protocol.TField DAY_FIELD_DESC = new org.apache.thrift.protocol.TField("day", org.apache.thrift.protocol.TType.I32, (short)3);
  private static final org.apache.thrift.protocol.TField HOUR_FIELD_DESC = new org.apache.thrift.protocol.TField("hour", org.apache.thrift.protocol.TType.I32, (short)4);
  private static final org.apache.thrift.protocol.TField MIN_FIELD_DESC = new org.apache.thrift.protocol.TField("min", org.apache.thrift.protocol.TType.I32, (short)5);
  private static final org.apache.thrift.protocol.TField SEC_FIELD_DESC = new org.apache.thrift.protocol.TField("sec", org.apache.thrift.protocol.TType.I32, (short)6);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new DateTimeStructStandardSchemeFactory());
    schemes.put(TupleScheme.class, new DateTimeStructTupleSchemeFactory());
  }

  public int year; // required
  public int mon; // required
  public int day; // required
  public int hour; // required
  public int min; // required
  public int sec; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    YEAR((short)1, "year"),
    MON((short)2, "mon"),
    DAY((short)3, "day"),
    HOUR((short)4, "hour"),
    MIN((short)5, "min"),
    SEC((short)6, "sec");

    private static final Map<String, _Fields> byName = new HashMap<String, _Fields>();

    static {
      for (_Fields field : EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // YEAR
          return YEAR;
        case 2: // MON
          return MON;
        case 3: // DAY
          return DAY;
        case 4: // HOUR
          return HOUR;
        case 5: // MIN
          return MIN;
        case 6: // SEC
          return SEC;
        default:
          return null;
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, throwing an exception
     * if it is not found.
     */
    public static _Fields findByThriftIdOrThrow(int fieldId) {
      _Fields fields = findByThriftId(fieldId);
      if (fields == null) throw new IllegalArgumentException("Field " + fieldId + " doesn't exist!");
      return fields;
    }

    /**
     * Find the _Fields constant that matches name, or null if its not found.
     */
    public static _Fields findByName(String name) {
      return byName.get(name);
    }

    private final short _thriftId;
    private final String _fieldName;

    _Fields(short thriftId, String fieldName) {
      _thriftId = thriftId;
      _fieldName = fieldName;
    }

    public short getThriftFieldId() {
      return _thriftId;
    }

    public String getFieldName() {
      return _fieldName;
    }
  }

  // isset id assignments
  private static final int __YEAR_ISSET_ID = 0;
  private static final int __MON_ISSET_ID = 1;
  private static final int __DAY_ISSET_ID = 2;
  private static final int __HOUR_ISSET_ID = 3;
  private static final int __MIN_ISSET_ID = 4;
  private static final int __SEC_ISSET_ID = 5;
  private byte __isset_bitfield = 0;
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.YEAR, new org.apache.thrift.meta_data.FieldMetaData("year", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    tmpMap.put(_Fields.MON, new org.apache.thrift.meta_data.FieldMetaData("mon", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    tmpMap.put(_Fields.DAY, new org.apache.thrift.meta_data.FieldMetaData("day", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    tmpMap.put(_Fields.HOUR, new org.apache.thrift.meta_data.FieldMetaData("hour", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    tmpMap.put(_Fields.MIN, new org.apache.thrift.meta_data.FieldMetaData("min", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    tmpMap.put(_Fields.SEC, new org.apache.thrift.meta_data.FieldMetaData("sec", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(DateTimeStruct.class, metaDataMap);
  }

  public DateTimeStruct() {
  }

  public DateTimeStruct(
    int year,
    int mon,
    int day,
    int hour,
    int min,
    int sec)
  {
    this();
    this.year = year;
    setYearIsSet(true);
    this.mon = mon;
    setMonIsSet(true);
    this.day = day;
    setDayIsSet(true);
    this.hour = hour;
    setHourIsSet(true);
    this.min = min;
    setMinIsSet(true);
    this.sec = sec;
    setSecIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public DateTimeStruct(DateTimeStruct other) {
    __isset_bitfield = other.__isset_bitfield;
    this.year = other.year;
    this.mon = other.mon;
    this.day = other.day;
    this.hour = other.hour;
    this.min = other.min;
    this.sec = other.sec;
  }

  public DateTimeStruct deepCopy() {
    return new DateTimeStruct(this);
  }

  @Override
  public void clear() {
    setYearIsSet(false);
    this.year = 0;
    setMonIsSet(false);
    this.mon = 0;
    setDayIsSet(false);
    this.day = 0;
    setHourIsSet(false);
    this.hour = 0;
    setMinIsSet(false);
    this.min = 0;
    setSecIsSet(false);
    this.sec = 0;
  }

  public int getYear() {
    return this.year;
  }

  public DateTimeStruct setYear(int year) {
    this.year = year;
    setYearIsSet(true);
    return this;
  }

  public void unsetYear() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __YEAR_ISSET_ID);
  }

  /** Returns true if field year is set (has been assigned a value) and false otherwise */
  public boolean isSetYear() {
    return EncodingUtils.testBit(__isset_bitfield, __YEAR_ISSET_ID);
  }

  public void setYearIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __YEAR_ISSET_ID, value);
  }

  public int getMon() {
    return this.mon;
  }

  public DateTimeStruct setMon(int mon) {
    this.mon = mon;
    setMonIsSet(true);
    return this;
  }

  public void unsetMon() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __MON_ISSET_ID);
  }

  /** Returns true if field mon is set (has been assigned a value) and false otherwise */
  public boolean isSetMon() {
    return EncodingUtils.testBit(__isset_bitfield, __MON_ISSET_ID);
  }

  public void setMonIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __MON_ISSET_ID, value);
  }

  public int getDay() {
    return this.day;
  }

  public DateTimeStruct setDay(int day) {
    this.day = day;
    setDayIsSet(true);
    return this;
  }

  public void unsetDay() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __DAY_ISSET_ID);
  }

  /** Returns true if field day is set (has been assigned a value) and false otherwise */
  public boolean isSetDay() {
    return EncodingUtils.testBit(__isset_bitfield, __DAY_ISSET_ID);
  }

  public void setDayIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __DAY_ISSET_ID, value);
  }

  public int getHour() {
    return this.hour;
  }

  public DateTimeStruct setHour(int hour) {
    this.hour = hour;
    setHourIsSet(true);
    return this;
  }

  public void unsetHour() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __HOUR_ISSET_ID);
  }

  /** Returns true if field hour is set (has been assigned a value) and false otherwise */
  public boolean isSetHour() {
    return EncodingUtils.testBit(__isset_bitfield, __HOUR_ISSET_ID);
  }

  public void setHourIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __HOUR_ISSET_ID, value);
  }

  public int getMin() {
    return this.min;
  }

  public DateTimeStruct setMin(int min) {
    this.min = min;
    setMinIsSet(true);
    return this;
  }

  public void unsetMin() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __MIN_ISSET_ID);
  }

  /** Returns true if field min is set (has been assigned a value) and false otherwise */
  public boolean isSetMin() {
    return EncodingUtils.testBit(__isset_bitfield, __MIN_ISSET_ID);
  }

  public void setMinIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __MIN_ISSET_ID, value);
  }

  public int getSec() {
    return this.sec;
  }

  public DateTimeStruct setSec(int sec) {
    this.sec = sec;
    setSecIsSet(true);
    return this;
  }

  public void unsetSec() {
    __isset_bitfield = EncodingUtils.clearBit(__isset_bitfield, __SEC_ISSET_ID);
  }

  /** Returns true if field sec is set (has been assigned a value) and false otherwise */
  public boolean isSetSec() {
    return EncodingUtils.testBit(__isset_bitfield, __SEC_ISSET_ID);
  }

  public void setSecIsSet(boolean value) {
    __isset_bitfield = EncodingUtils.setBit(__isset_bitfield, __SEC_ISSET_ID, value);
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case YEAR:
      if (value == null) {
        unsetYear();
      } else {
        setYear((Integer)value);
      }
      break;

    case MON:
      if (value == null) {
        unsetMon();
      } else {
        setMon((Integer)value);
      }
      break;

    case DAY:
      if (value == null) {
        unsetDay();
      } else {
        setDay((Integer)value);
      }
      break;

    case HOUR:
      if (value == null) {
        unsetHour();
      } else {
        setHour((Integer)value);
      }
      break;

    case MIN:
      if (value == null) {
        unsetMin();
      } else {
        setMin((Integer)value);
      }
      break;

    case SEC:
      if (value == null) {
        unsetSec();
      } else {
        setSec((Integer)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case YEAR:
      return getYear();

    case MON:
      return getMon();

    case DAY:
      return getDay();

    case HOUR:
      return getHour();

    case MIN:
      return getMin();

    case SEC:
      return getSec();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case YEAR:
      return isSetYear();
    case MON:
      return isSetMon();
    case DAY:
      return isSetDay();
    case HOUR:
      return isSetHour();
    case MIN:
      return isSetMin();
    case SEC:
      return isSetSec();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof DateTimeStruct)
      return this.equals((DateTimeStruct)that);
    return false;
  }

  public boolean equals(DateTimeStruct that) {
    if (that == null)
      return false;

    boolean this_present_year = true;
    boolean that_present_year = true;
    if (this_present_year || that_present_year) {
      if (!(this_present_year && that_present_year))
        return false;
      if (this.year != that.year)
        return false;
    }

    boolean this_present_mon = true;
    boolean that_present_mon = true;
    if (this_present_mon || that_present_mon) {
      if (!(this_present_mon && that_present_mon))
        return false;
      if (this.mon != that.mon)
        return false;
    }

    boolean this_present_day = true;
    boolean that_present_day = true;
    if (this_present_day || that_present_day) {
      if (!(this_present_day && that_present_day))
        return false;
      if (this.day != that.day)
        return false;
    }

    boolean this_present_hour = true;
    boolean that_present_hour = true;
    if (this_present_hour || that_present_hour) {
      if (!(this_present_hour && that_present_hour))
        return false;
      if (this.hour != that.hour)
        return false;
    }

    boolean this_present_min = true;
    boolean that_present_min = true;
    if (this_present_min || that_present_min) {
      if (!(this_present_min && that_present_min))
        return false;
      if (this.min != that.min)
        return false;
    }

    boolean this_present_sec = true;
    boolean that_present_sec = true;
    if (this_present_sec || that_present_sec) {
      if (!(this_present_sec && that_present_sec))
        return false;
      if (this.sec != that.sec)
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    List<Object> list = new ArrayList<Object>();

    boolean present_year = true;
    list.add(present_year);
    if (present_year)
      list.add(year);

    boolean present_mon = true;
    list.add(present_mon);
    if (present_mon)
      list.add(mon);

    boolean present_day = true;
    list.add(present_day);
    if (present_day)
      list.add(day);

    boolean present_hour = true;
    list.add(present_hour);
    if (present_hour)
      list.add(hour);

    boolean present_min = true;
    list.add(present_min);
    if (present_min)
      list.add(min);

    boolean present_sec = true;
    list.add(present_sec);
    if (present_sec)
      list.add(sec);

    return list.hashCode();
  }

  @Override
  public int compareTo(DateTimeStruct other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetYear()).compareTo(other.isSetYear());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetYear()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.year, other.year);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetMon()).compareTo(other.isSetMon());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMon()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.mon, other.mon);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetDay()).compareTo(other.isSetDay());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetDay()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.day, other.day);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetHour()).compareTo(other.isSetHour());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetHour()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.hour, other.hour);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetMin()).compareTo(other.isSetMin());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMin()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.min, other.min);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetSec()).compareTo(other.isSetSec());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSec()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.sec, other.sec);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  public _Fields fieldForId(int fieldId) {
    return _Fields.findByThriftId(fieldId);
  }

  public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
    schemes.get(iprot.getScheme()).getScheme().read(iprot, this);
  }

  public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
    schemes.get(oprot.getScheme()).getScheme().write(oprot, this);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder("DateTimeStruct(");
    boolean first = true;

    sb.append("year:");
    sb.append(this.year);
    first = false;
    if (!first) sb.append(", ");
    sb.append("mon:");
    sb.append(this.mon);
    first = false;
    if (!first) sb.append(", ");
    sb.append("day:");
    sb.append(this.day);
    first = false;
    if (!first) sb.append(", ");
    sb.append("hour:");
    sb.append(this.hour);
    first = false;
    if (!first) sb.append(", ");
    sb.append("min:");
    sb.append(this.min);
    first = false;
    if (!first) sb.append(", ");
    sb.append("sec:");
    sb.append(this.sec);
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    // check for sub-struct validity
  }

  private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
    try {
      write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, ClassNotFoundException {
    try {
      // it doesn't seem like you should have to do this, but java serialization is wacky, and doesn't call the default constructor.
      __isset_bitfield = 0;
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class DateTimeStructStandardSchemeFactory implements SchemeFactory {
    public DateTimeStructStandardScheme getScheme() {
      return new DateTimeStructStandardScheme();
    }
  }

  private static class DateTimeStructStandardScheme extends StandardScheme<DateTimeStruct> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, DateTimeStruct struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // YEAR
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.year = iprot.readI32();
              struct.setYearIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // MON
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.mon = iprot.readI32();
              struct.setMonIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // DAY
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.day = iprot.readI32();
              struct.setDayIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // HOUR
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.hour = iprot.readI32();
              struct.setHourIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // MIN
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.min = iprot.readI32();
              struct.setMinIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 6: // SEC
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.sec = iprot.readI32();
              struct.setSecIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          default:
            org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      // check for required fields of primitive type, which can't be checked in the validate method
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, DateTimeStruct struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(YEAR_FIELD_DESC);
      oprot.writeI32(struct.year);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(MON_FIELD_DESC);
      oprot.writeI32(struct.mon);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(DAY_FIELD_DESC);
      oprot.writeI32(struct.day);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(HOUR_FIELD_DESC);
      oprot.writeI32(struct.hour);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(MIN_FIELD_DESC);
      oprot.writeI32(struct.min);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(SEC_FIELD_DESC);
      oprot.writeI32(struct.sec);
      oprot.writeFieldEnd();
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class DateTimeStructTupleSchemeFactory implements SchemeFactory {
    public DateTimeStructTupleScheme getScheme() {
      return new DateTimeStructTupleScheme();
    }
  }

  private static class DateTimeStructTupleScheme extends TupleScheme<DateTimeStruct> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, DateTimeStruct struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      BitSet optionals = new BitSet();
      if (struct.isSetYear()) {
        optionals.set(0);
      }
      if (struct.isSetMon()) {
        optionals.set(1);
      }
      if (struct.isSetDay()) {
        optionals.set(2);
      }
      if (struct.isSetHour()) {
        optionals.set(3);
      }
      if (struct.isSetMin()) {
        optionals.set(4);
      }
      if (struct.isSetSec()) {
        optionals.set(5);
      }
      oprot.writeBitSet(optionals, 6);
      if (struct.isSetYear()) {
        oprot.writeI32(struct.year);
      }
      if (struct.isSetMon()) {
        oprot.writeI32(struct.mon);
      }
      if (struct.isSetDay()) {
        oprot.writeI32(struct.day);
      }
      if (struct.isSetHour()) {
        oprot.writeI32(struct.hour);
      }
      if (struct.isSetMin()) {
        oprot.writeI32(struct.min);
      }
      if (struct.isSetSec()) {
        oprot.writeI32(struct.sec);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, DateTimeStruct struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      BitSet incoming = iprot.readBitSet(6);
      if (incoming.get(0)) {
        struct.year = iprot.readI32();
        struct.setYearIsSet(true);
      }
      if (incoming.get(1)) {
        struct.mon = iprot.readI32();
        struct.setMonIsSet(true);
      }
      if (incoming.get(2)) {
        struct.day = iprot.readI32();
        struct.setDayIsSet(true);
      }
      if (incoming.get(3)) {
        struct.hour = iprot.readI32();
        struct.setHourIsSet(true);
      }
      if (incoming.get(4)) {
        struct.min = iprot.readI32();
        struct.setMinIsSet(true);
      }
      if (incoming.get(5)) {
        struct.sec = iprot.readI32();
        struct.setSecIsSet(true);
      }
    }
  }

}
