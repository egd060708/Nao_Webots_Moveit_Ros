; Auto-generated. Do not edit!


(cl:in-package webots_drive-srv)


;//! \htmlinclude camera_get_info-request.msg.html

(cl:defclass <camera_get_info-request> (roslisp-msg-protocol:ros-message)
  ((ask
    :reader ask
    :initarg :ask
    :type cl:fixnum
    :initform 0))
)

(cl:defclass camera_get_info-request (<camera_get_info-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <camera_get_info-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'camera_get_info-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name webots_drive-srv:<camera_get_info-request> is deprecated: use webots_drive-srv:camera_get_info-request instead.")))

(cl:ensure-generic-function 'ask-val :lambda-list '(m))
(cl:defmethod ask-val ((m <camera_get_info-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:ask-val is deprecated.  Use webots_drive-srv:ask instead.")
  (ask m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <camera_get_info-request>) ostream)
  "Serializes a message object of type '<camera_get_info-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ask)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <camera_get_info-request>) istream)
  "Deserializes a message object of type '<camera_get_info-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ask)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<camera_get_info-request>)))
  "Returns string type for a service object of type '<camera_get_info-request>"
  "webots_drive/camera_get_infoRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'camera_get_info-request)))
  "Returns string type for a service object of type 'camera_get_info-request"
  "webots_drive/camera_get_infoRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<camera_get_info-request>)))
  "Returns md5sum for a message object of type '<camera_get_info-request>"
  "27c62b916852ab73ab27a40703fb9ea5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'camera_get_info-request)))
  "Returns md5sum for a message object of type 'camera_get_info-request"
  "27c62b916852ab73ab27a40703fb9ea5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<camera_get_info-request>)))
  "Returns full string definition for message of type '<camera_get_info-request>"
  (cl:format cl:nil "uint8 ask~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'camera_get_info-request)))
  "Returns full string definition for message of type 'camera_get_info-request"
  (cl:format cl:nil "uint8 ask~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <camera_get_info-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <camera_get_info-request>))
  "Converts a ROS message object to a list"
  (cl:list 'camera_get_info-request
    (cl:cons ':ask (ask msg))
))
;//! \htmlinclude camera_get_info-response.msg.html

(cl:defclass <camera_get_info-response> (roslisp-msg-protocol:ros-message)
  ((width
    :reader width
    :initarg :width
    :type cl:integer
    :initform 0)
   (height
    :reader height
    :initarg :height
    :type cl:integer
    :initform 0)
   (Fov
    :reader Fov
    :initarg :Fov
    :type cl:float
    :initform 0.0)
   (nearRange
    :reader nearRange
    :initarg :nearRange
    :type cl:float
    :initform 0.0))
)

(cl:defclass camera_get_info-response (<camera_get_info-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <camera_get_info-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'camera_get_info-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name webots_drive-srv:<camera_get_info-response> is deprecated: use webots_drive-srv:camera_get_info-response instead.")))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <camera_get_info-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:width-val is deprecated.  Use webots_drive-srv:width instead.")
  (width m))

(cl:ensure-generic-function 'height-val :lambda-list '(m))
(cl:defmethod height-val ((m <camera_get_info-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:height-val is deprecated.  Use webots_drive-srv:height instead.")
  (height m))

(cl:ensure-generic-function 'Fov-val :lambda-list '(m))
(cl:defmethod Fov-val ((m <camera_get_info-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:Fov-val is deprecated.  Use webots_drive-srv:Fov instead.")
  (Fov m))

(cl:ensure-generic-function 'nearRange-val :lambda-list '(m))
(cl:defmethod nearRange-val ((m <camera_get_info-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:nearRange-val is deprecated.  Use webots_drive-srv:nearRange instead.")
  (nearRange m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <camera_get_info-response>) ostream)
  "Serializes a message object of type '<camera_get_info-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'width)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'width)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'width)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'width)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'height)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'height)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'height)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'height)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Fov))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'nearRange))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <camera_get_info-response>) istream)
  "Deserializes a message object of type '<camera_get_info-response>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'width)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'width)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'width)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'width)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'height)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'height)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'height)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'height)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Fov) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'nearRange) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<camera_get_info-response>)))
  "Returns string type for a service object of type '<camera_get_info-response>"
  "webots_drive/camera_get_infoResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'camera_get_info-response)))
  "Returns string type for a service object of type 'camera_get_info-response"
  "webots_drive/camera_get_infoResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<camera_get_info-response>)))
  "Returns md5sum for a message object of type '<camera_get_info-response>"
  "27c62b916852ab73ab27a40703fb9ea5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'camera_get_info-response)))
  "Returns md5sum for a message object of type 'camera_get_info-response"
  "27c62b916852ab73ab27a40703fb9ea5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<camera_get_info-response>)))
  "Returns full string definition for message of type '<camera_get_info-response>"
  (cl:format cl:nil "uint32 width~%uint32 height~%float64 Fov~%float64 nearRange~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'camera_get_info-response)))
  "Returns full string definition for message of type 'camera_get_info-response"
  (cl:format cl:nil "uint32 width~%uint32 height~%float64 Fov~%float64 nearRange~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <camera_get_info-response>))
  (cl:+ 0
     4
     4
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <camera_get_info-response>))
  "Converts a ROS message object to a list"
  (cl:list 'camera_get_info-response
    (cl:cons ':width (width msg))
    (cl:cons ':height (height msg))
    (cl:cons ':Fov (Fov msg))
    (cl:cons ':nearRange (nearRange msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'camera_get_info)))
  'camera_get_info-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'camera_get_info)))
  'camera_get_info-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'camera_get_info)))
  "Returns string type for a service object of type '<camera_get_info>"
  "webots_drive/camera_get_info")