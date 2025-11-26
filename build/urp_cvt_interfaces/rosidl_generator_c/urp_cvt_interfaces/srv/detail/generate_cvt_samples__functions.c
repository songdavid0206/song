// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
// generated code does not contain a copyright notice
#include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__init(urp_cvt_interfaces__srv__GenerateCVTSamples_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x_min
  // x_max
  // y_min
  // y_max
  // k
  // tool_width
  // overlap
  // max_iters
  // eps
  // seed
  // grid_step
  return true;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__fini(urp_cvt_interfaces__srv__GenerateCVTSamples_Request * msg)
{
  if (!msg) {
    return;
  }
  // x_min
  // x_max
  // y_min
  // y_max
  // k
  // tool_width
  // overlap
  // max_iters
  // eps
  // seed
  // grid_step
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__are_equal(const urp_cvt_interfaces__srv__GenerateCVTSamples_Request * lhs, const urp_cvt_interfaces__srv__GenerateCVTSamples_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_min
  if (lhs->x_min != rhs->x_min) {
    return false;
  }
  // x_max
  if (lhs->x_max != rhs->x_max) {
    return false;
  }
  // y_min
  if (lhs->y_min != rhs->y_min) {
    return false;
  }
  // y_max
  if (lhs->y_max != rhs->y_max) {
    return false;
  }
  // k
  if (lhs->k != rhs->k) {
    return false;
  }
  // tool_width
  if (lhs->tool_width != rhs->tool_width) {
    return false;
  }
  // overlap
  if (lhs->overlap != rhs->overlap) {
    return false;
  }
  // max_iters
  if (lhs->max_iters != rhs->max_iters) {
    return false;
  }
  // eps
  if (lhs->eps != rhs->eps) {
    return false;
  }
  // seed
  if (lhs->seed != rhs->seed) {
    return false;
  }
  // grid_step
  if (lhs->grid_step != rhs->grid_step) {
    return false;
  }
  return true;
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__copy(
  const urp_cvt_interfaces__srv__GenerateCVTSamples_Request * input,
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x_min
  output->x_min = input->x_min;
  // x_max
  output->x_max = input->x_max;
  // y_min
  output->y_min = input->y_min;
  // y_max
  output->y_max = input->y_max;
  // k
  output->k = input->k;
  // tool_width
  output->tool_width = input->tool_width;
  // overlap
  output->overlap = input->overlap;
  // max_iters
  output->max_iters = input->max_iters;
  // eps
  output->eps = input->eps;
  // seed
  output->seed = input->seed;
  // grid_step
  output->grid_step = input->grid_step;
  return true;
}

urp_cvt_interfaces__srv__GenerateCVTSamples_Request *
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request * msg = (urp_cvt_interfaces__srv__GenerateCVTSamples_Request *)allocator.allocate(sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Request));
  bool success = urp_cvt_interfaces__srv__GenerateCVTSamples_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__destroy(urp_cvt_interfaces__srv__GenerateCVTSamples_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    urp_cvt_interfaces__srv__GenerateCVTSamples_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__init(urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request * data = NULL;

  if (size) {
    data = (urp_cvt_interfaces__srv__GenerateCVTSamples_Request *)allocator.zero_allocate(size, sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = urp_cvt_interfaces__srv__GenerateCVTSamples_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        urp_cvt_interfaces__srv__GenerateCVTSamples_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__fini(urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urp_cvt_interfaces__srv__GenerateCVTSamples_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence *
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * array = (urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence *)allocator.allocate(sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__destroy(urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__are_equal(const urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * lhs, const urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!urp_cvt_interfaces__srv__GenerateCVTSamples_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence__copy(
  const urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * input,
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    urp_cvt_interfaces__srv__GenerateCVTSamples_Request * data =
      (urp_cvt_interfaces__srv__GenerateCVTSamples_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!urp_cvt_interfaces__srv__GenerateCVTSamples_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          urp_cvt_interfaces__srv__GenerateCVTSamples_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!urp_cvt_interfaces__srv__GenerateCVTSamples_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose_array__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__init(urp_cvt_interfaces__srv__GenerateCVTSamples_Response * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseArray__init(&msg->waypoints)) {
    urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(msg);
    return false;
  }
  // success
  // mean_movement
  // iters
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(msg);
    return false;
  }
  return true;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(urp_cvt_interfaces__srv__GenerateCVTSamples_Response * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  geometry_msgs__msg__PoseArray__fini(&msg->waypoints);
  // success
  // mean_movement
  // iters
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__are_equal(const urp_cvt_interfaces__srv__GenerateCVTSamples_Response * lhs, const urp_cvt_interfaces__srv__GenerateCVTSamples_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // mean_movement
  if (lhs->mean_movement != rhs->mean_movement) {
    return false;
  }
  // iters
  if (lhs->iters != rhs->iters) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__copy(
  const urp_cvt_interfaces__srv__GenerateCVTSamples_Response * input,
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // mean_movement
  output->mean_movement = input->mean_movement;
  // iters
  output->iters = input->iters;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

urp_cvt_interfaces__srv__GenerateCVTSamples_Response *
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response * msg = (urp_cvt_interfaces__srv__GenerateCVTSamples_Response *)allocator.allocate(sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Response));
  bool success = urp_cvt_interfaces__srv__GenerateCVTSamples_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__destroy(urp_cvt_interfaces__srv__GenerateCVTSamples_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__init(urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response * data = NULL;

  if (size) {
    data = (urp_cvt_interfaces__srv__GenerateCVTSamples_Response *)allocator.zero_allocate(size, sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = urp_cvt_interfaces__srv__GenerateCVTSamples_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__fini(urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence *
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * array = (urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence *)allocator.allocate(sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__destroy(urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__are_equal(const urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * lhs, const urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!urp_cvt_interfaces__srv__GenerateCVTSamples_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence__copy(
  const urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * input,
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(urp_cvt_interfaces__srv__GenerateCVTSamples_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    urp_cvt_interfaces__srv__GenerateCVTSamples_Response * data =
      (urp_cvt_interfaces__srv__GenerateCVTSamples_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!urp_cvt_interfaces__srv__GenerateCVTSamples_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          urp_cvt_interfaces__srv__GenerateCVTSamples_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!urp_cvt_interfaces__srv__GenerateCVTSamples_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
