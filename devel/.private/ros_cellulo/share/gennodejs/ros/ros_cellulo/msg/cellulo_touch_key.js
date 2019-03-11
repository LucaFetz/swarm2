// Auto-generated. Do not edit!

// (in-package ros_cellulo.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class cellulo_touch_key {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.keysTouched = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('keysTouched')) {
        this.keysTouched = initObj.keysTouched
      }
      else {
        this.keysTouched = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cellulo_touch_key
    // Serialize message field [timestamp]
    bufferOffset = _serializer.time(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [keysTouched]
    bufferOffset = _arraySerializer.bool(obj.keysTouched, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cellulo_touch_key
    let len;
    let data = new cellulo_touch_key(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [keysTouched]
    data.keysTouched = _arrayDeserializer.bool(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.keysTouched.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_cellulo/cellulo_touch_key';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '38607ca2eb2d571f9c232f6d6f20d9ec';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    time timestamp
    bool[] keysTouched
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cellulo_touch_key(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = {secs: 0, nsecs: 0}
    }

    if (msg.keysTouched !== undefined) {
      resolved.keysTouched = msg.keysTouched;
    }
    else {
      resolved.keysTouched = []
    }

    return resolved;
    }
};

module.exports = cellulo_touch_key;
