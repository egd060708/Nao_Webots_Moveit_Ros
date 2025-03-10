;; Auto-generated. Do not edit!


(when (boundp 'webots_drive::field_get_vec3f)
  (if (not (find-package "WEBOTS_DRIVE"))
    (make-package "WEBOTS_DRIVE"))
  (shadow 'field_get_vec3f (find-package "WEBOTS_DRIVE")))
(unless (find-package "WEBOTS_DRIVE::FIELD_GET_VEC3F")
  (make-package "WEBOTS_DRIVE::FIELD_GET_VEC3F"))
(unless (find-package "WEBOTS_DRIVE::FIELD_GET_VEC3FREQUEST")
  (make-package "WEBOTS_DRIVE::FIELD_GET_VEC3FREQUEST"))
(unless (find-package "WEBOTS_DRIVE::FIELD_GET_VEC3FRESPONSE")
  (make-package "WEBOTS_DRIVE::FIELD_GET_VEC3FRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass webots_drive::field_get_vec3fRequest
  :super ros::object
  :slots (_field _index ))

(defmethod webots_drive::field_get_vec3fRequest
  (:init
   (&key
    ((:field __field) 0)
    ((:index __index) 0)
    )
   (send-super :init)
   (setq _field (round __field))
   (setq _index (round __index))
   self)
  (:field
   (&optional __field)
   (if __field (setq _field __field)) _field)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:serialization-length
   ()
   (+
    ;; uint64 _field
    8
    ;; int32 _index
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _field
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _field (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _field) (= (length (_field . bv)) 2)) ;; bignum
              (write-long (ash (elt (_field . bv) 0) 0) s)
              (write-long (ash (elt (_field . bv) 1) -1) s))
             ((and (class _field) (= (length (_field . bv)) 1)) ;; big1
              (write-long (elt (_field . bv) 0) s)
              (write-long (if (>= _field 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _field s)(write-long (if (>= _field 0) 0 #xffffffff) s)))
     ;; int32 _index
       (write-long _index s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _field
     
#+(or :alpha :irix6 :x86_64)
      (setf _field (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _field (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass webots_drive::field_get_vec3fResponse
  :super ros::object
  :slots (_value ))

(defmethod webots_drive::field_get_vec3fResponse
  (:init
   (&key
    ((:value __value) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _value __value)
   self)
  (:value
   (&rest __value)
   (if (keywordp (car __value))
       (send* _value __value)
     (progn
       (if __value (setq _value (car __value)))
       _value)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Vector3 _value
    (send _value :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Vector3 _value
       (send _value :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Vector3 _value
     (send _value :deserialize buf ptr-) (incf ptr- (send _value :serialization-length))
   ;;
   self)
  )

(defclass webots_drive::field_get_vec3f
  :super ros::object
  :slots ())

(setf (get webots_drive::field_get_vec3f :md5sum-) "5ba75d9d095ca14bcb57c58ac3b63422")
(setf (get webots_drive::field_get_vec3f :datatype-) "webots_drive/field_get_vec3f")
(setf (get webots_drive::field_get_vec3f :request) webots_drive::field_get_vec3fRequest)
(setf (get webots_drive::field_get_vec3f :response) webots_drive::field_get_vec3fResponse)

(defmethod webots_drive::field_get_vec3fRequest
  (:response () (instance webots_drive::field_get_vec3fResponse :init)))

(setf (get webots_drive::field_get_vec3fRequest :md5sum-) "5ba75d9d095ca14bcb57c58ac3b63422")
(setf (get webots_drive::field_get_vec3fRequest :datatype-) "webots_drive/field_get_vec3fRequest")
(setf (get webots_drive::field_get_vec3fRequest :definition-)
      "uint64 field
int32 index
---
geometry_msgs/Vector3 value


================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
")

(setf (get webots_drive::field_get_vec3fResponse :md5sum-) "5ba75d9d095ca14bcb57c58ac3b63422")
(setf (get webots_drive::field_get_vec3fResponse :datatype-) "webots_drive/field_get_vec3fResponse")
(setf (get webots_drive::field_get_vec3fResponse :definition-)
      "uint64 field
int32 index
---
geometry_msgs/Vector3 value


================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
")



(provide :webots_drive/field_get_vec3f "5ba75d9d095ca14bcb57c58ac3b63422")


