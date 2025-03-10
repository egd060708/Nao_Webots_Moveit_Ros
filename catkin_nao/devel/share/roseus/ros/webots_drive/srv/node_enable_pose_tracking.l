;; Auto-generated. Do not edit!


(when (boundp 'webots_drive::node_enable_pose_tracking)
  (if (not (find-package "WEBOTS_DRIVE"))
    (make-package "WEBOTS_DRIVE"))
  (shadow 'node_enable_pose_tracking (find-package "WEBOTS_DRIVE")))
(unless (find-package "WEBOTS_DRIVE::NODE_ENABLE_POSE_TRACKING")
  (make-package "WEBOTS_DRIVE::NODE_ENABLE_POSE_TRACKING"))
(unless (find-package "WEBOTS_DRIVE::NODE_ENABLE_POSE_TRACKINGREQUEST")
  (make-package "WEBOTS_DRIVE::NODE_ENABLE_POSE_TRACKINGREQUEST"))
(unless (find-package "WEBOTS_DRIVE::NODE_ENABLE_POSE_TRACKINGRESPONSE")
  (make-package "WEBOTS_DRIVE::NODE_ENABLE_POSE_TRACKINGRESPONSE"))

(in-package "ROS")





(defclass webots_drive::node_enable_pose_trackingRequest
  :super ros::object
  :slots (_node _sampling_period _from_node ))

(defmethod webots_drive::node_enable_pose_trackingRequest
  (:init
   (&key
    ((:node __node) 0)
    ((:sampling_period __sampling_period) 0)
    ((:from_node __from_node) 0)
    )
   (send-super :init)
   (setq _node (round __node))
   (setq _sampling_period (round __sampling_period))
   (setq _from_node (round __from_node))
   self)
  (:node
   (&optional __node)
   (if __node (setq _node __node)) _node)
  (:sampling_period
   (&optional __sampling_period)
   (if __sampling_period (setq _sampling_period __sampling_period)) _sampling_period)
  (:from_node
   (&optional __from_node)
   (if __from_node (setq _from_node __from_node)) _from_node)
  (:serialization-length
   ()
   (+
    ;; uint64 _node
    8
    ;; int32 _sampling_period
    4
    ;; uint64 _from_node
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _node
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _node (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _node) (= (length (_node . bv)) 2)) ;; bignum
              (write-long (ash (elt (_node . bv) 0) 0) s)
              (write-long (ash (elt (_node . bv) 1) -1) s))
             ((and (class _node) (= (length (_node . bv)) 1)) ;; big1
              (write-long (elt (_node . bv) 0) s)
              (write-long (if (>= _node 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _node s)(write-long (if (>= _node 0) 0 #xffffffff) s)))
     ;; int32 _sampling_period
       (write-long _sampling_period s)
     ;; uint64 _from_node
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _from_node (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _from_node) (= (length (_from_node . bv)) 2)) ;; bignum
              (write-long (ash (elt (_from_node . bv) 0) 0) s)
              (write-long (ash (elt (_from_node . bv) 1) -1) s))
             ((and (class _from_node) (= (length (_from_node . bv)) 1)) ;; big1
              (write-long (elt (_from_node . bv) 0) s)
              (write-long (if (>= _from_node 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _from_node s)(write-long (if (>= _from_node 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _node
     
#+(or :alpha :irix6 :x86_64)
      (setf _node (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _node (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int32 _sampling_period
     (setq _sampling_period (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint64 _from_node
     
#+(or :alpha :irix6 :x86_64)
      (setf _from_node (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _from_node (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass webots_drive::node_enable_pose_trackingResponse
  :super ros::object
  :slots (_success ))

(defmethod webots_drive::node_enable_pose_trackingResponse
  (:init
   (&key
    ((:success __success) 0)
    )
   (send-super :init)
   (setq _success (round __success))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; int8 _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _success
       (write-byte _success s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _success
     (setq _success (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _success 127) (setq _success (- _success 256)))
   ;;
   self)
  )

(defclass webots_drive::node_enable_pose_tracking
  :super ros::object
  :slots ())

(setf (get webots_drive::node_enable_pose_tracking :md5sum-) "8cd216b812da1c93f2089a1c0f3ffed3")
(setf (get webots_drive::node_enable_pose_tracking :datatype-) "webots_drive/node_enable_pose_tracking")
(setf (get webots_drive::node_enable_pose_tracking :request) webots_drive::node_enable_pose_trackingRequest)
(setf (get webots_drive::node_enable_pose_tracking :response) webots_drive::node_enable_pose_trackingResponse)

(defmethod webots_drive::node_enable_pose_trackingRequest
  (:response () (instance webots_drive::node_enable_pose_trackingResponse :init)))

(setf (get webots_drive::node_enable_pose_trackingRequest :md5sum-) "8cd216b812da1c93f2089a1c0f3ffed3")
(setf (get webots_drive::node_enable_pose_trackingRequest :datatype-) "webots_drive/node_enable_pose_trackingRequest")
(setf (get webots_drive::node_enable_pose_trackingRequest :definition-)
      "uint64 node
int32 sampling_period
uint64 from_node
---
int8 success

")

(setf (get webots_drive::node_enable_pose_trackingResponse :md5sum-) "8cd216b812da1c93f2089a1c0f3ffed3")
(setf (get webots_drive::node_enable_pose_trackingResponse :datatype-) "webots_drive/node_enable_pose_trackingResponse")
(setf (get webots_drive::node_enable_pose_trackingResponse :definition-)
      "uint64 node
int32 sampling_period
uint64 from_node
---
int8 success

")



(provide :webots_drive/node_enable_pose_tracking "8cd216b812da1c93f2089a1c0f3ffed3")


