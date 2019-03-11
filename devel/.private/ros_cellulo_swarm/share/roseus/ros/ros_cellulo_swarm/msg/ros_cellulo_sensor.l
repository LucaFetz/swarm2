;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo_swarm::ros_cellulo_sensor)
  (if (not (find-package "ROS_CELLULO_SWARM"))
    (make-package "ROS_CELLULO_SWARM"))
  (shadow 'ros_cellulo_sensor (find-package "ROS_CELLULO_SWARM")))
(unless (find-package "ROS_CELLULO_SWARM::ROS_CELLULO_SENSOR")
  (make-package "ROS_CELLULO_SWARM::ROS_CELLULO_SENSOR"))

(in-package "ROS")
;;//! \htmlinclude ros_cellulo_sensor.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass ros_cellulo_swarm::ros_cellulo_sensor
  :super ros::object
  :slots (_timestamp _detected _Distance ))

(defmethod ros_cellulo_swarm::ros_cellulo_sensor
  (:init
   (&key
    ((:timestamp __timestamp) (instance ros::time :init))
    ((:detected __detected) 0)
    ((:Distance __Distance) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Vector3 :init) r)) r))
    )
   (send-super :init)
   (setq _timestamp __timestamp)
   (setq _detected (round __detected))
   (setq _Distance __Distance)
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:detected
   (&optional __detected)
   (if __detected (setq _detected __detected)) _detected)
  (:Distance
   (&rest __Distance)
   (if (keywordp (car __Distance))
       (send* _Distance __Distance)
     (progn
       (if __Distance (setq _Distance (car __Distance)))
       _Distance)))
  (:serialization-length
   ()
   (+
    ;; time _timestamp
    8
    ;; uint8 _detected
    1
    ;; geometry_msgs/Vector3[] _Distance
    (apply #'+ (send-all _Distance :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _timestamp
       (write-long (send _timestamp :sec) s) (write-long (send _timestamp :nsec) s)
     ;; uint8 _detected
       (write-byte _detected s)
     ;; geometry_msgs/Vector3[] _Distance
     (write-long (length _Distance) s)
     (dolist (elem _Distance)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _timestamp
     (send _timestamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _timestamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint8 _detected
     (setq _detected (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; geometry_msgs/Vector3[] _Distance
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _Distance (let (r) (dotimes (i n) (push (instance geometry_msgs::Vector3 :init) r)) r))
     (dolist (elem- _Distance)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get ros_cellulo_swarm::ros_cellulo_sensor :md5sum-) "2ea4521747ea3688e29a3649a3a4b571")
(setf (get ros_cellulo_swarm::ros_cellulo_sensor :datatype-) "ros_cellulo_swarm/ros_cellulo_sensor")
(setf (get ros_cellulo_swarm::ros_cellulo_sensor :definition-)
      "time timestamp
uint8 detected
geometry_msgs/Vector3[] Distance


================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :ros_cellulo_swarm/ros_cellulo_sensor "2ea4521747ea3688e29a3649a3a4b571")


