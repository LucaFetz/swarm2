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

class cellulo_visual_effect {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.effect = null;
      this.red = null;
      this.green = null;
      this.blue = null;
      this.value = null;
    }
    else {
      if (initObj.hasOwnProperty('effect')) {
        this.effect = initObj.effect
      }
      else {
        this.effect = 0;
      }
      if (initObj.hasOwnProperty('red')) {
        this.red = initObj.red
      }
      else {
        this.red = 0;
      }
      if (initObj.hasOwnProperty('green')) {
        this.green = initObj.green
      }
      else {
        this.green = 0;
      }
      if (initObj.hasOwnProperty('blue')) {
        this.blue = initObj.blue
      }
      else {
        this.blue = 0;
      }
      if (initObj.hasOwnProperty('value')) {
        this.value = initObj.value
      }
      else {
        this.value = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cellulo_visual_effect
    // Serialize message field [effect]
    bufferOffset = _serializer.uint8(obj.effect, buffer, bufferOffset);
    // Serialize message field [red]
    bufferOffset = _serializer.uint8(obj.red, buffer, bufferOffset);
    // Serialize message field [green]
    bufferOffset = _serializer.uint8(obj.green, buffer, bufferOffset);
    // Serialize message field [blue]
    bufferOffset = _serializer.uint8(obj.blue, buffer, bufferOffset);
    // Serialize message field [value]
    bufferOffset = _serializer.uint8(obj.value, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cellulo_visual_effect
    let len;
    let data = new cellulo_visual_effect(null);
    // Deserialize message field [effect]
    data.effect = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [red]
    data.red = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [green]
    data.green = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [blue]
    data.blue = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [value]
    data.value = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_cellulo/cellulo_visual_effect';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b75a11a8484f25e95441feb7621b408f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 effect 
    uint8 red 
    uint8 green 
    uint8 blue 
    uint8 value
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cellulo_visual_effect(null);
    if (msg.effect !== undefined) {
      resolved.effect = msg.effect;
    }
    else {
      resolved.effect = 0
    }

    if (msg.red !== undefined) {
      resolved.red = msg.red;
    }
    else {
      resolved.red = 0
    }

    if (msg.green !== undefined) {
      resolved.green = msg.green;
    }
    else {
      resolved.green = 0
    }

    if (msg.blue !== undefined) {
      resolved.blue = msg.blue;
    }
    else {
      resolved.blue = 0
    }

    if (msg.value !== undefined) {
      resolved.value = msg.value;
    }
    else {
      resolved.value = 0
    }

    return resolved;
    }
};

module.exports = cellulo_visual_effect;
