# generated from rosidl_generator_py/resource/_idl.py.em
# with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateCVTSamples_Request(type):
    """Metaclass of message 'GenerateCVTSamples_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urp_cvt_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urp_cvt_interfaces.srv.GenerateCVTSamples_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_cvt_samples__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_cvt_samples__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_cvt_samples__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_cvt_samples__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_cvt_samples__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateCVTSamples_Request(metaclass=Metaclass_GenerateCVTSamples_Request):
    """Message class 'GenerateCVTSamples_Request'."""

    __slots__ = [
        '_x_min',
        '_x_max',
        '_y_min',
        '_y_max',
        '_k',
        '_tool_width',
        '_overlap',
        '_max_iters',
        '_eps',
        '_seed',
        '_grid_step',
    ]

    _fields_and_field_types = {
        'x_min': 'double',
        'x_max': 'double',
        'y_min': 'double',
        'y_max': 'double',
        'k': 'int32',
        'tool_width': 'double',
        'overlap': 'double',
        'max_iters': 'int32',
        'eps': 'double',
        'seed': 'int32',
        'grid_step': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_min = kwargs.get('x_min', float())
        self.x_max = kwargs.get('x_max', float())
        self.y_min = kwargs.get('y_min', float())
        self.y_max = kwargs.get('y_max', float())
        self.k = kwargs.get('k', int())
        self.tool_width = kwargs.get('tool_width', float())
        self.overlap = kwargs.get('overlap', float())
        self.max_iters = kwargs.get('max_iters', int())
        self.eps = kwargs.get('eps', float())
        self.seed = kwargs.get('seed', int())
        self.grid_step = kwargs.get('grid_step', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x_min != other.x_min:
            return False
        if self.x_max != other.x_max:
            return False
        if self.y_min != other.y_min:
            return False
        if self.y_max != other.y_max:
            return False
        if self.k != other.k:
            return False
        if self.tool_width != other.tool_width:
            return False
        if self.overlap != other.overlap:
            return False
        if self.max_iters != other.max_iters:
            return False
        if self.eps != other.eps:
            return False
        if self.seed != other.seed:
            return False
        if self.grid_step != other.grid_step:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_min(self):
        """Message field 'x_min'."""
        return self._x_min

    @x_min.setter
    def x_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_min = value

    @builtins.property
    def x_max(self):
        """Message field 'x_max'."""
        return self._x_max

    @x_max.setter
    def x_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_max = value

    @builtins.property
    def y_min(self):
        """Message field 'y_min'."""
        return self._y_min

    @y_min.setter
    def y_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_min = value

    @builtins.property
    def y_max(self):
        """Message field 'y_max'."""
        return self._y_max

    @y_max.setter
    def y_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_max = value

    @builtins.property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'k' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'k' field must be an integer in [-2147483648, 2147483647]"
        self._k = value

    @builtins.property
    def tool_width(self):
        """Message field 'tool_width'."""
        return self._tool_width

    @tool_width.setter
    def tool_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tool_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tool_width = value

    @builtins.property
    def overlap(self):
        """Message field 'overlap'."""
        return self._overlap

    @overlap.setter
    def overlap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'overlap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'overlap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._overlap = value

    @builtins.property
    def max_iters(self):
        """Message field 'max_iters'."""
        return self._max_iters

    @max_iters.setter
    def max_iters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_iters' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_iters' field must be an integer in [-2147483648, 2147483647]"
        self._max_iters = value

    @builtins.property
    def eps(self):
        """Message field 'eps'."""
        return self._eps

    @eps.setter
    def eps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'eps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._eps = value

    @builtins.property
    def seed(self):
        """Message field 'seed'."""
        return self._seed

    @seed.setter
    def seed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seed' field must be an integer in [-2147483648, 2147483647]"
        self._seed = value

    @builtins.property
    def grid_step(self):
        """Message field 'grid_step'."""
        return self._grid_step

    @grid_step.setter
    def grid_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'grid_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'grid_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._grid_step = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateCVTSamples_Response(type):
    """Metaclass of message 'GenerateCVTSamples_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urp_cvt_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urp_cvt_interfaces.srv.GenerateCVTSamples_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_cvt_samples__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_cvt_samples__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_cvt_samples__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_cvt_samples__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_cvt_samples__response

            from geometry_msgs.msg import PoseArray
            if PoseArray.__class__._TYPE_SUPPORT is None:
                PoseArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateCVTSamples_Response(metaclass=Metaclass_GenerateCVTSamples_Response):
    """Message class 'GenerateCVTSamples_Response'."""

    __slots__ = [
        '_waypoints',
        '_success',
        '_mean_movement',
        '_iters',
        '_message',
    ]

    _fields_and_field_types = {
        'waypoints': 'geometry_msgs/PoseArray',
        'success': 'boolean',
        'mean_movement': 'double',
        'iters': 'int32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseArray
        self.waypoints = kwargs.get('waypoints', PoseArray())
        self.success = kwargs.get('success', bool())
        self.mean_movement = kwargs.get('mean_movement', float())
        self.iters = kwargs.get('iters', int())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.success != other.success:
            return False
        if self.mean_movement != other.mean_movement:
            return False
        if self.iters != other.iters:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseArray
            assert \
                isinstance(value, PoseArray), \
                "The 'waypoints' field must be a sub message of type 'PoseArray'"
        self._waypoints = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def mean_movement(self):
        """Message field 'mean_movement'."""
        return self._mean_movement

    @mean_movement.setter
    def mean_movement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mean_movement' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mean_movement' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mean_movement = value

    @builtins.property
    def iters(self):
        """Message field 'iters'."""
        return self._iters

    @iters.setter
    def iters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iters' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'iters' field must be an integer in [-2147483648, 2147483647]"
        self._iters = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_GenerateCVTSamples(type):
    """Metaclass of service 'GenerateCVTSamples'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urp_cvt_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urp_cvt_interfaces.srv.GenerateCVTSamples')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_cvt_samples

            from urp_cvt_interfaces.srv import _generate_cvt_samples
            if _generate_cvt_samples.Metaclass_GenerateCVTSamples_Request._TYPE_SUPPORT is None:
                _generate_cvt_samples.Metaclass_GenerateCVTSamples_Request.__import_type_support__()
            if _generate_cvt_samples.Metaclass_GenerateCVTSamples_Response._TYPE_SUPPORT is None:
                _generate_cvt_samples.Metaclass_GenerateCVTSamples_Response.__import_type_support__()


class GenerateCVTSamples(metaclass=Metaclass_GenerateCVTSamples):
    from urp_cvt_interfaces.srv._generate_cvt_samples import GenerateCVTSamples_Request as Request
    from urp_cvt_interfaces.srv._generate_cvt_samples import GenerateCVTSamples_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
