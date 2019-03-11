;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo_swarm::cellulo_simpleVibrate)
  (if (not (find-package "ROS_CELLULO_SWARM"))
    (make-package "ROS_CELLULO_SWARM"))
  (shadow 'cellulo_simpleVibrate (find-package "ROS_CELLULO_SWARM")))
(unless (find-package "ROS_CELLULO_SWARM::CELLULO_SIMPLEVIBRATE")
  (make-package "ROS_CELLULO_SWARM::CELLULO_SIMPLEVIBRATE"))

(in-package "ROS")
;;//! \htmlinclude cellulo_simpleVibrate.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass ros_cellulo_swarm::cellulo_simpleVibrate
  :super ros::object
  :slots (_pose _period _duration ))

(defmethod ros_cellulo_swarm::cellulo_simpleVibrate
  (:init
   (&key
    ((:pose __pose) (instance geometry_msgs::Pose2D :init))
    ((:period __period) 0)
    ((:duration __duration) 0)
    )
   (send-super :init)
   (setq _pose __pose)
   (setq _period (round __period))
   (setq _duration (round __duration))
   self)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:period
   (&optional __period)
   (if __period (setq _period __period)) _period)
  (:duration
   (&optional __duration)
   (if __duration (setq _duration __duration)) _duration)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose2D _pose
    (send _pose :serialization-length)
    ;; uint8 _period
    1
    ;; uint8 _duration
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose2D _pose
       (send _pose :serialize s)
     ;; uint8 _period
       (write-byte _period s)
     ;; uint8 _duration
       (write-byte _duration s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose2D _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;; uint8 _period
     (setq _period (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _duration
     (setq _duration (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get ros_cellulo_swarm::cellulo_simpleVibrate :md5sum-) "9bf8782bb7ffa65e26a87eaf466aeecf")
(setf (get ros_cellulo_swarm::cellulo_simpleVibrate :datatype-) "ros_cellulo_swarm/cellulo_simpleVibrate")
(setf (get ros_cellulo_swarm::cellulo_simpleVibrate :definition-)
      "geometry_msgs/Pose2D pose
uint8 period
uint8 duration

================================================================================
MSG: geometry_msgs/Pose2D
# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta
")



(provide :ros_cellulo_swarm/cellulo_simpleVibrate "9bf8782bb7ffa65e26a87eaf466aeecf")


