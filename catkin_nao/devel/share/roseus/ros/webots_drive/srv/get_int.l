;; Auto-generated. Do not edit!


(when (boundp 'webots_drive::get_int)
  (if (not (find-package "WEBOTS_DRIVE"))
    (make-package "WEBOTS_DRIVE"))
  (shadow 'get_int (find-package "WEBOTS_DRIVE")))
(unless (find-package "WEBOTS_DRIVE::GET_INT")
  (make-package "WEBOTS_DRIVE::GET_INT"))
(unless (find-package "WEBOTS_DRIVE::GET_INTREQUEST")
  (make-package "WEBOTS_DRIVE::GET_INTREQUEST"))
(unless (find-package "WEBOTS_DRIVE::GET_INTRESPONSE")
  (make-package "WEBOTS_DRIVE::GET_INTRESPONSE"))

(in-package "ROS")





(defclass webots_drive::get_intRequest
  :super ros::object
  :slots (_ask ))

(defmethod webots_drive::get_intRequest
  (:init
   (&key
    ((:ask __ask) nil)
    )
   (send-super :init)
   (setq _ask __ask)
   self)
  (:ask
   (&optional (__ask :null))
   (if (not (eq __ask :null)) (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; bool _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _ask
       (if _ask (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _ask
     (setq _ask (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass webots_drive::get_intResponse
  :super ros::object
  :slots (_value ))

(defmethod webots_drive::get_intResponse
  (:init
   (&key
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _value (round __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; int32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _value
       (write-long _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _value
     (setq _value (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass webots_drive::get_int
  :super ros::object
  :slots ())

(setf (get webots_drive::get_int :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get webots_drive::get_int :datatype-) "webots_drive/get_int")
(setf (get webots_drive::get_int :request) webots_drive::get_intRequest)
(setf (get webots_drive::get_int :response) webots_drive::get_intResponse)

(defmethod webots_drive::get_intRequest
  (:response () (instance webots_drive::get_intResponse :init)))

(setf (get webots_drive::get_intRequest :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get webots_drive::get_intRequest :datatype-) "webots_drive/get_intRequest")
(setf (get webots_drive::get_intRequest :definition-)
      "bool ask
---
int32 value

")

(setf (get webots_drive::get_intResponse :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get webots_drive::get_intResponse :datatype-) "webots_drive/get_intResponse")
(setf (get webots_drive::get_intResponse :definition-)
      "bool ask
---
int32 value

")



(provide :webots_drive/get_int "73dfae6ec9145dcc45d5ed973079e912")


