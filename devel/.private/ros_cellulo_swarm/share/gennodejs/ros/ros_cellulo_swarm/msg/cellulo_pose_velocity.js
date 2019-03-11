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

class cellulo_pose_velocity {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Position = null;
      this.Velocity = null;
      this.xEnabled = null;
      this.yEnabled = null;
      this.thetaEnabled = null;
    }
    else {
      if (initObj.hasOwnProperty('Position')) {
        this.Position = initObj.Position
      }
      else {
        this.Position = new geometry_msgs.msg.Point();
      }
      if (initObj.hasOwnProperty('Velocity')) {
        this.Velocity = initObj.Velocity
      }
      else {
        this.Velocity = new geometry_msgs.msg.Point();
      }
      if (initObj.hasOwnProperty('xEnabled')) {
        this.xEnabled = initObj.xEnabled
      }
      else {
        this.xEnabled = false;
      }
      if (initObj.hasOwnProperty('yEnabled')) {
        this.yEnabled = initObj.yEnabled
      }
      else {
        this.yEnabled = false;
      }
      if (initObj.hasOwnProperty('thetaEnabled')) {
        this.thetaEnabled = initObj.thetaEnabled
      }
      else {
        this.thetaEnabled = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cellulo_pose_velocity
    // Serialize message field [Position]
    bufferOffset = geometry_msgs.msg.Point.serialize(obj.Position, buffer, bufferOffset);
    // Serialize message field [Velocity]
    bufferOffset = geometry_msgs.msg.Point.serialize(obj.Velocity, buffer, bufferOffset);
    // Serialize message field [xEnabled]
    bufferOffset = _serializer.bool(obj.xEnabled, buffer, bufferOffset);
    // Serialize message field [yEnabled]
    bufferOffset = _serializer.bool(obj.yEnabled, buffer, bufferOffset);
    // Serialize message field [thetaEnabled]
    bufferOffset = _serializer.bool(obj.thetaEnabled, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cellulo_pose_velocity
    let len;
    let data = new cellulo_pose_velocity(null);
    // Deserialize message field [Position]
    data.Position = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset);
    // Deserialize message field [Velocity]
    data.Velocity = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset);
    // Deserialize message field [xEnabled]
    data.xEnabled = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [yEnabled]
    data.yEnabled = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [thetaEnabled]
    data.thetaEnabled = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 51;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_cellulo_swarm/cellulo_pose_velocity';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '018249c62debdcf00e847db2f2416aed';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Point Position 
    geometry_msgs/Point Velocity 
    bool xEnabled
    bool yEnabled 
    bool thetaEnabled 
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
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
    const resolved = new cellulo_pose_velocity(null);
    if (msg.Position !== undefined) {
      resolved.Position = geometry_msgs.msg.Point.Resolve(msg.Position)
    }
    else {
      resolved.Position = new geometry_msgs.msg.Point()
    }

    if (msg.Velocity !== undefined) {
      resolved.Velocity = geometry_msgs.msg.Point.Resolve(msg.Velocity)
    }
    else {
      resolved.Velocity = new geometry_msgs.msg.Point()
    }

    if (msg.xEnabled !== undefined) {
      resolved.xEnabled = msg.xEnabled;
    }
    else {
      resolved.xEnabled = false
    }

    if (msg.yEnabled !== undefined) {
      resolved.yEnabled = msg.yEnabled;
    }
    else {
      resolved.yEnabled = false
    }

    if (msg.thetaEnabled !== undefined) {
      resolved.thetaEnabled = msg.thetaEnabled;
    }
    else {
      resolved.thetaEnabled = false
    }

    return resolved;
    }
};

module.exports = cellulo_pose_velocity;
