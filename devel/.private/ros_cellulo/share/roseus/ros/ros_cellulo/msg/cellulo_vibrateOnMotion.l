;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo::cellulo_vibrateOnMotion)
  (if (not (find-package "ROS_CELLULO"))
    (make-package "ROS_CELLULO"))
  (shadow 'cellulo_vibrateOnMotion (find-package "ROS_CELLULO")))
(unless (find-package "ROS_CELLULO::CELLULO_VIBRATEONMOTION")
  (make-package "ROS_CELLULO::CELLULO_VIBRATEONMOTION"))

(in-package "ROS")
;;//! \htmlinclude cellulo_vibrateOnMotion.msg.html


(defclass ros_cellulo::cellulo_vibrateOnMotion
  :super ros::object
  :slots (_iCoeff _period ))

(defmethod ros_cellulo::cellulo_vibrateOnMotion
  (:init
   (&key
    ((:iCoeff __iCoeff) 0.0)
    ((:period __period) 0)
    )
   (send-super :init)
   (setq _iCoeff (float __iCoeff))
   (setq _period (round __period))
   self)
  (:iCoeff
   (&optional __iCoeff)
   (if __iCoeff (setq _iCoeff __iCoeff)) _iCoeff)
  (:period
   (&optional __period)
   (if __period (setq _period __period)) _period)
  (:serialization-length
   ()
   (+
    ;; float32 _iCoeff
    4
    ;; uint8 _period
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _iCoeff
       (sys::poke _iCoeff (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _period
       (write-byte _period s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _iCoeff
     (setq _iCoeff (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _period
     (setq _period (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get ros_cellulo::cellulo_vibrateOnMotion :md5sum-) "31f7864f30b1c9bccea79efef1e50285")
(setf (get ros_cellulo::cellulo_vibrateOnMotion :datatype-) "ros_cellulo/cellulo_vibrateOnMotion")
(setf (get ros_cellulo::cellulo_vibrateOnMotion :definition-)
      "float32 iCoeff
uint8 period

")



(provide :ros_cellulo/cellulo_vibrateOnMotion "31f7864f30b1c9bccea79efef1e50285")


