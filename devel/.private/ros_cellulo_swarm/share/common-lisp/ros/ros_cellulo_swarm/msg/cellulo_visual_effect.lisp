; Auto-generated. Do not edit!


(cl:in-package ros_cellulo_swarm-msg)


;//! \htmlinclude cellulo_visual_effect.msg.html

(cl:defclass <cellulo_visual_effect> (roslisp-msg-protocol:ros-message)
  ((effect
    :reader effect
    :initarg :effect
    :type cl:fixnum
    :initform 0)
   (red
    :reader red
    :initarg :red
    :type cl:fixnum
    :initform 0)
   (green
    :reader green
    :initarg :green
    :type cl:fixnum
    :initform 0)
   (blue
    :reader blue
    :initarg :blue
    :type cl:fixnum
    :initform 0)
   (value
    :reader value
    :initarg :value
    :type cl:fixnum
    :initform 0))
)

(cl:defclass cellulo_visual_effect (<cellulo_visual_effect>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_visual_effect>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_visual_effect)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-msg:<cellulo_visual_effect> is deprecated: use ros_cellulo_swarm-msg:cellulo_visual_effect instead.")))

(cl:ensure-generic-function 'effect-val :lambda-list '(m))
(cl:defmethod effect-val ((m <cellulo_visual_effect>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:effect-val is deprecated.  Use ros_cellulo_swarm-msg:effect instead.")
  (effect m))

(cl:ensure-generic-function 'red-val :lambda-list '(m))
(cl:defmethod red-val ((m <cellulo_visual_effect>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:red-val is deprecated.  Use ros_cellulo_swarm-msg:red instead.")
  (red m))

(cl:ensure-generic-function 'green-val :lambda-list '(m))
(cl:defmethod green-val ((m <cellulo_visual_effect>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:green-val is deprecated.  Use ros_cellulo_swarm-msg:green instead.")
  (green m))

(cl:ensure-generic-function 'blue-val :lambda-list '(m))
(cl:defmethod blue-val ((m <cellulo_visual_effect>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:blue-val is deprecated.  Use ros_cellulo_swarm-msg:blue instead.")
  (blue m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <cellulo_visual_effect>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:value-val is deprecated.  Use ros_cellulo_swarm-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_visual_effect>) ostream)
  "Serializes a message object of type '<cellulo_visual_effect>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'effect)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'red)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'green)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'blue)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_visual_effect>) istream)
  "Deserializes a message object of type '<cellulo_visual_effect>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'effect)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'red)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'green)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'blue)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_visual_effect>)))
  "Returns string type for a message object of type '<cellulo_visual_effect>"
  "ros_cellulo_swarm/cellulo_visual_effect")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_visual_effect)))
  "Returns string type for a message object of type 'cellulo_visual_effect"
  "ros_cellulo_swarm/cellulo_visual_effect")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_visual_effect>)))
  "Returns md5sum for a message object of type '<cellulo_visual_effect>"
  "b75a11a8484f25e95441feb7621b408f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_visual_effect)))
  "Returns md5sum for a message object of type 'cellulo_visual_effect"
  "b75a11a8484f25e95441feb7621b408f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_visual_effect>)))
  "Returns full string definition for message of type '<cellulo_visual_effect>"
  (cl:format cl:nil "uint8 effect ~%uint8 red ~%uint8 green ~%uint8 blue ~%uint8 value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_visual_effect)))
  "Returns full string definition for message of type 'cellulo_visual_effect"
  (cl:format cl:nil "uint8 effect ~%uint8 red ~%uint8 green ~%uint8 blue ~%uint8 value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_visual_effect>))
  (cl:+ 0
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_visual_effect>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_visual_effect
    (cl:cons ':effect (effect msg))
    (cl:cons ':red (red msg))
    (cl:cons ':green (green msg))
    (cl:cons ':blue (blue msg))
    (cl:cons ':value (value msg))
))
