;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo_swarm::cellulo_visual_effect)
  (if (not (find-package "ROS_CELLULO_SWARM"))
    (make-package "ROS_CELLULO_SWARM"))
  (shadow 'cellulo_visual_effect (find-package "ROS_CELLULO_SWARM")))
(unless (find-package "ROS_CELLULO_SWARM::CELLULO_VISUAL_EFFECT")
  (make-package "ROS_CELLULO_SWARM::CELLULO_VISUAL_EFFECT"))

(in-package "ROS")
;;//! \htmlinclude cellulo_visual_effect.msg.html


(defclass ros_cellulo_swarm::cellulo_visual_effect
  :super ros::object
  :slots (_effect _red _green _blue _value ))

(defmethod ros_cellulo_swarm::cellulo_visual_effect
  (:init
   (&key
    ((:effect __effect) 0)
    ((:red __red) 0)
    ((:green __green) 0)
    ((:blue __blue) 0)
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _effect (round __effect))
   (setq _red (round __red))
   (setq _green (round __green))
   (setq _blue (round __blue))
   (setq _value (round __value))
   self)
  (:effect
   (&optional __effect)
   (if __effect (setq _effect __effect)) _effect)
  (:red
   (&optional __red)
   (if __red (setq _red __red)) _red)
  (:green
   (&optional __green)
   (if __green (setq _green __green)) _green)
  (:blue
   (&optional __blue)
   (if __blue (setq _blue __blue)) _blue)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; uint8 _effect
    1
    ;; uint8 _red
    1
    ;; uint8 _green
    1
    ;; uint8 _blue
    1
    ;; uint8 _value
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _effect
       (write-byte _effect s)
     ;; uint8 _red
       (write-byte _red s)
     ;; uint8 _green
       (write-byte _green s)
     ;; uint8 _blue
       (write-byte _blue s)
     ;; uint8 _value
       (write-byte _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _effect
     (setq _effect (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _red
     (setq _red (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _green
     (setq _green (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _blue
     (setq _blue (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _value
     (setq _value (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get ros_cellulo_swarm::cellulo_visual_effect :md5sum-) "b75a11a8484f25e95441feb7621b408f")
(setf (get ros_cellulo_swarm::cellulo_visual_effect :datatype-) "ros_cellulo_swarm/cellulo_visual_effect")
(setf (get ros_cellulo_swarm::cellulo_visual_effect :definition-)
      "uint8 effect 
uint8 red 
uint8 green 
uint8 blue 
uint8 value


")



(provide :ros_cellulo_swarm/cellulo_visual_effect "b75a11a8484f25e95441feb7621b408f")


