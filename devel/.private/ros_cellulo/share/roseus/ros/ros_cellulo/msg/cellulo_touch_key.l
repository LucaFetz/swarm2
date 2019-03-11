;; Auto-generated. Do not edit!


(when (boundp 'ros_cellulo::cellulo_touch_key)
  (if (not (find-package "ROS_CELLULO"))
    (make-package "ROS_CELLULO"))
  (shadow 'cellulo_touch_key (find-package "ROS_CELLULO")))
(unless (find-package "ROS_CELLULO::CELLULO_TOUCH_KEY")
  (make-package "ROS_CELLULO::CELLULO_TOUCH_KEY"))

(in-package "ROS")
;;//! \htmlinclude cellulo_touch_key.msg.html


(defclass ros_cellulo::cellulo_touch_key
  :super ros::object
  :slots (_timestamp _keysTouched ))

(defmethod ros_cellulo::cellulo_touch_key
  (:init
   (&key
    ((:timestamp __timestamp) (instance ros::time :init))
    ((:keysTouched __keysTouched) (let (r) (dotimes (i 0) (push nil r)) r))
    )
   (send-super :init)
   (setq _timestamp __timestamp)
   (setq _keysTouched __keysTouched)
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:keysTouched
   (&optional __keysTouched)
   (if __keysTouched (setq _keysTouched __keysTouched)) _keysTouched)
  (:serialization-length
   ()
   (+
    ;; time _timestamp
    8
    ;; bool[] _keysTouched
    (* 1    (length _keysTouched)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _timestamp
       (write-long (send _timestamp :sec) s) (write-long (send _timestamp :nsec) s)
     ;; bool[] _keysTouched
     (write-long (length _keysTouched) s)
     (dotimes (i (length _keysTouched))
       (if (elt _keysTouched i) (write-byte -1 s) (write-byte 0 s))
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _timestamp
     (send _timestamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _timestamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
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

(setf (get ros_cellulo::cellulo_touch_key :md5sum-) "38607ca2eb2d571f9c232f6d6f20d9ec")
(setf (get ros_cellulo::cellulo_touch_key :datatype-) "ros_cellulo/cellulo_touch_key")
(setf (get ros_cellulo::cellulo_touch_key :definition-)
      "time timestamp
bool[] keysTouched


")



(provide :ros_cellulo/cellulo_touch_key "38607ca2eb2d571f9c232f6d6f20d9ec")


