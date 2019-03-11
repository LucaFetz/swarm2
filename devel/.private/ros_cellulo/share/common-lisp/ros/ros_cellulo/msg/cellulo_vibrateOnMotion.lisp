; Auto-generated. Do not edit!


(cl:in-package ros_cellulo-msg)


;//! \htmlinclude cellulo_vibrateOnMotion.msg.html

(cl:defclass <cellulo_vibrateOnMotion> (roslisp-msg-protocol:ros-message)
  ((iCoeff
    :reader iCoeff
    :initarg :iCoeff
    :type cl:float
    :initform 0.0)
   (period
    :reader period
    :initarg :period
    :type cl:fixnum
    :initform 0))
)

(cl:defclass cellulo_vibrateOnMotion (<cellulo_vibrateOnMotion>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_vibrateOnMotion>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_vibrateOnMotion)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo-msg:<cellulo_vibrateOnMotion> is deprecated: use ros_cellulo-msg:cellulo_vibrateOnMotion instead.")))

(cl:ensure-generic-function 'iCoeff-val :lambda-list '(m))
(cl:defmethod iCoeff-val ((m <cellulo_vibrateOnMotion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:iCoeff-val is deprecated.  Use ros_cellulo-msg:iCoeff instead.")
  (iCoeff m))

(cl:ensure-generic-function 'period-val :lambda-list '(m))
(cl:defmethod period-val ((m <cellulo_vibrateOnMotion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:period-val is deprecated.  Use ros_cellulo-msg:period instead.")
  (period m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_vibrateOnMotion>) ostream)
  "Serializes a message object of type '<cellulo_vibrateOnMotion>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'iCoeff))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'period)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_vibrateOnMotion>) istream)
  "Deserializes a message object of type '<cellulo_vibrateOnMotion>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'iCoeff) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'period)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_vibrateOnMotion>)))
  "Returns string type for a message object of type '<cellulo_vibrateOnMotion>"
  "ros_cellulo/cellulo_vibrateOnMotion")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_vibrateOnMotion)))
  "Returns string type for a message object of type 'cellulo_vibrateOnMotion"
  "ros_cellulo/cellulo_vibrateOnMotion")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_vibrateOnMotion>)))
  "Returns md5sum for a message object of type '<cellulo_vibrateOnMotion>"
  "31f7864f30b1c9bccea79efef1e50285")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_vibrateOnMotion)))
  "Returns md5sum for a message object of type 'cellulo_vibrateOnMotion"
  "31f7864f30b1c9bccea79efef1e50285")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_vibrateOnMotion>)))
  "Returns full string definition for message of type '<cellulo_vibrateOnMotion>"
  (cl:format cl:nil "float32 iCoeff~%uint8 period~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_vibrateOnMotion)))
  "Returns full string definition for message of type 'cellulo_vibrateOnMotion"
  (cl:format cl:nil "float32 iCoeff~%uint8 period~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_vibrateOnMotion>))
  (cl:+ 0
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_vibrateOnMotion>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_vibrateOnMotion
    (cl:cons ':iCoeff (iCoeff msg))
    (cl:cons ':period (period msg))
))
