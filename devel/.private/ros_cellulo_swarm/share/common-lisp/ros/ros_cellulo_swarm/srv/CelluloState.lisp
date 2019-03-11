; Auto-generated. Do not edit!


(cl:in-package ros_cellulo_swarm-srv)


;//! \htmlinclude CelluloState-request.msg.html

(cl:defclass <CelluloState-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass CelluloState-request (<CelluloState-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CelluloState-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CelluloState-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-srv:<CelluloState-request> is deprecated: use ros_cellulo_swarm-srv:CelluloState-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CelluloState-request>) ostream)
  "Serializes a message object of type '<CelluloState-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CelluloState-request>) istream)
  "Deserializes a message object of type '<CelluloState-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CelluloState-request>)))
  "Returns string type for a service object of type '<CelluloState-request>"
  "ros_cellulo_swarm/CelluloStateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CelluloState-request)))
  "Returns string type for a service object of type 'CelluloState-request"
  "ros_cellulo_swarm/CelluloStateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CelluloState-request>)))
  "Returns md5sum for a message object of type '<CelluloState-request>"
  "8bdab235f1da303d0e5f6b768207e8cb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CelluloState-request)))
  "Returns md5sum for a message object of type 'CelluloState-request"
  "8bdab235f1da303d0e5f6b768207e8cb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CelluloState-request>)))
  "Returns full string definition for message of type '<CelluloState-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CelluloState-request)))
  "Returns full string definition for message of type 'CelluloState-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CelluloState-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CelluloState-request>))
  "Converts a ROS message object to a list"
  (cl:list 'CelluloState-request
))
;//! \htmlinclude CelluloState-response.msg.html

(cl:defclass <CelluloState-response> (roslisp-msg-protocol:ros-message)
  ((Position
    :reader Position
    :initarg :Position
    :type geometry_msgs-msg:TransformStamped
    :initform (cl:make-instance 'geometry_msgs-msg:TransformStamped))
   (vy
    :reader vy
    :initarg :vy
    :type std_msgs-msg:Float64
    :initform (cl:make-instance 'std_msgs-msg:Float64))
   (vx
    :reader vx
    :initarg :vx
    :type std_msgs-msg:Float64
    :initform (cl:make-instance 'std_msgs-msg:Float64))
   (w
    :reader w
    :initarg :w
    :type std_msgs-msg:Float64
    :initform (cl:make-instance 'std_msgs-msg:Float64))
   (kidnapped
    :reader kidnapped
    :initarg :kidnapped
    :type cl:boolean
    :initform cl:nil)
   (keysTouched
    :reader keysTouched
    :initarg :keysTouched
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil))
   (keysLongTouched
    :reader keysLongTouched
    :initarg :keysLongTouched
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil)))
)

(cl:defclass CelluloState-response (<CelluloState-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CelluloState-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CelluloState-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-srv:<CelluloState-response> is deprecated: use ros_cellulo_swarm-srv:CelluloState-response instead.")))

(cl:ensure-generic-function 'Position-val :lambda-list '(m))
(cl:defmethod Position-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:Position-val is deprecated.  Use ros_cellulo_swarm-srv:Position instead.")
  (Position m))

(cl:ensure-generic-function 'vy-val :lambda-list '(m))
(cl:defmethod vy-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:vy-val is deprecated.  Use ros_cellulo_swarm-srv:vy instead.")
  (vy m))

(cl:ensure-generic-function 'vx-val :lambda-list '(m))
(cl:defmethod vx-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:vx-val is deprecated.  Use ros_cellulo_swarm-srv:vx instead.")
  (vx m))

(cl:ensure-generic-function 'w-val :lambda-list '(m))
(cl:defmethod w-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:w-val is deprecated.  Use ros_cellulo_swarm-srv:w instead.")
  (w m))

(cl:ensure-generic-function 'kidnapped-val :lambda-list '(m))
(cl:defmethod kidnapped-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:kidnapped-val is deprecated.  Use ros_cellulo_swarm-srv:kidnapped instead.")
  (kidnapped m))

(cl:ensure-generic-function 'keysTouched-val :lambda-list '(m))
(cl:defmethod keysTouched-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:keysTouched-val is deprecated.  Use ros_cellulo_swarm-srv:keysTouched instead.")
  (keysTouched m))

(cl:ensure-generic-function 'keysLongTouched-val :lambda-list '(m))
(cl:defmethod keysLongTouched-val ((m <CelluloState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-srv:keysLongTouched-val is deprecated.  Use ros_cellulo_swarm-srv:keysLongTouched instead.")
  (keysLongTouched m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CelluloState-response>) ostream)
  "Serializes a message object of type '<CelluloState-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'Position) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'vy) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'vx) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'w) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'kidnapped) 1 0)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'keysTouched))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'keysTouched))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'keysLongTouched))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'keysLongTouched))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CelluloState-response>) istream)
  "Deserializes a message object of type '<CelluloState-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'Position) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'vy) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'vx) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'w) istream)
    (cl:setf (cl:slot-value msg 'kidnapped) (cl:not (cl:zerop (cl:read-byte istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'keysTouched) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'keysTouched)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'keysLongTouched) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'keysLongTouched)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CelluloState-response>)))
  "Returns string type for a service object of type '<CelluloState-response>"
  "ros_cellulo_swarm/CelluloStateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CelluloState-response)))
  "Returns string type for a service object of type 'CelluloState-response"
  "ros_cellulo_swarm/CelluloStateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CelluloState-response>)))
  "Returns md5sum for a message object of type '<CelluloState-response>"
  "8bdab235f1da303d0e5f6b768207e8cb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CelluloState-response)))
  "Returns md5sum for a message object of type 'CelluloState-response"
  "8bdab235f1da303d0e5f6b768207e8cb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CelluloState-response>)))
  "Returns full string definition for message of type '<CelluloState-response>"
  (cl:format cl:nil "geometry_msgs/TransformStamped Position~%std_msgs/Float64 vy~%std_msgs/Float64 vx~%std_msgs/Float64 w~%bool kidnapped~%bool[] keysTouched~%bool[] keysLongTouched~%~%~%================================================================================~%MSG: geometry_msgs/TransformStamped~%# This expresses a transform from coordinate frame header.frame_id~%# to the coordinate frame child_frame_id~%#~%# This message is mostly used by the ~%# <a href=\"http://wiki.ros.org/tf\">tf</a> package. ~%# See its documentation for more information.~%~%Header header~%string child_frame_id # the frame id of the child frame~%Transform transform~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: std_msgs/Float64~%float64 data~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CelluloState-response)))
  "Returns full string definition for message of type 'CelluloState-response"
  (cl:format cl:nil "geometry_msgs/TransformStamped Position~%std_msgs/Float64 vy~%std_msgs/Float64 vx~%std_msgs/Float64 w~%bool kidnapped~%bool[] keysTouched~%bool[] keysLongTouched~%~%~%================================================================================~%MSG: geometry_msgs/TransformStamped~%# This expresses a transform from coordinate frame header.frame_id~%# to the coordinate frame child_frame_id~%#~%# This message is mostly used by the ~%# <a href=\"http://wiki.ros.org/tf\">tf</a> package. ~%# See its documentation for more information.~%~%Header header~%string child_frame_id # the frame id of the child frame~%Transform transform~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: std_msgs/Float64~%float64 data~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CelluloState-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'Position))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'vy))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'vx))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'w))
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'keysTouched) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'keysLongTouched) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CelluloState-response>))
  "Converts a ROS message object to a list"
  (cl:list 'CelluloState-response
    (cl:cons ':Position (Position msg))
    (cl:cons ':vy (vy msg))
    (cl:cons ':vx (vx msg))
    (cl:cons ':w (w msg))
    (cl:cons ':kidnapped (kidnapped msg))
    (cl:cons ':keysTouched (keysTouched msg))
    (cl:cons ':keysLongTouched (keysLongTouched msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'CelluloState)))
  'CelluloState-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'CelluloState)))
  'CelluloState-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CelluloState)))
  "Returns string type for a service object of type '<CelluloState>"
  "ros_cellulo_swarm/CelluloState")