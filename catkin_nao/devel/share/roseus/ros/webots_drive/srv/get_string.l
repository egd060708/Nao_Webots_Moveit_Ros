;; Auto-generated. Do not edit!


(when (boundp 'webots_drive::get_string)
  (if (not (find-package "WEBOTS_DRIVE"))
    (make-package "WEBOTS_DRIVE"))
  (shadow 'get_string (find-package "WEBOTS_DRIVE")))
(unless (find-package "WEBOTS_DRIVE::GET_STRING")
  (make-package "WEBOTS_DRIVE::GET_STRING"))
(unless (find-package "WEBOTS_DRIVE::GET_STRINGREQUEST")
  (make-package "WEBOTS_DRIVE::GET_STRINGREQUEST"))
(unless (find-package "WEBOTS_DRIVE::GET_STRINGRESPONSE")
  (make-package "WEBOTS_DRIVE::GET_STRINGRESPONSE"))

(in-package "ROS")





(defclass webots_drive::get_stringRequest
  :super ros::object
  :slots (_ask ))

(defmethod webots_drive::get_stringRequest
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

(defclass webots_drive::get_stringResponse
  :super ros::object
  :slots (_value ))

(defmethod webots_drive::get_stringResponse
  (:init
   (&key
    ((:value __value) "")
    )
   (send-super :init)
   (setq _value (string __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass webots_drive::get_string
  :super ros::object
  :slots ())

(setf (get webots_drive::get_string :md5sum-) "3bf99d9257a34f6cdd01cd192a62b3df")
(setf (get webots_drive::get_string :datatype-) "webots_drive/get_string")
(setf (get webots_drive::get_string :request) webots_drive::get_stringRequest)
(setf (get webots_drive::get_string :response) webots_drive::get_stringResponse)

(defmethod webots_drive::get_stringRequest
  (:response () (instance webots_drive::get_stringResponse :init)))

(setf (get webots_drive::get_stringRequest :md5sum-) "3bf99d9257a34f6cdd01cd192a62b3df")
(setf (get webots_drive::get_stringRequest :datatype-) "webots_drive/get_stringRequest")
(setf (get webots_drive::get_stringRequest :definition-)
      "bool ask
---
string value

")

(setf (get webots_drive::get_stringResponse :md5sum-) "3bf99d9257a34f6cdd01cd192a62b3df")
(setf (get webots_drive::get_stringResponse :datatype-) "webots_drive/get_stringResponse")
(setf (get webots_drive::get_stringResponse :definition-)
      "bool ask
---
string value

")



(provide :webots_drive/get_string "3bf99d9257a34f6cdd01cd192a62b3df")


