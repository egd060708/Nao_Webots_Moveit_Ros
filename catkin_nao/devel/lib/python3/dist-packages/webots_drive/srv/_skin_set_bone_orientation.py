# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from webots_drive/skin_set_bone_orientationRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class skin_set_bone_orientationRequest(genpy.Message):
  _md5sum = "a6867b70ac9d0b31fe274f3b1674e6a4"
  _type = "webots_drive/skin_set_bone_orientationRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 index
geometry_msgs/Quaternion orientation
bool absolute

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['index','orientation','absolute']
  _slot_types = ['int32','geometry_msgs/Quaternion','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       index,orientation,absolute

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(skin_set_bone_orientationRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.index is None:
        self.index = 0
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.absolute is None:
        self.absolute = False
    else:
      self.index = 0
      self.orientation = geometry_msgs.msg.Quaternion()
      self.absolute = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_i4dB().pack(_x.index, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.absolute))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      end = 0
      _x = self
      start = end
      end += 37
      (_x.index, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.absolute,) = _get_struct_i4dB().unpack(str[start:end])
      self.absolute = bool(self.absolute)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_i4dB().pack(_x.index, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.absolute))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      end = 0
      _x = self
      start = end
      end += 37
      (_x.index, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.absolute,) = _get_struct_i4dB().unpack(str[start:end])
      self.absolute = bool(self.absolute)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i4dB = None
def _get_struct_i4dB():
    global _struct_i4dB
    if _struct_i4dB is None:
        _struct_i4dB = struct.Struct("<i4dB")
    return _struct_i4dB
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from webots_drive/skin_set_bone_orientationResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class skin_set_bone_orientationResponse(genpy.Message):
  _md5sum = "3c2bcf2ff0894cb3058b1bf4c8c4175a"
  _type = "webots_drive/skin_set_bone_orientationResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 success

"""
  __slots__ = ['success']
  _slot_types = ['int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(skin_set_bone_orientationResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = 0
    else:
      self.success = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.success
      buff.write(_get_struct_i().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (self.success,) = _get_struct_i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.success
      buff.write(_get_struct_i().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (self.success,) = _get_struct_i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
class skin_set_bone_orientation(object):
  _type          = 'webots_drive/skin_set_bone_orientation'
  _md5sum = '3902caf1e5bc44580e05f53048f6318b'
  _request_class  = skin_set_bone_orientationRequest
  _response_class = skin_set_bone_orientationResponse
