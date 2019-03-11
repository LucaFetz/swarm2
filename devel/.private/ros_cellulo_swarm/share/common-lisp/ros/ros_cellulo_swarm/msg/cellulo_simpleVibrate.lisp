; Auto-generated. Do not edit!


(cl:in-package ros_cellulo_swarm-msg)


;//! \htmlinclude cellulo_simpleVibrate.msg.html

(cl:defclass <cellulo_simpleVibrate> (roslisp-msg-protocol:ros-message)
  ((pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D))
   (period
    :reader period
    :initarg :period
    :type cl:fixnum
    :initform 0)
   (duration
    :reader duration
    :initarg :duration
    :type cl:fixnum
    :initform 0))
)

(cl:defclass cellulo_simpleVibrate (<cellulo_simpleVibrate>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cellulo_simpleVibrate>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cellulo_simpleVibrate)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_cellulo_swarm-msg:<cellulo_simpleVibrate> is deprecated: use ros_cellulo_swarm-msg:cellulo_simpleVibrate instead.")))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <cellulo_simpleVibrate>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:pose-val is deprecated.  Use ros_cellulo_swarm-msg:pose instead.")
  (pose m))

(cl:ensure-generic-function 'period-val :lambda-list '(m))
(cl:defmethod period-val ((m <cellulo_simpleVibrate>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:period-val is deprecated.  Use ros_cellulo_swarm-msg:period instead.")
  (period m))

(cl:ensure-generic-function 'duration-val :lambda-list '(m))
(cl:defmethod duration-val ((m <cellulo_simpleVibrate>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_cellulo_swarm-msg:duration-val is deprecated.  Use ros_cellulo_swarm-msg:duration instead.")
  (duration m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cellulo_simpleVibrate>) ostream)
  "Serializes a message object of type '<cellulo_simpleVibrate>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'period)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'duration)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cellulo_simpleVibrate>) istream)
  "Deserializes a message object of type '<cellulo_simpleVibrate>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'period)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'duration)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cellulo_simpleVibrate>)))
  "Returns string type for a message object of type '<cellulo_simpleVibrate>"
  "ros_cellulo_swarm/cellulo_simpleVibrate")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cellulo_simpleVibrate)))
  "Returns string type for a message object of type 'cellulo_simpleVibrate"
  "ros_cellulo_swarm/cellulo_simpleVibrate")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cellulo_simpleVibrate>)))
  "Returns md5sum for a message object of type '<cellulo_simpleVibrate>"
  "9bf8782bb7ffa65e26a87eaf466aeecf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cellulo_simpleVibrate)))
  "Returns md5sum for a message object of type 'cellulo_simpleVibrate"
  "9bf8782bb7ffa65e26a87eaf466aeecf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cellulo_simpleVibrate>)))
  "Returns full string definition for message of type '<cellulo_simpleVibrate>"
  (cl:format cl:nil "geometry_msgs/Pose2D pose~%uint8 period~%uint8 duration~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cellulo_simpleVibrate)))
  "Returns full string definition for message of type 'cellulo_simpleVibrate"
  (cl:format cl:nil "geometry_msgs/Pose2D pose~%uint8 period~%uint8 duration~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cellulo_simpleVibrate>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cellulo_simpleVibrate>))
  "Converts a ROS message object to a list"
  (cl:list 'cellulo_simpleVibrate
    (cl:cons ':pose (pose msg))
    (cl:cons ':period (period msg))
    (cl:cons ':duration (duration msg))
))
