; Auto-generated. Do not edit!


(cl:in-package ros_cellulo-msg)


;//! \htmlinclude cellulo_pose_velocity.msg.html

(cl:defclass <cellulo_pose_velocity> (roslisp-msg-protocol:ros-message)
  ((Position
    :reader Position
    :initarg :Position
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (Velocity
    :reader Velocity
    :initarg :Velocity
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (xEnabled
    :reader xEnabled
    :initarg :xEnabled
    :type cl:boolean
    :initform cl:nil)
   (yEnabled
    :reader yEnabled
    :initarg :yEnabled
    :type cl:boolean
    :initform cl:nil)
   (thetaEnabled
    :reader thetaEnabled
    :initarg :thetaEnabled
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass cellulo_pose_velocity (<cellulo_pose_velocity>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_pose_velocity>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_pose_velocity)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo-msg:<cellulo_pose_velocity> is deprecated: use ros_cellulo-msg:cellulo_pose_velocity instead.")))

(cl:ensure-generic-function 'Position-val :lambda-list '(m))
(cl:defmethod Position-val ((m <cellulo_pose_velocity>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:Position-val is deprecated.  Use ros_cellulo-msg:Position instead.")
  (Position m))

(cl:ensure-generic-function 'Velocity-val :lambda-list '(m))
(cl:defmethod Velocity-val ((m <cellulo_pose_velocity>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:Velocity-val is deprecated.  Use ros_cellulo-msg:Velocity instead.")
  (Velocity m))

(cl:ensure-generic-function 'xEnabled-val :lambda-list '(m))
(cl:defmethod xEnabled-val ((m <cellulo_pose_velocity>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:xEnabled-val is deprecated.  Use ros_cellulo-msg:xEnabled instead.")
  (xEnabled m))

(cl:ensure-generic-function 'yEnabled-val :lambda-list '(m))
(cl:defmethod yEnabled-val ((m <cellulo_pose_velocity>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:yEnabled-val is deprecated.  Use ros_cellulo-msg:yEnabled instead.")
  (yEnabled m))

(cl:ensure-generic-function 'thetaEnabled-val :lambda-list '(m))
(cl:defmethod thetaEnabled-val ((m <cellulo_pose_velocity>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo-msg:thetaEnabled-val is deprecated.  Use ros_cellulo-msg:thetaEnabled instead.")
  (thetaEnabled m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_pose_velocity>) ostream)
  "Serializes a message object of type '<cellulo_pose_velocity>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'Position) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'Velocity) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'xEnabled) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'yEnabled) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'thetaEnabled) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_pose_velocity>) istream)
  "Deserializes a message object of type '<cellulo_pose_velocity>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'Position) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'Velocity) istream)
    (cl:setf (cl:slot-value msg 'xEnabled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'yEnabled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'thetaEnabled) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_pose_velocity>)))
  "Returns string type for a message object of type '<cellulo_pose_velocity>"
  "ros_cellulo/cellulo_pose_velocity")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_pose_velocity)))
  "Returns string type for a message object of type 'cellulo_pose_velocity"
  "ros_cellulo/cellulo_pose_velocity")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_pose_velocity>)))
  "Returns md5sum for a message object of type '<cellulo_pose_velocity>"
  "018249c62debdcf00e847db2f2416aed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_pose_velocity)))
  "Returns md5sum for a message object of type 'cellulo_pose_velocity"
  "018249c62debdcf00e847db2f2416aed")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_pose_velocity>)))
  "Returns full string definition for message of type '<cellulo_pose_velocity>"
  (cl:format cl:nil "geometry_msgs/Point Position ~%geometry_msgs/Point Velocity ~%bool xEnabled~%bool yEnabled ~%bool thetaEnabled ~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_pose_velocity)))
  "Returns full string definition for message of type 'cellulo_pose_velocity"
  (cl:format cl:nil "geometry_msgs/Point Position ~%geometry_msgs/Point Velocity ~%bool xEnabled~%bool yEnabled ~%bool thetaEnabled ~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_pose_velocity>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'Position))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'Velocity))
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_pose_velocity>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_pose_velocity
    (cl:cons ':Position (Position msg))
    (cl:cons ':Velocity (Velocity msg))
    (cl:cons ':xEnabled (xEnabled msg))
    (cl:cons ':yEnabled (yEnabled msg))
    (cl:cons ':thetaEnabled (thetaEnabled msg))
))
