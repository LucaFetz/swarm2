; Auto-generated. Do not edit!


(cl:in-package ros_cellulo-msg)


;//! \htmlinclude cellulo_kidnapped_msg.msg.html

(cl:defclass <cellulo_kidnapped_msg> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (Kidnapped
    :reader Kidnapped
    :initarg :Kidnapped
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass cellulo_kidnapped_msg (<cellulo_kidnapped_msg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_kidnapped_msg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_kidnapped_msg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo-msg:<cellulo_kidnapped_msg> is deprecated: use ros_cellulo-msg:cellulo_kidnapped_msg instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <cellulo_kidnapped_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:header-val is deprecated.  Use ros_cellulo-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'Kidnapped-val :lambda-list '(m))
(cl:defmethod Kidnapped-val ((m <cellulo_kidnapped_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:Kidnapped-val is deprecated.  Use ros_cellulo-msg:Kidnapped instead.")
  (Kidnapped m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_kidnapped_msg>) ostream)
  "Serializes a message object of type '<cellulo_kidnapped_msg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Kidnapped) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_kidnapped_msg>) istream)
  "Deserializes a message object of type '<cellulo_kidnapped_msg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'Kidnapped) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_kidnapped_msg>)))
  "Returns string type for a message object of type '<cellulo_kidnapped_msg>"
  "ros_cellulo/cellulo_kidnapped_msg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_kidnapped_msg)))
  "Returns string type for a message object of type 'cellulo_kidnapped_msg"
  "ros_cellulo/cellulo_kidnapped_msg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_kidnapped_msg>)))
  "Returns md5sum for a message object of type '<cellulo_kidnapped_msg>"
  "fd84e6888c9c70c3657abf61d1bb0c9e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_kidnapped_msg)))
  "Returns md5sum for a message object of type 'cellulo_kidnapped_msg"
  "fd84e6888c9c70c3657abf61d1bb0c9e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_kidnapped_msg>)))
  "Returns full string definition for message of type '<cellulo_kidnapped_msg>"
  (cl:format cl:nil "Header header~%bool Kidnapped~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_kidnapped_msg)))
  "Returns full string definition for message of type 'cellulo_kidnapped_msg"
  (cl:format cl:nil "Header header~%bool Kidnapped~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_kidnapped_msg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_kidnapped_msg>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_kidnapped_msg
    (cl:cons ':header (header msg))
    (cl:cons ':Kidnapped (Kidnapped msg))
))
