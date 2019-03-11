;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo_swarm::CelluloState)
  (if (not (find-package "ROS_CELLULO_SWARM"))
    (make-package "ROS_CELLULO_SWARM"))
  (shadow 'CelluloState (find-package "ROS_CELLULO_SWARM")))
(unless (find-package "ROS_CELLULO_SWARM::CELLULOSTATE")
  (make-package "ROS_CELLULO_SWARM::CELLULOSTATE"))
(unless (find-package "ROS_CELLULO_SWARM::CELLULOSTATEREQUEST")
  (make-package "ROS_CELLULO_SWARM::CELLULOSTATEREQUEST"))
(unless (find-package "ROS_CELLULO_SWARM::CELLULOSTATERESPONSE")
  (make-package "ROS_CELLULO_SWARM::CELLULOSTATERESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_cellulo_swarm::CelluloStateRequest
  :super ros::object
  :slots ())

(defmethod ros_cellulo_swarm::CelluloStateRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass ros_cellulo_swarm::CelluloStateResponse
  :super ros::object
  :slots (_Position _vy _vx _w _kidnapped _keysTouched _keysLongTouched ))

(defmethod ros_cellulo_swarm::CelluloStateResponse
  (:init
   (&key
    ((:Position __Position) (instance geometry_msgs::TransformStamped :init))
    ((:vy __vy) (instance std_msgs::Float64 :init))
    ((:vx __vx) (instance std_msgs::Float64 :init))
    ((:w __w) (instance std_msgs::Float64 :init))
    ((:kidnapped __kidnapped) nil)
    ((:keysTouched __keysTouched) (let (r) (dotimes (i 0) (push nil r)) r))
    ((:keysLongTouched __keysLongTouched) (let (r) (dotimes (i 0) (push nil r)) r))
    )
   (send-super :init)
   (setq _Position __Position)
   (setq _vy __vy)
   (setq _vx __vx)
   (setq _w __w)
   (setq _kidnapped __kidnapped)
   (setq _keysTouched __keysTouched)
   (setq _keysLongTouched __keysLongTouched)
   self)
  (:Position
   (&rest __Position)
   (if (keywordp (car __Position))
       (send* _Position __Position)
     (progn
       (if __Position (setq _Position (car __Position)))
       _Position)))
  (:vy
   (&rest __vy)
   (if (keywordp (car __vy))
       (send* _vy __vy)
     (progn
       (if __vy (setq _vy (car __vy)))
       _vy)))
  (:vx
   (&rest __vx)
   (if (keywordp (car __vx))
       (send* _vx __vx)
     (progn
       (if __vx (setq _vx (car __vx)))
       _vx)))
  (:w
   (&rest __w)
   (if (keywordp (car __w))
       (send* _w __w)
     (progn
       (if __w (setq _w (car __w)))
       _w)))
  (:kidnapped
   (&optional __kidnapped)
   (if __kidnapped (setq _kidnapped __kidnapped)) _kidnapped)
  (:keysTouched
   (&optional __keysTouched)
   (if __keysTouched (setq _keysTouched __keysTouched)) _keysTouched)
  (:keysLongTouched
   (&optional __keysLongTouched)
   (if __keysLongTouched (setq _keysLongTouched __keysLongTouched)) _keysLongTouched)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/TransformStamped _Position
    (send _Position :serialization-length)
    ;; std_msgs/Float64 _vy
    (send _vy :serialization-length)
    ;; std_msgs/Float64 _vx
    (send _vx :serialization-length)
    ;; std_msgs/Float64 _w
    (send _w :serialization-length)
    ;; bool _kidnapped
    1
    ;; bool[] _keysTouched
    (* 1    (length _keysTouched)) 4
    ;; bool[] _keysLongTouched
    (* 1    (length _keysLongTouched)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/TransformStamped _Position
       (send _Position :serialize s)
     ;; std_msgs/Float64 _vy
       (send _vy :serialize s)
     ;; std_msgs/Float64 _vx
       (send _vx :serialize s)
     ;; std_msgs/Float64 _w
       (send _w :serialize s)
     ;; bool _kidnapped
       (if _kidnapped (write-byte -1 s) (write-byte 0 s))
     ;; bool[] _keysTouched
     (write-long (length _keysTouched) s)
     (dotimes (i (length _keysTouched))
       (if (elt _keysTouched i) (write-byte -1 s) (write-byte 0 s))
       )
     ;; bool[] _keysLongTouched
     (write-long (length _keysLongTouched) s)
     (dotimes (i (length _keysLongTouched))
       (if (elt _keysLongTouched i) (write-byte -1 s) (write-byte 0 s))
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/TransformStamped _Position
     (send _Position :deserialize buf ptr-) (incf ptr- (send _Position :serialization-length))
   ;; std_msgs/Float64 _vy
     (send _vy :deserialize buf ptr-) (incf ptr- (send _vy :serialization-length))
   ;; std_msgs/Float64 _vx
     (send _vx :deserialize buf ptr-) (incf ptr- (send _vx :serialization-length))
   ;; std_msgs/Float64 _w
     (send _w :deserialize buf ptr-) (incf ptr- (send _w :serialization-length))
   ;; bool _kidnapped
     (setq _kidnapped (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool[] _keysTouched
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _keysTouched (make-list n))
     (dotimes (i n)
     (setf (elt _keysTouched i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;; bool[] _keysLongTouched
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _keysLongTouched (make-list n))
     (dotimes (i n)
     (setf (elt _keysLongTouched i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;;
   self)
  )

(defclass ros_cellulo_swarm::CelluloState
  :super ros::object
  :slots ())

(setf (get ros_cellulo_swarm::CelluloState :md5sum-) "8bdab235f1da303d0e5f6b768207e8cb")
(setf (get ros_cellulo_swarm::CelluloState :datatype-) "ros_cellulo_swarm/CelluloState")
(setf (get ros_cellulo_swarm::CelluloState :request) ros_cellulo_swarm::CelluloStateRequest)
(setf (get ros_cellulo_swarm::CelluloState :response) ros_cellulo_swarm::CelluloStateResponse)

(defmethod ros_cellulo_swarm::CelluloStateRequest
  (:response () (instance ros_cellulo_swarm::CelluloStateResponse :init)))

(setf (get ros_cellulo_swarm::CelluloStateRequest :md5sum-) "8bdab235f1da303d0e5f6b768207e8cb")
(setf (get ros_cellulo_swarm::CelluloStateRequest :datatype-) "ros_cellulo_swarm/CelluloStateRequest")
(setf (get ros_cellulo_swarm::CelluloStateRequest :definition-)
      "---
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
# <a href=\"http://wiki.ros.org/tf\">tf</a> package. 
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
")

(setf (get ros_cellulo_swarm::CelluloStateResponse :md5sum-) "8bdab235f1da303d0e5f6b768207e8cb")
(setf (get ros_cellulo_swarm::CelluloStateResponse :datatype-) "ros_cellulo_swarm/CelluloStateResponse")
(setf (get ros_cellulo_swarm::CelluloStateResponse :definition-)
      "---
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
# <a href=\"http://wiki.ros.org/tf\">tf</a> package. 
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
")



(provide :ros_cellulo_swarm/CelluloState "8bdab235f1da303d0e5f6b768207e8cb")


