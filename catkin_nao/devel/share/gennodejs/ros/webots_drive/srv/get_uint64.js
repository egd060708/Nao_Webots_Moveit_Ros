// Auto-generated. Do not edit!

// (in-package webots_drive.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class get_uint64Request {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.ask = null;
    }
    else {
      if (initObj.hasOwnProperty('ask')) {
        this.ask = initObj.ask
      }
      else {
        this.ask = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type get_uint64Request
    // Serialize message field [ask]
    bufferOffset = _serializer.bool(obj.ask, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type get_uint64Request
    let len;
    let data = new get_uint64Request(null);
    // Deserialize message field [ask]
    data.ask = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'webots_drive/get_uint64Request';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fbe9700edfca44c5eefb040d9b60f6d6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool ask
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new get_uint64Request(null);
    if (msg.ask !== undefined) {
      resolved.ask = msg.ask;
    }
    else {
      resolved.ask = false
    }

    return resolved;
    }
};

class get_uint64Response {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.value = null;
    }
    else {
      if (initObj.hasOwnProperty('value')) {
        this.value = initObj.value
      }
      else {
        this.value = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type get_uint64Response
    // Serialize message field [value]
    bufferOffset = _serializer.uint64(obj.value, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type get_uint64Response
    let len;
    let data = new get_uint64Response(null);
    // Deserialize message field [value]
    data.value = _deserializer.uint64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'webots_drive/get_uint64Response';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a2c9fb44e48f75feda2746b01055cfa1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint64 value
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new get_uint64Response(null);
    if (msg.value !== undefined) {
      resolved.value = msg.value;
    }
    else {
      resolved.value = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: get_uint64Request,
  Response: get_uint64Response,
  md5sum() { return 'd531f9d37648dc4de8bf2e757ee280a0'; },
  datatype() { return 'webots_drive/get_uint64'; }
};
