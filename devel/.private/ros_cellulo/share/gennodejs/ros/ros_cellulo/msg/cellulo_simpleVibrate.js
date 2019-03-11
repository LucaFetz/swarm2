// Auto-generated. Do not edit!

// (in-package ros_cellulo.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class cellulo_simpleVibrate {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pose = null;
      this.period = null;
      this.duration = null;
    }
    else {
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new geometry_msgs.msg.Pose2D();
      }
      if (initObj.hasOwnProperty('period')) {
        this.period = initObj.period
      }
      else {
        this.period = 0;
      }
      if (initObj.hasOwnProperty('duration')) {
        this.duration = initObj.duration
      }
      else {
        this.duration = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cellulo_simpleVibrate
    // Serialize message field [pose]
    bufferOffset = geometry_msgs.msg.Pose2D.serialize(obj.pose, buffer, bufferOffset);
    // Serialize message field [period]
    bufferOffset = _serializer.uint8(obj.period, buffer, bufferOffset);
    // Serialize message field [duration]
    bufferOffset = _serializer.uint8(obj.duration, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cellulo_simpleVibrate
    let len;
    let data = new cellulo_simpleVibrate(null);
    // Deserialize message field [pose]
    data.pose = geometry_msgs.msg.Pose2D.deserialize(buffer, bufferOffset);
    // Deserialize message field [period]
    data.period = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [duration]
    data.duration = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 26;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_cellulo/cellulo_simpleVibrate';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9bf8782bb7ffa65e26a87eaf466aeecf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Pose2D pose
    uint8 period
    uint8 duration
    
    ================================================================================
    MSG: geometry_msgs/Pose2D
    # This expresses a position and orientation on a 2D manifold.
    
    float64 x
    float64 y
    float64 theta
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cellulo_simpleVibrate(null);
    if (msg.pose !== undefined) {
      resolved.pose = geometry_msgs.msg.Pose2D.Resolve(msg.pose)
    }
    else {
      resolved.pose = new geometry_msgs.msg.Pose2D()
    }

    if (msg.period !== undefined) {
      resolved.period = msg.period;
    }
    else {
      resolved.period = 0
    }

    if (msg.duration !== undefined) {
      resolved.duration = msg.duration;
    }
    else {
      resolved.duration = 0
    }

    return resolved;
    }
};

module.exports = cellulo_simpleVibrate;
