; Auto-generated. Do not edit!


(cl:in-package ros_cellulo-msg)


;//! \htmlinclude cellulo_touch_key.msg.html

(cl:defclass <cellulo_touch_key> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:real
    :initform 0)
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
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo-msg:<cellulo_touch_key> is deprecated: use ros_cellulo-msg:cellulo_touch_key instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <cellulo_touch_key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:timestamp-val is deprecated.  Use ros_cellulo-msg:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'keysTouched-val :lambda-list '(m))
(cl:defmethod keysTouched-val ((m <cellulo_touch_key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:keysTouched-val is deprecated.  Use ros_cellulo-msg:keysTouched instead.")
  (keysTouched m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_touch_key>) ostream)
  "Serializes a message object of type '<cellulo_touch_key>"
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
  "ros_cellulo/cellulo_touch_key")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_touch_key)))
  "Returns string type for a message object of type 'cellulo_touch_key"
  "ros_cellulo/cellulo_touch_key")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_touch_key>)))
  "Returns md5sum for a message object of type '<cellulo_touch_key>"
  "38607ca2eb2d571f9c232f6d6f20d9ec")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_touch_key)))
  "Returns md5sum for a message object of type 'cellulo_touch_key"
  "38607ca2eb2d571f9c232f6d6f20d9ec")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_touch_key>)))
  "Returns full string definition for message of type '<cellulo_touch_key>"
  (cl:format cl:nil "time timestamp~%bool[] keysTouched~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_touch_key)))
  "Returns full string definition for message of type 'cellulo_touch_key"
  (cl:format cl:nil "time timestamp~%bool[] keysTouched~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_touch_key>))
  (cl:+ 0
     8
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'keysTouched) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_touch_key>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_touch_key
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':keysTouched (keysTouched msg))
))
