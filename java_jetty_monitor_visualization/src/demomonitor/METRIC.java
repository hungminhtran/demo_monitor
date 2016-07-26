/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package demomonitor;


import java.util.Map;
import java.util.HashMap;
import org.apache.thrift.TEnum;

public enum METRIC implements org.apache.thrift.TEnum {
  CPU_SYS(0),
  CPU_USR(1),
  RAM_PHYSIC(2),
  RAM_SWAP(3),
  DISK_READ(4),
  DISK_WRITE(5),
  DISK_FREE(6),
  NET_IN(7),
  NET_OUT(8);

  private final int value;

  private METRIC(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static METRIC findByValue(int value) { 
    switch (value) {
      case 0:
        return CPU_SYS;
      case 1:
        return CPU_USR;
      case 2:
        return RAM_PHYSIC;
      case 3:
        return RAM_SWAP;
      case 4:
        return DISK_READ;
      case 5:
        return DISK_WRITE;
      case 6:
        return DISK_FREE;
      case 7:
        return NET_IN;
      case 8:
        return NET_OUT;
      default:
        return null;
    }
  }
}