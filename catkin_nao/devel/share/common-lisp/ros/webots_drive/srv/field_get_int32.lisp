; Auto-generated. Do not edit!


(cl:in-package webots_drive-srv)


;//! \htmlinclude field_get_int32-request.msg.html

(cl:defclass <field_get_int32-request> (roslisp-msg-protocol:ros-message)
  ((field
    :reader field
    :initarg :field
    :type cl:integer
    :initform 0)
   (index
    :reader index
    :initarg :index
    :type cl:integer
    :initform 0))
)

(cl:defclass field_get_int32-request (<field_get_int32-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <field_get_int32-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'field_get_int32-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name webots_drive-srv:<field_get_int32-request> is deprecated: use webots_drive-srv:field_get_int32-request instead.")))

(cl:ensure-generic-function 'field-val :lambda-list '(m))
(cl:defmethod field-val ((m <field_get_int32-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:field-val is deprecated.  Use webots_drive-srv:field instead.")
  (field m))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <field_get_int32-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:index-val is deprecated.  Use webots_drive-srv:index instead.")
  (index m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <field_get_int32-request>) ostream)
  "Serializes a message object of type '<field_get_int32-request>"
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
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <field_get_int32-request>) istream)
  "Deserializes a message object of type '<field_get_int32-request>"
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
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<field_get_int32-request>)))
  "Returns string type for a service object of type '<field_get_int32-request>"
  "webots_drive/field_get_int32Request")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'field_get_int32-request)))
  "Returns string type for a service object of type 'field_get_int32-request"
  "webots_drive/field_get_int32Request")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<field_get_int32-request>)))
  "Returns md5sum for a message object of type '<field_get_int32-request>"
  "f5c94e53fe49e81de1151baa92dffdc5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'field_get_int32-request)))
  "Returns md5sum for a message object of type 'field_get_int32-request"
  "f5c94e53fe49e81de1151baa92dffdc5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<field_get_int32-request>)))
  "Returns full string definition for message of type '<field_get_int32-request>"
  (cl:format cl:nil "uint64 field~%int32 index~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'field_get_int32-request)))
  "Returns full string definition for message of type 'field_get_int32-request"
  (cl:format cl:nil "uint64 field~%int32 index~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <field_get_int32-request>))
  (cl:+ 0
     8
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <field_get_int32-request>))
  "Converts a ROS message object to a list"
  (cl:list 'field_get_int32-request
    (cl:cons ':field (field msg))
    (cl:cons ':index (index msg))
))
;//! \htmlinclude field_get_int32-response.msg.html

(cl:defclass <field_get_int32-response> (roslisp-msg-protocol:ros-message)
  ((value
    :reader value
    :initarg :value
    :type cl:integer
    :initform 0))
)

(cl:defclass field_get_int32-response (<field_get_int32-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <field_get_int32-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'field_get_int32-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name webots_drive-srv:<field_get_int32-response> is deprecated: use webots_drive-srv:field_get_int32-response instead.")))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <field_get_int32-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader webots_drive-srv:value-val is deprecated.  Use webots_drive-srv:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <field_get_int32-response>) ostream)
  "Serializes a message object of type '<field_get_int32-response>"
  (cl:let* ((signed (cl:slot-value msg 'value)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <field_get_int32-response>) istream)
  "Deserializes a message object of type '<field_get_int32-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'value) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<field_get_int32-response>)))
  "Returns string type for a service object of type '<field_get_int32-response>"
  "webots_drive/field_get_int32Response")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'field_get_int32-response)))
  "Returns string type for a service object of type 'field_get_int32-response"
  "webots_drive/field_get_int32Response")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<field_get_int32-response>)))
  "Returns md5sum for a message object of type '<field_get_int32-response>"
  "f5c94e53fe49e81de1151baa92dffdc5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'field_get_int32-response)))
  "Returns md5sum for a message object of type 'field_get_int32-response"
  "f5c94e53fe49e81de1151baa92dffdc5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<field_get_int32-response>)))
  "Returns full string definition for message of type '<field_get_int32-response>"
  (cl:format cl:nil "int32 value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'field_get_int32-response)))
  "Returns full string definition for message of type 'field_get_int32-response"
  (cl:format cl:nil "int32 value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <field_get_int32-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <field_get_int32-response>))
  "Converts a ROS message object to a list"
  (cl:list 'field_get_int32-response
    (cl:cons ':value (value msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'field_get_int32)))
  'field_get_int32-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'field_get_int32)))
  'field_get_int32-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'field_get_int32)))
  "Returns string type for a service object of type '<field_get_int32>"
  "webots_drive/field_get_int32")