;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo::cellulo_coord)
  (if (not (find-package "ROS_CELLULO"))
    (make-package "ROS_CELLULO"))
  (shadow 'cellulo_coord (find-package "ROS_CELLULO")))
(unless (find-package "ROS_CELLULO::CELLULO_COORD")
  (make-package "ROS_CELLULO::CELLULO_COORD"))

(in-package "ROS")
;;//! \htmlinclude cellulo_coord.msg.html


(defclass ros_cellulo::cellulo_coord
  :super ros::object
  :slots (_value _velocity ))

(defmethod ros_cellulo::cellulo_coord
  (:init
   (&key
    ((:value __value) 0.0)
    ((:velocity __velocity) 0.0)
    )
   (send-super :init)
   (setq _value (float __value))
   (setq _velocity (float __velocity))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:serialization-length
   ()
   (+
    ;; float32 _value
    4
    ;; float32 _velocity
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _value
       (sys::poke _value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _value
     (setq _value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _velocity
     (setq _velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ros_cellulo::cellulo_coord :md5sum-) "39825886b3f5e61f4aa7ddf0db826301")
(setf (get ros_cellulo::cellulo_coord :datatype-) "ros_cellulo/cellulo_coord")
(setf (get ros_cellulo::cellulo_coord :definition-)
      "float32 value
float32 velocity

")



(provide :ros_cellulo/cellulo_coord "39825886b3f5e61f4aa7ddf0db826301")


