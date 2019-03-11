; Auto-generated. Do not edit!


(cl:in-package ros_cellulo_swarm-msg)


;//! \htmlinclude cellulo_touch_key.msg.html

(cl:defclass <cellulo_touch_key> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (keysTouched
    :reader keysTouched
    :initarg :keysTouched
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil)))
)

(cl:defclass cellulo_touch_key (<cellulo_touch_key>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_touch_key>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_touch_key)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-msg:<cellulo_touch_key> is deprecated: use ros_cellulo_swarm-msg:cellulo_touch_key instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <cellulo_touch_key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:header-val is deprecated.  Use ros_cellulo_swarm-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'keysTouched-val :lambda-list '(m))
(cl:defmethod keysTouched-val ((m <cellulo_touch_key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:keysTouched-val is deprecated.  Use ros_cellulo_swarm-msg:keysTouched instead.")
  (keysTouched m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_touch_key>) ostream)
  "Serializes a message object of type '<cellulo_touch_key>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'keysTouched))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'keysTouched))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_touch_key>) istream)
  "Deserializes a message object of type '<cellulo_touch_key>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'keysTouched) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'keysTouched)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_touch_key>)))
  "Returns string type for a message object of type '<cellulo_touch_key>"
  "ros_cellulo_swarm/cellulo_touch_key")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_touch_key)))
  "Returns string type for a message object of type 'cellulo_touch_key"
  "ros_cellulo_swarm/cellulo_touch_key")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_touch_key>)))
  "Returns md5sum for a message object of type '<cellulo_touch_key>"
  "96a4e050938b99b4a757105a6b2a4c3d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_touch_key)))
  "Returns md5sum for a message object of type 'cellulo_touch_key"
  "96a4e050938b99b4a757105a6b2a4c3d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_touch_key>)))
  "Returns full string definition for message of type '<cellulo_touch_key>"
  (cl:format cl:nil "Header header~%bool[] keysTouched~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_touch_key)))
  "Returns full string definition for message of type 'cellulo_touch_key"
  (cl:format cl:nil "Header header~%bool[] keysTouched~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_touch_key>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'keysTouched) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_touch_key>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_touch_key
    (cl:cons ':header (header msg))
    (cl:cons ':keysTouched (keysTouched msg))
))
