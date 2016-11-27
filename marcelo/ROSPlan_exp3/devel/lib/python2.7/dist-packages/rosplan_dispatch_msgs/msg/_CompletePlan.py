# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosplan_dispatch_msgs/CompletePlan.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import rosplan_dispatch_msgs.msg
import diagnostic_msgs.msg

class CompletePlan(genpy.Message):
  _md5sum = "7e1d10b4d2f9481e13d9d30c7a8045ff"
  _type = "rosplan_dispatch_msgs/CompletePlan"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#completePlan message
ActionDispatch[] plan

================================================================================
MSG: rosplan_dispatch_msgs/ActionDispatch
#actionDispatch message
int32 action_id
string name
diagnostic_msgs/KeyValue[] parameters
float32 duration
float32 dispatch_time

================================================================================
MSG: diagnostic_msgs/KeyValue
string key # what to label this value when viewing
string value # a value to track over time
"""
  __slots__ = ['plan']
  _slot_types = ['rosplan_dispatch_msgs/ActionDispatch[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       plan

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CompletePlan, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.plan is None:
        self.plan = []
    else:
      self.plan = []

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
      length = len(self.plan)
      buff.write(_struct_I.pack(length))
      for val1 in self.plan:
        buff.write(_struct_i.pack(val1.action_id))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(val1.parameters)
        buff.write(_struct_I.pack(length))
        for val2 in val1.parameters:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2f.pack(_x.duration, _x.dispatch_time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.plan is None:
        self.plan = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.plan = []
      for i in range(0, length):
        val1 = rosplan_dispatch_msgs.msg.ActionDispatch()
        start = end
        end += 4
        (val1.action_id,) = _struct_i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.parameters = []
        for i in range(0, length):
          val2 = diagnostic_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8')
          else:
            val2.value = str[start:end]
          val1.parameters.append(val2)
        _x = val1
        start = end
        end += 8
        (_x.duration, _x.dispatch_time,) = _struct_2f.unpack(str[start:end])
        self.plan.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.plan)
      buff.write(_struct_I.pack(length))
      for val1 in self.plan:
        buff.write(_struct_i.pack(val1.action_id))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(val1.parameters)
        buff.write(_struct_I.pack(length))
        for val2 in val1.parameters:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2f.pack(_x.duration, _x.dispatch_time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.plan is None:
        self.plan = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.plan = []
      for i in range(0, length):
        val1 = rosplan_dispatch_msgs.msg.ActionDispatch()
        start = end
        end += 4
        (val1.action_id,) = _struct_i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.parameters = []
        for i in range(0, length):
          val2 = diagnostic_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8')
          else:
            val2.value = str[start:end]
          val1.parameters.append(val2)
        _x = val1
        start = end
        end += 8
        (_x.duration, _x.dispatch_time,) = _struct_2f.unpack(str[start:end])
        self.plan.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i = struct.Struct("<i")
_struct_2f = struct.Struct("<2f")
