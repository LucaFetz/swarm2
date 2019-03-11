
(cl:in-package :asdf)

(defsystem "ros_cellulo-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "cellulo_coord" :depends-on ("_package_cellulo_coord"))
    (:file "_package_cellulo_coord" :depends-on ("_package"))
    (:file "cellulo_kidnapped_msg" :depends-on ("_package_cellulo_kidnapped_msg"))
    (:file "_package_cellulo_kidnapped_msg" :depends-on ("_package"))
    (:file "cellulo_pose_velocity" :depends-on ("_package_cellulo_pose_velocity"))
    (:file "_package_cellulo_pose_velocity" :depends-on ("_package"))
    (:file "cellulo_simpleVibrate" :depends-on ("_package_cellulo_simpleVibrate"))
    (:file "_package_cellulo_simpleVibrate" :depends-on ("_package"))
    (:file "cellulo_touch_key" :depends-on ("_package_cellulo_touch_key"))
    (:file "_package_cellulo_touch_key" :depends-on ("_package"))
    (:file "cellulo_vibrateOnMotion" :depends-on ("_package_cellulo_vibrateOnMotion"))
    (:file "_package_cellulo_vibrateOnMotion" :depends-on ("_package"))
    (:file "cellulo_visual_effect" :depends-on ("_package_cellulo_visual_effect"))
    (:file "_package_cellulo_visual_effect" :depends-on ("_package"))
  ))