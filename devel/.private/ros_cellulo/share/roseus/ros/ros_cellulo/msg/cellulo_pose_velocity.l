;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo::cellulo_pose_velocity)
  (if (not (find-package "ROS_CELLULO"))
    (make-package "ROS_CELLULO"))
  (shadow 'cellulo_pose_velocity (find-package "ROS_CELLULO")))
(unless (find-package "ROS_CELLULO::CELLULO_POSE_VELOCITY")
  (make-package "ROS_CELLULO::CELLULO_POSE_VELOCITY"))

(in-package "ROS")
;;//! \htmlinclude cellulo_pose_velocity.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass ros_cellulo::cellulo_pose_velocity
  :super ros::object
  :slots (_Position _Velocity _xEnabled _yEnabled _thetaEnabled ))

(defmethod ros_cellulo::cellulo_pose_velocity
  (:init
   (&key
    ((:Position __Position) (instance geometry_msgs::Point :init))
    ((:Velocity __Velocity) (instance geometry_msgs::Point :init))
    ((:xEnabled __xEnabled) nil)
    ((:yEnabled __yEnabled) nil)
    ((:thetaEnabled __thetaEnabled) nil)
    )
   (send-super :init)
   (setq _Position __Position)
   (setq _Velocity __Velocity)
   (setq _xEnabled __xEnabled)
   (setq _yEnabled __yEnabled)
   (setq _thetaEnabled __thetaEnabled)
   self)
  (:Position
   (&rest __Position)
   (if (keywordp (car __Position))
       (send* _Position __Position)
     (progn
       (if __Position (setq _Position (car __Position)))
       _Position)))
  (:Velocity
   (&rest __Velocity)
   (if (keywordp (car __Velocity))
       (send* _Velocity __Velocity)
     (progn
       (if __Velocity (setq _Velocity (car __Velocity)))
       _Velocity)))
  (:xEnabled
   (&optional __xEnabled)
   (if __xEnabled (setq _xEnabled __xEnabled)) _xEnabled)
  (:yEnabled
   (&optional __yEnabled)
   (if __yEnabled (setq _yEnabled __yEnabled)) _yEnabled)
  (:thetaEnabled
   (&optional __thetaEnabled)
   (if __thetaEnabled (setq _thetaEnabled __thetaEnabled)) _thetaEnabled)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point _Position
    (send _Position :serialization-length)
    ;; geometry_msgs/Point _Velocity
    (send _Velocity :serialization-length)
    ;; bool _xEnabled
    1
    ;; bool _yEnabled
    1
    ;; bool _thetaEnabled
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point _Position
       (send _Position :serialize s)
     ;; geometry_msgs/Point _Velocity
       (send _Velocity :serialize s)
     ;; bool _xEnabled
       (if _xEnabled (write-byte -1 s) (write-byte 0 s))
     ;; bool _yEnabled
       (if _yEnabled (write-byte -1 s) (write-byte 0 s))
     ;; bool _thetaEnabled
       (if _thetaEnabled (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point _Position
     (send _Position :deserialize buf ptr-) (incf ptr- (send _Position :serialization-length))
   ;; geometry_msgs/Point _Velocity
     (send _Velocity :deserialize buf ptr-) (incf ptr- (send _Velocity :serialization-length))
   ;; bool _xEnabled
     (setq _xEnabled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _yEnabled
     (setq _yEnabled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _thetaEnabled
     (setq _thetaEnabled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get ros_cellulo::cellulo_pose_velocity :md5sum-) "018249c62debdcf00e847db2f2416aed")
(setf (get ros_cellulo::cellulo_pose_velocity :datatype-) "ros_cellulo/cellulo_pose_velocity")
(setf (get ros_cellulo::cellulo_pose_velocity :definition-)
      "geometry_msgs/Point Position 
geometry_msgs/Point Velocity 
bool xEnabled
bool yEnabled 
bool thetaEnabled 

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :ros_cellulo/cellulo_pose_velocity "018249c62debdcf00e847db2f2416aed")


