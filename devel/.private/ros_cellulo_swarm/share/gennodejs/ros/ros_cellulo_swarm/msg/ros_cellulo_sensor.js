// Auto-generated. Do not edit!

// (in-package ros_cellulo_swarm.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class ros_cellulo_sensor {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.detected = null;
      this.Distance = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('detected')) {
        this.detected = initObj.detected
      }
      else {
        this.detected = 0;
      }
      if (initObj.hasOwnProperty('Distance')) {
        this.Distance = initObj.Distance
      }
      else {
        this.Distance = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ros_cellulo_sensor
    // Serialize message field [timestamp]
    bufferOffset = _serializer.time(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [detected]
    bufferOffset = _serializer.uint8(obj.detected, buffer, bufferOffset);
    // Serialize message field [Distance]
    // Serialize the length for message field [Distance]
    bufferOffset = _serializer.uint32(obj.Distance.length, buffer, bufferOffset);
    obj.Distance.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Vector3.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ros_cellulo_sensor
    let len;
    let data = new ros_cellulo_sensor(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [detected]
    data.detected = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Distance]
    // Deserialize array length for message field [Distance]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.Distance = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.Distance[i] = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 24 * object.Distance.length;
    return length + 13;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_cellulo_swarm/ros_cellulo_sensor';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2ea4521747ea3688e29a3649a3a4b571';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    time timestamp
    uint8 detected
    geometry_msgs/Vector3[] Distance
    
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ros_cellulo_sensor(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = {secs: 0, nsecs: 0}
    }

    if (msg.detected !== undefined) {
      resolved.detected = msg.detected;
    }
    else {
      resolved.detected = 0
    }

    if (msg.Distance !== undefined) {
      resolved.Distance = new Array(msg.Distance.length);
      for (let i = 0; i < resolved.Distance.length; ++i) {
        resolved.Distance[i] = geometry_msgs.msg.Vector3.Resolve(msg.Distance[i]);
      }
    }
    else {
      resolved.Distance = []
    }

    return resolved;
    }
};

module.exports = ros_cellulo_sensor;
