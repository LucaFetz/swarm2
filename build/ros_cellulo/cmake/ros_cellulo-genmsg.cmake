# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "ros_cellulo: 7 messages, 1 services")

set(MSG_I_FLAGS "-Iros_cellulo:/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(ros_cellulo_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" "geometry_msgs/TransformStamped:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Vector3:geometry_msgs/Transform:std_msgs/Float64"
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" ""
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" "geometry_msgs/Point"
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" "geometry_msgs/Pose2D"
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" ""
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" ""
)

get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" NAME_WE)
add_custom_target(_ros_cellulo_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ros_cellulo" "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)

### Generating Services
_generate_srv_cpp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TransformStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float64.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
)

### Generating Module File
_generate_module_cpp(ros_cellulo
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(ros_cellulo_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(ros_cellulo_generate_messages ros_cellulo_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_cpp _ros_cellulo_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ros_cellulo_gencpp)
add_dependencies(ros_cellulo_gencpp ros_cellulo_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ros_cellulo_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)
_generate_msg_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)

### Generating Services
_generate_srv_eus(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TransformStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float64.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
)

### Generating Module File
_generate_module_eus(ros_cellulo
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(ros_cellulo_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(ros_cellulo_generate_messages ros_cellulo_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_eus _ros_cellulo_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ros_cellulo_geneus)
add_dependencies(ros_cellulo_geneus ros_cellulo_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ros_cellulo_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)
_generate_msg_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)

### Generating Services
_generate_srv_lisp(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TransformStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float64.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
)

### Generating Module File
_generate_module_lisp(ros_cellulo
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(ros_cellulo_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(ros_cellulo_generate_messages ros_cellulo_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_lisp _ros_cellulo_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ros_cellulo_genlisp)
add_dependencies(ros_cellulo_genlisp ros_cellulo_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ros_cellulo_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)
_generate_msg_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)

### Generating Services
_generate_srv_nodejs(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TransformStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float64.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
)

### Generating Module File
_generate_module_nodejs(ros_cellulo
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(ros_cellulo_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(ros_cellulo_generate_messages ros_cellulo_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_nodejs _ros_cellulo_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ros_cellulo_gennodejs)
add_dependencies(ros_cellulo_gennodejs ros_cellulo_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ros_cellulo_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)
_generate_msg_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)

### Generating Services
_generate_srv_py(ros_cellulo
  "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TransformStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float64.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
)

### Generating Module File
_generate_module_py(ros_cellulo
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(ros_cellulo_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(ros_cellulo_generate_messages ros_cellulo_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/srv/CelluloState.srv" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_touch_key.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_pose_velocity.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_kidnapped_msg.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_simpleVibrate.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_vibrateOnMotion.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_visual_effect.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg/cellulo_coord.msg" NAME_WE)
add_dependencies(ros_cellulo_generate_messages_py _ros_cellulo_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ros_cellulo_genpy)
add_dependencies(ros_cellulo_genpy ros_cellulo_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ros_cellulo_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ros_cellulo
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(ros_cellulo_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(ros_cellulo_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ros_cellulo
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(ros_cellulo_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(ros_cellulo_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ros_cellulo
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(ros_cellulo_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(ros_cellulo_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ros_cellulo
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(ros_cellulo_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(ros_cellulo_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ros_cellulo
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(ros_cellulo_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(ros_cellulo_generate_messages_py geometry_msgs_generate_messages_py)
endif()
