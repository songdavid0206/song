// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__struct.h"
#include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool urp_cvt_interfaces__srv__generate_cvt_samples__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("urp_cvt_interfaces.srv._generate_cvt_samples.GenerateCVTSamples_Request", full_classname_dest, 71) == 0);
  }
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request * ros_message = _ros_message;
  {  // x_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k
    PyObject * field = PyObject_GetAttrString(_pymsg, "k");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->k = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tool_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // overlap
    PyObject * field = PyObject_GetAttrString(_pymsg, "overlap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->overlap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_iters
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_iters");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_iters = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // eps
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // seed
    PyObject * field = PyObject_GetAttrString(_pymsg, "seed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // grid_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "grid_step");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->grid_step = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * urp_cvt_interfaces__srv__generate_cvt_samples__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateCVTSamples_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("urp_cvt_interfaces.srv._generate_cvt_samples");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateCVTSamples_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request * ros_message = (urp_cvt_interfaces__srv__GenerateCVTSamples_Request *)raw_ros_message;
  {  // x_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->k);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overlap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->overlap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overlap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_iters
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_iters);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_iters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->seed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grid_step
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->grid_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grid_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__struct.h"
// already included above
// #include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool urp_cvt_interfaces__srv__generate_cvt_samples__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("urp_cvt_interfaces.srv._generate_cvt_samples.GenerateCVTSamples_Response", full_classname_dest, 72) == 0);
  }
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response * ros_message = _ros_message;
  {  // waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_array__convert_from_py(field, &ros_message->waypoints)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mean_movement
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_movement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mean_movement = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iters
    PyObject * field = PyObject_GetAttrString(_pymsg, "iters");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iters = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * urp_cvt_interfaces__srv__generate_cvt_samples__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateCVTSamples_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("urp_cvt_interfaces.srv._generate_cvt_samples");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateCVTSamples_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response * ros_message = (urp_cvt_interfaces__srv__GenerateCVTSamples_Response *)raw_ros_message;
  {  // waypoints
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_array__convert_to_py(&ros_message->waypoints);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_movement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mean_movement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_movement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iters
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->iters);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
