; Auto-generated. Do not edit!


(cl:in-package webots_drive-srv)


;//! \htmlinclude field_set_float-request.msg.html

(cl:defclass <field_set_float-request> (roslisp-msg-protocol:ros-message)
  ((field
    :reader field
    :initarg :field
    :type cl:integer
    :initform 0)
   (index
    :reader index
    :initarg :index
    :type cl:integer
    :initform 0)
   (value
    :reader value
    :initarg :value
    :type cl:float
    :initform 0.0))
)

(cl:defclass field_set_float-request (<field_set_float-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <field_set_float-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'field_set_float-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name webots_drive-srv:<field_set_float-request> is deprecated: use webots_drive-srv:field_set_float-request instead.")))

(cl:ensure-generic-function 'field-val :lambda-list '(m))
(cl:defmethod field-val ((m <field_set_float-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:field-val is deprecated.  Use webots_drive-srv:field instead.")
  (field m))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <field_set_float-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:index-val is deprecated.  Use webots_drive-srv:index instead.")
  (index m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <field_set_float-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:value-val is deprecated.  Use webots_drive-srv:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <field_set_float-request>) ostream)
  "Serializes a message object of type '<field_set_float-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'field)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'field)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'index)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <field_set_float-request>) istream)
  "Deserializes a message object of type '<field_set_float-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'field)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'index) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'value) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<field_set_float-request>)))
  "Returns string type for a service object of type '<field_set_float-request>"
  "webots_drive/field_set_floatRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'field_set_float-request)))
  "Returns string type for a service object of type 'field_set_float-request"
  "webots_drive/field_set_floatRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<field_set_float-request>)))
  "Returns md5sum for a message object of type '<field_set_float-request>"
  "4e40976b84f091a5cb0ce60a329c40a3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'field_set_float-request)))
  "Returns md5sum for a message object of type 'field_set_float-request"
  "4e40976b84f091a5cb0ce60a329c40a3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<field_set_float-request>)))
  "Returns full string definition for message of type '<field_set_float-request>"
  (cl:format cl:nil "uint64 field~%int32 index~%float64 value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'field_set_float-request)))
  "Returns full string definition for message of type 'field_set_float-request"
  (cl:format cl:nil "uint64 field~%int32 index~%float64 value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <field_set_float-request>))
  (cl:+ 0
     8
     4
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <field_set_float-request>))
  "Converts a ROS message object to a list"
  (cl:list 'field_set_float-request
    (cl:cons ':field (field msg))
    (cl:cons ':index (index msg))
    (cl:cons ':value (value msg))
))
;//! \htmlinclude field_set_float-response.msg.html

(cl:defclass <field_set_float-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:integer
    :initform 0))
)

(cl:defclass field_set_float-response (<field_set_float-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <field_set_float-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'field_set_float-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name webots_drive-srv:<field_set_float-response> is deprecated: use webots_drive-srv:field_set_float-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <field_set_float-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:success-val is deprecated.  Use webots_drive-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <field_set_float-response>) ostream)
  "Serializes a message object of type '<field_set_float-response>"
  (cl:let* ((signed (cl:slot-value msg 'success)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <field_set_float-response>) istream)
  "Deserializes a message object of type '<field_set_float-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'success) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<field_set_float-response>)))
  "Returns string type for a service object of type '<field_set_float-response>"
  "webots_drive/field_set_floatResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'field_set_float-response)))
  "Returns string type for a service object of type 'field_set_float-response"
  "webots_drive/field_set_floatResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<field_set_float-response>)))
  "Returns md5sum for a message object of type '<field_set_float-response>"
  "4e40976b84f091a5cb0ce60a329c40a3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'field_set_float-response)))
  "Returns md5sum for a message object of type 'field_set_float-response"
  "4e40976b84f091a5cb0ce60a329c40a3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<field_set_float-response>)))
  "Returns full string definition for message of type '<field_set_float-response>"
  (cl:format cl:nil "int32 success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'field_set_float-response)))
  "Returns full string definition for message of type 'field_set_float-response"
  (cl:format cl:nil "int32 success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <field_set_float-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <field_set_float-response>))
  "Converts a ROS message object to a list"
  (cl:list 'field_set_float-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'field_set_float)))
  'field_set_float-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'field_set_float)))
  'field_set_float-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'field_set_float)))
  "Returns string type for a service object of type '<field_set_float>"
  "webots_drive/field_set_float")