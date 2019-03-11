; Auto-generated. Do not edit!


(cl:in-package ros_cellulo_swarm-msg)


;//! \htmlinclude ros_cellulo_sensor.msg.html

(cl:defclass <ros_cellulo_sensor> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:real
    :initform 0)
   (detected
    :reader detected
    :initarg :detected
    :type cl:fixnum
    :initform 0)
   (Distance
    :reader Distance
    :initarg :Distance
    :type (cl:vector geometry_msgs-msg:Vector3)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Vector3 :initial-element (cl:make-instance 'geometry_msgs-msg:Vector3))))
)

(cl:defclass ros_cellulo_sensor (<ros_cellulo_sensor>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ros_cellulo_sensor>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ros_cellulo_sensor)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-msg:<ros_cellulo_sensor> is deprecated: use ros_cellulo_swarm-msg:ros_cellulo_sensor instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <ros_cellulo_sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:timestamp-val is deprecated.  Use ros_cellulo_swarm-msg:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'detected-val :lambda-list '(m))
(cl:defmethod detected-val ((m <ros_cellulo_sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:detected-val is deprecated.  Use ros_cellulo_swarm-msg:detected instead.")
  (detected m))

(cl:ensure-generic-function 'Distance-val :lambda-list '(m))
(cl:defmethod Distance-val ((m <ros_cellulo_sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:Distance-val is deprecated.  Use ros_cellulo_swarm-msg:Distance instead.")
  (Distance m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ros_cellulo_sensor>) ostream)
  "Serializes a message object of type '<ros_cellulo_sensor>"
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'timestamp)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'timestamp) (cl:floor (cl:slot-value msg 'timestamp)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'detected)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'Distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'Distance))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ros_cellulo_sensor>) istream)
  "Deserializes a message object of type '<ros_cellulo_sensor>"
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'timestamp) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'detected)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'Distance) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'Distance)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Vector3))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ros_cellulo_sensor>)))
  "Returns string type for a message object of type '<ros_cellulo_sensor>"
  "ros_cellulo_swarm/ros_cellulo_sensor")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ros_cellulo_sensor)))
  "Returns string type for a message object of type 'ros_cellulo_sensor"
  "ros_cellulo_swarm/ros_cellulo_sensor")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ros_cellulo_sensor>)))
  "Returns md5sum for a message object of type '<ros_cellulo_sensor>"
  "2ea4521747ea3688e29a3649a3a4b571")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ros_cellulo_sensor)))
  "Returns md5sum for a message object of type 'ros_cellulo_sensor"
  "2ea4521747ea3688e29a3649a3a4b571")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ros_cellulo_sensor>)))
  "Returns full string definition for message of type '<ros_cellulo_sensor>"
  (cl:format cl:nil "time timestamp~%uint8 detected~%geometry_msgs/Vector3[] Distance~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ros_cellulo_sensor)))
  "Returns full string definition for message of type 'ros_cellulo_sensor"
  (cl:format cl:nil "time timestamp~%uint8 detected~%geometry_msgs/Vector3[] Distance~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ros_cellulo_sensor>))
  (cl:+ 0
     8
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'Distance) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ros_cellulo_sensor>))
  "Converts a ROS message object to a list"
  (cl:list 'ros_cellulo_sensor
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':detected (detected msg))
    (cl:cons ':Distance (Distance msg))
))
