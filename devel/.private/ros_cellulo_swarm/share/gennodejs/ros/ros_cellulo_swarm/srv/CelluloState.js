// Auto-generated. Do not edit!

// (in-package ros_cellulo_swarm.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let std_msgs = _finder('std_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class CelluloStateRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CelluloStateRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CelluloStateRequest
    let len;
    let data = new CelluloStateRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ros_cellulo_swarm/CelluloStateRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CelluloStateRequest(null);
    return resolved;
    }
};

class CelluloStateResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Position = null;
      this.vy = null;
      this.vx = null;
      this.w = null;
      this.kidnapped = null;
      this.keysTouched = null;
      this.keysLongTouched = null;
    }
    else {
      if (initObj.hasOwnProperty('Position')) {
        this.Position = initObj.Position
      }
      else {
        this.Position = new geometry_msgs.msg.TransformStamped();
      }
      if (initObj.hasOwnProperty('vy')) {
        this.vy = initObj.vy
      }
      else {
        this.vy = new std_msgs.msg.Float64();
      }
      if (initObj.hasOwnProperty('vx')) {
        this.vx = initObj.vx
      }
      else {
        this.vx = new std_msgs.msg.Float64();
      }
      if (initObj.hasOwnProperty('w')) {
        this.w = initObj.w
      }
      else {
        this.w = new std_msgs.msg.Float64();
      }
      if (initObj.hasOwnProperty('kidnapped')) {
        this.kidnapped = initObj.kidnapped
      }
      else {
        this.kidnapped = false;
      }
      if (initObj.hasOwnProperty('keysTouched')) {
        this.keysTouched = initObj.keysTouched
      }
      else {
        this.keysTouched = [];
      }
      if (initObj.hasOwnProperty('keysLongTouched')) {
        this.keysLongTouched = initObj.keysLongTouched
      }
      else {
        this.keysLongTouched = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CelluloStateResponse
    // Serialize message field [Position]
    bufferOffset = geometry_msgs.msg.TransformStamped.serialize(obj.Position, buffer, bufferOffset);
    // Serialize message field [vy]
    bufferOffset = std_msgs.msg.Float64.serialize(obj.vy, buffer, bufferOffset);
    // Serialize message field [vx]
    bufferOffset = std_msgs.msg.Float64.serialize(obj.vx, buffer, bufferOffset);
    // Serialize message field [w]
    bufferOffset = std_msgs.msg.Float64.serialize(obj.w, buffer, bufferOffset);
    // Serialize message field [kidnapped]
    bufferOffset = _serializer.bool(obj.kidnapped, buffer, bufferOffset);
    // Serialize message field [keysTouched]
    bufferOffset = _arraySerializer.bool(obj.keysTouched, buffer, bufferOffset, null);
    // Serialize message field [keysLongTouched]
    bufferOffset = _arraySerializer.bool(obj.keysLongTouched, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CelluloStateResponse
    let len;
    let data = new CelluloStateResponse(null);
    // Deserialize message field [Position]
    data.Position = geometry_msgs.msg.TransformStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [vy]
    data.vy = std_msgs.msg.Float64.deserialize(buffer, bufferOffset);
    // Deserialize message field [vx]
    data.vx = std_msgs.msg.Float64.deserialize(buffer, bufferOffset);
    // Deserialize message field [w]
    data.w = std_msgs.msg.Float64.deserialize(buffer, bufferOffset);
    // Deserialize message field [kidnapped]
    data.kidnapped = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [keysTouched]
    data.keysTouched = _arrayDeserializer.bool(buffer, bufferOffset, null)
    // Deserialize message field [keysLongTouched]
    data.keysLongTouched = _arrayDeserializer.bool(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.TransformStamped.getMessageSize(object.Position);
    length += object.keysTouched.length;
    length += object.keysLongTouched.length;
    return length + 33;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ros_cellulo_swarm/CelluloStateResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8bdab235f1da303d0e5f6b768207e8cb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/TransformStamped Position
    std_msgs/Float64 vy
    std_msgs/Float64 vx
    std_msgs/Float64 w
    bool kidnapped
    bool[] keysTouched
    bool[] keysLongTouched
    
    
    ================================================================================
    MSG: geometry_msgs/TransformStamped
    # This expresses a transform from coordinate frame header.frame_id
    # to the coordinate frame child_frame_id
    #
    # This message is mostly used by the 
    # <a href="http://wiki.ros.org/tf">tf</a> package. 
    # See its documentation for more information.
    
    Header header
    string child_frame_id # the frame id of the child frame
    Transform transform
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Transform
    # This represents the transform between two coordinate frames in free space.
    
    Vector3 translation
    Quaternion rotation
    
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
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: std_msgs/Float64
    float64 data
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CelluloStateResponse(null);
    if (msg.Position !== undefined) {
      resolved.Position = geometry_msgs.msg.TransformStamped.Resolve(msg.Position)
    }
    else {
      resolved.Position = new geometry_msgs.msg.TransformStamped()
    }

    if (msg.vy !== undefined) {
      resolved.vy = std_msgs.msg.Float64.Resolve(msg.vy)
    }
    else {
      resolved.vy = new std_msgs.msg.Float64()
    }

    if (msg.vx !== undefined) {
      resolved.vx = std_msgs.msg.Float64.Resolve(msg.vx)
    }
    else {
      resolved.vx = new std_msgs.msg.Float64()
    }

    if (msg.w !== undefined) {
      resolved.w = std_msgs.msg.Float64.Resolve(msg.w)
    }
    else {
      resolved.w = new std_msgs.msg.Float64()
    }

    if (msg.kidnapped !== undefined) {
      resolved.kidnapped = msg.kidnapped;
    }
    else {
      resolved.kidnapped = false
    }

    if (msg.keysTouched !== undefined) {
      resolved.keysTouched = msg.keysTouched;
    }
    else {
      resolved.keysTouched = []
    }

    if (msg.keysLongTouched !== undefined) {
      resolved.keysLongTouched = msg.keysLongTouched;
    }
    else {
      resolved.keysLongTouched = []
    }

    return resolved;
    }
};

module.exports = {
  Request: CelluloStateRequest,
  Response: CelluloStateResponse,
  md5sum() { return '8bdab235f1da303d0e5f6b768207e8cb'; },
  datatype() { return 'ros_cellulo_swarm/CelluloState'; }
};
