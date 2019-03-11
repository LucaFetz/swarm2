;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo_swarm::cellulo_kidnapped_msg)
  (if (not (find-package "ROS_CELLULO_SWARM"))
    (make-package "ROS_CELLULO_SWARM"))
  (shadow 'cellulo_kidnapped_msg (find-package "ROS_CELLULO_SWARM")))
(unless (find-package "ROS_CELLULO_SWARM::CELLULO_KIDNAPPED_MSG")
  (make-package "ROS_CELLULO_SWARM::CELLULO_KIDNAPPED_MSG"))

(in-package "ROS")
;;//! \htmlinclude cellulo_kidnapped_msg.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_cellulo_swarm::cellulo_kidnapped_msg
  :super ros::object
  :slots (_header _Kidnapped ))

(defmethod ros_cellulo_swarm::cellulo_kidnapped_msg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:Kidnapped __Kidnapped) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _Kidnapped __Kidnapped)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:Kidnapped
   (&optional __Kidnapped)
   (if __Kidnapped (setq _Kidnapped __Kidnapped)) _Kidnapped)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _Kidnapped
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _Kidnapped
       (if _Kidnapped (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _Kidnapped
     (setq _Kidnapped (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get ros_cellulo_swarm::cellulo_kidnapped_msg :md5sum-) "fd84e6888c9c70c3657abf61d1bb0c9e")
(setf (get ros_cellulo_swarm::cellulo_kidnapped_msg :datatype-) "ros_cellulo_swarm/cellulo_kidnapped_msg")
(setf (get ros_cellulo_swarm::cellulo_kidnapped_msg :definition-)
      "Header header
bool Kidnapped


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

")



(provide :ros_cellulo_swarm/cellulo_kidnapped_msg "fd84e6888c9c70c3657abf61d1bb0c9e")


