
(cl:in-package :asdf)

(defsystem "ros_cellulo_swarm-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "CelluloState" :depends-on ("_package_CelluloState"))
    (:file "_package_CelluloState" :depends-on ("_package"))
  ))