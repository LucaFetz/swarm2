;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo_swarm::cellulo_touch_key)
  (if (not (find-package "ROS_CELLULO_SWARM"))
    (make-package "ROS_CELLULO_SWARM"))
  (shadow 'cellulo_touch_key (find-package "ROS_CELLULO_SWARM")))
(unless (find-package "ROS_CELLULO_SWARM::CELLULO_TOUCH_KEY")
  (make-package "ROS_CELLULO_SWARM::CELLULO_TOUCH_KEY"))

(in-package "ROS")
;;//! \htmlinclude cellulo_touch_key.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_cellulo_swarm::cellulo_touch_key
  :super ros::object
  :slots (_header _keysTouched ))

(defmethod ros_cellulo_swarm::cellulo_touch_key
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:keysTouched __keysTouched) (let (r) (dotimes (i 0) (push nil r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _keysTouched __keysTouched)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:keysTouched
   (&optional __keysTouched)
   (if __keysTouched (setq _keysTouched __keysTouched)) _keysTouched)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool[] _keysTouched
    (* 1    (length _keysTouched)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool[] _keysTouched
     (write-long (length _keysTouched) s)
     (dotimes (i (length _keysTouched))
       (if (elt _keysTouched i) (write-byte -1 s) (write-byte 0 s))
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool[] _keysTouched
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _keysTouched (make-list n))
     (dotimes (i n)
     (setf (elt _keysTouched i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;;
   self)
  )

(setf (get ros_cellulo_swarm::cellulo_touch_key :md5sum-) "96a4e050938b99b4a757105a6b2a4c3d")
(setf (get ros_cellulo_swarm::cellulo_touch_key :datatype-) "ros_cellulo_swarm/cellulo_touch_key")
(setf (get ros_cellulo_swarm::cellulo_touch_key :definition-)
      "Header header
bool[] keysTouched



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



(provide :ros_cellulo_swarm/cellulo_touch_key "96a4e050938b99b4a757105a6b2a4c3d")


