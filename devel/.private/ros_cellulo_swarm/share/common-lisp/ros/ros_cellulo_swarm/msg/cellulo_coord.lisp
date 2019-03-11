; Auto-generated. Do not edit!


(cl:in-package ros_cellulo_swarm-msg)


;//! \htmlinclude cellulo_coord.msg.html

(cl:defclass <cellulo_coord> (roslisp-msg-protocol:ros-message)
  ((value
    :reader value
    :initarg :value
    :type cl:float
    :initform 0.0)
   (velocity
    :reader velocity
    :initarg :velocity
    :type cl:float
    :initform 0.0))
)

(cl:defclass cellulo_coord (<cellulo_coord>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_coord>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_coord)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-msg:<cellulo_coord> is deprecated: use ros_cellulo_swarm-msg:cellulo_coord instead.")))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <cellulo_coord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:value-val is deprecated.  Use ros_cellulo_swarm-msg:value instead.")
  (value m))

(cl:ensure-generic-function 'velocity-val :lambda-list '(m))
(cl:defmethod velocity-val ((m <cellulo_coord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:velocity-val is deprecated.  Use ros_cellulo_swarm-msg:velocity instead.")
  (velocity m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_coord>) ostream)
  "Serializes a message object of type '<cellulo_coord>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_coord>) istream)
  "Deserializes a message object of type '<cellulo_coord>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'value) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'velocity) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_coord>)))
  "Returns string type for a message object of type '<cellulo_coord>"
  "ros_cellulo_swarm/cellulo_coord")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_coord)))
  "Returns string type for a message object of type 'cellulo_coord"
  "ros_cellulo_swarm/cellulo_coord")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_coord>)))
  "Returns md5sum for a message object of type '<cellulo_coord>"
  "39825886b3f5e61f4aa7ddf0db826301")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_coord)))
  "Returns md5sum for a message object of type 'cellulo_coord"
  "39825886b3f5e61f4aa7ddf0db826301")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_coord>)))
  "Returns full string definition for message of type '<cellulo_coord>"
  (cl:format cl:nil "float32 value~%float32 velocity~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_coord)))
  "Returns full string definition for message of type 'cellulo_coord"
  (cl:format cl:nil "float32 value~%float32 velocity~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_coord>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_coord>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_coord
    (cl:cons ':value (value msg))
    (cl:cons ':velocity (velocity msg))
))
