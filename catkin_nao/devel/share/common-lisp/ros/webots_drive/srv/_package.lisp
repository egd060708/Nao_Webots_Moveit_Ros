(cl:defpackage webots_drive-srv
  (:use )
  (:export
   "CAMERA_GET_FOCUS_INFO"
   "<CAMERA_GET_FOCUS_INFO-REQUEST>"
   "CAMERA_GET_FOCUS_INFO-REQUEST"
   "<CAMERA_GET_FOCUS_INFO-RESPONSE>"
   "CAMERA_GET_FOCUS_INFO-RESPONSE"
   "CAMERA_GET_INFO"
   "<CAMERA_GET_INFO-REQUEST>"
   "CAMERA_GET_INFO-REQUEST"
   "<CAMERA_GET_INFO-RESPONSE>"
   "CAMERA_GET_INFO-RESPONSE"
   "CAMERA_GET_ZOOM_INFO"
   "<CAMERA_GET_ZOOM_INFO-REQUEST>"
   "CAMERA_GET_ZOOM_INFO-REQUEST"
   "<CAMERA_GET_ZOOM_INFO-RESPONSE>"
   "CAMERA_GET_ZOOM_INFO-RESPONSE"
   "DISPLAY_DRAW_LINE"
   "<DISPLAY_DRAW_LINE-REQUEST>"
   "DISPLAY_DRAW_LINE-REQUEST"
   "<DISPLAY_DRAW_LINE-RESPONSE>"
   "DISPLAY_DRAW_LINE-RESPONSE"
   "DISPLAY_DRAW_OVAL"
   "<DISPLAY_DRAW_OVAL-REQUEST>"
   "DISPLAY_DRAW_OVAL-REQUEST"
   "<DISPLAY_DRAW_OVAL-RESPONSE>"
   "DISPLAY_DRAW_OVAL-RESPONSE"
   "DISPLAY_DRAW_PIXEL"
   "<DISPLAY_DRAW_PIXEL-REQUEST>"
   "DISPLAY_DRAW_PIXEL-REQUEST"
   "<DISPLAY_DRAW_PIXEL-RESPONSE>"
   "DISPLAY_DRAW_PIXEL-RESPONSE"
   "DISPLAY_DRAW_POLYGON"
   "<DISPLAY_DRAW_POLYGON-REQUEST>"
   "DISPLAY_DRAW_POLYGON-REQUEST"
   "<DISPLAY_DRAW_POLYGON-RESPONSE>"
   "DISPLAY_DRAW_POLYGON-RESPONSE"
   "DISPLAY_DRAW_RECTANGLE"
   "<DISPLAY_DRAW_RECTANGLE-REQUEST>"
   "DISPLAY_DRAW_RECTANGLE-REQUEST"
   "<DISPLAY_DRAW_RECTANGLE-RESPONSE>"
   "DISPLAY_DRAW_RECTANGLE-RESPONSE"
   "DISPLAY_DRAW_TEXT"
   "<DISPLAY_DRAW_TEXT-REQUEST>"
   "DISPLAY_DRAW_TEXT-REQUEST"
   "<DISPLAY_DRAW_TEXT-RESPONSE>"
   "DISPLAY_DRAW_TEXT-RESPONSE"
   "DISPLAY_GET_INFO"
   "<DISPLAY_GET_INFO-REQUEST>"
   "DISPLAY_GET_INFO-REQUEST"
   "<DISPLAY_GET_INFO-RESPONSE>"
   "DISPLAY_GET_INFO-RESPONSE"
   "DISPLAY_IMAGE_COPY"
   "<DISPLAY_IMAGE_COPY-REQUEST>"
   "DISPLAY_IMAGE_COPY-REQUEST"
   "<DISPLAY_IMAGE_COPY-RESPONSE>"
   "DISPLAY_IMAGE_COPY-RESPONSE"
   "DISPLAY_IMAGE_DELETE"
   "<DISPLAY_IMAGE_DELETE-REQUEST>"
   "DISPLAY_IMAGE_DELETE-REQUEST"
   "<DISPLAY_IMAGE_DELETE-RESPONSE>"
   "DISPLAY_IMAGE_DELETE-RESPONSE"
   "DISPLAY_IMAGE_LOAD"
   "<DISPLAY_IMAGE_LOAD-REQUEST>"
   "DISPLAY_IMAGE_LOAD-REQUEST"
   "<DISPLAY_IMAGE_LOAD-RESPONSE>"
   "DISPLAY_IMAGE_LOAD-RESPONSE"
   "DISPLAY_IMAGE_NEW"
   "<DISPLAY_IMAGE_NEW-REQUEST>"
   "DISPLAY_IMAGE_NEW-REQUEST"
   "<DISPLAY_IMAGE_NEW-RESPONSE>"
   "DISPLAY_IMAGE_NEW-RESPONSE"
   "DISPLAY_IMAGE_PASTE"
   "<DISPLAY_IMAGE_PASTE-REQUEST>"
   "DISPLAY_IMAGE_PASTE-REQUEST"
   "<DISPLAY_IMAGE_PASTE-RESPONSE>"
   "DISPLAY_IMAGE_PASTE-RESPONSE"
   "DISPLAY_IMAGE_SAVE"
   "<DISPLAY_IMAGE_SAVE-REQUEST>"
   "DISPLAY_IMAGE_SAVE-REQUEST"
   "<DISPLAY_IMAGE_SAVE-RESPONSE>"
   "DISPLAY_IMAGE_SAVE-RESPONSE"
   "DISPLAY_SET_FONT"
   "<DISPLAY_SET_FONT-REQUEST>"
   "DISPLAY_SET_FONT-REQUEST"
   "<DISPLAY_SET_FONT-RESPONSE>"
   "DISPLAY_SET_FONT-RESPONSE"
   "FIELD_DISABLE_SF_TRACKING"
   "<FIELD_DISABLE_SF_TRACKING-REQUEST>"
   "FIELD_DISABLE_SF_TRACKING-REQUEST"
   "<FIELD_DISABLE_SF_TRACKING-RESPONSE>"
   "FIELD_DISABLE_SF_TRACKING-RESPONSE"
   "FIELD_ENABLE_SF_TRACKING"
   "<FIELD_ENABLE_SF_TRACKING-REQUEST>"
   "FIELD_ENABLE_SF_TRACKING-REQUEST"
   "<FIELD_ENABLE_SF_TRACKING-RESPONSE>"
   "FIELD_ENABLE_SF_TRACKING-RESPONSE"
   "FIELD_GET_BOOL"
   "<FIELD_GET_BOOL-REQUEST>"
   "FIELD_GET_BOOL-REQUEST"
   "<FIELD_GET_BOOL-RESPONSE>"
   "FIELD_GET_BOOL-RESPONSE"
   "FIELD_GET_COLOR"
   "<FIELD_GET_COLOR-REQUEST>"
   "FIELD_GET_COLOR-REQUEST"
   "<FIELD_GET_COLOR-RESPONSE>"
   "FIELD_GET_COLOR-RESPONSE"
   "FIELD_GET_COUNT"
   "<FIELD_GET_COUNT-REQUEST>"
   "FIELD_GET_COUNT-REQUEST"
   "<FIELD_GET_COUNT-RESPONSE>"
   "FIELD_GET_COUNT-RESPONSE"
   "FIELD_GET_FLOAT"
   "<FIELD_GET_FLOAT-REQUEST>"
   "FIELD_GET_FLOAT-REQUEST"
   "<FIELD_GET_FLOAT-RESPONSE>"
   "FIELD_GET_FLOAT-RESPONSE"
   "FIELD_GET_INT32"
   "<FIELD_GET_INT32-REQUEST>"
   "FIELD_GET_INT32-REQUEST"
   "<FIELD_GET_INT32-RESPONSE>"
   "FIELD_GET_INT32-RESPONSE"
   "FIELD_GET_NAME"
   "<FIELD_GET_NAME-REQUEST>"
   "FIELD_GET_NAME-REQUEST"
   "<FIELD_GET_NAME-RESPONSE>"
   "FIELD_GET_NAME-RESPONSE"
   "FIELD_GET_NODE"
   "<FIELD_GET_NODE-REQUEST>"
   "FIELD_GET_NODE-REQUEST"
   "<FIELD_GET_NODE-RESPONSE>"
   "FIELD_GET_NODE-RESPONSE"
   "FIELD_GET_ROTATION"
   "<FIELD_GET_ROTATION-REQUEST>"
   "FIELD_GET_ROTATION-REQUEST"
   "<FIELD_GET_ROTATION-RESPONSE>"
   "FIELD_GET_ROTATION-RESPONSE"
   "FIELD_GET_STRING"
   "<FIELD_GET_STRING-REQUEST>"
   "FIELD_GET_STRING-REQUEST"
   "<FIELD_GET_STRING-RESPONSE>"
   "FIELD_GET_STRING-RESPONSE"
   "FIELD_GET_TYPE"
   "<FIELD_GET_TYPE-REQUEST>"
   "FIELD_GET_TYPE-REQUEST"
   "<FIELD_GET_TYPE-RESPONSE>"
   "FIELD_GET_TYPE-RESPONSE"
   "FIELD_GET_VEC2F"
   "<FIELD_GET_VEC2F-REQUEST>"
   "FIELD_GET_VEC2F-REQUEST"
   "<FIELD_GET_VEC2F-RESPONSE>"
   "FIELD_GET_VEC2F-RESPONSE"
   "FIELD_GET_VEC3F"
   "<FIELD_GET_VEC3F-REQUEST>"
   "FIELD_GET_VEC3F-REQUEST"
   "<FIELD_GET_VEC3F-RESPONSE>"
   "FIELD_GET_VEC3F-RESPONSE"
   "FIELD_IMPORT_NODE_FROM_STRING"
   "<FIELD_IMPORT_NODE_FROM_STRING-REQUEST>"
   "FIELD_IMPORT_NODE_FROM_STRING-REQUEST"
   "<FIELD_IMPORT_NODE_FROM_STRING-RESPONSE>"
   "FIELD_IMPORT_NODE_FROM_STRING-RESPONSE"
   "FIELD_REMOVE"
   "<FIELD_REMOVE-REQUEST>"
   "FIELD_REMOVE-REQUEST"
   "<FIELD_REMOVE-RESPONSE>"
   "FIELD_REMOVE-RESPONSE"
   "FIELD_REMOVE_NODE"
   "<FIELD_REMOVE_NODE-REQUEST>"
   "FIELD_REMOVE_NODE-REQUEST"
   "<FIELD_REMOVE_NODE-RESPONSE>"
   "FIELD_REMOVE_NODE-RESPONSE"
   "FIELD_SET_BOOL"
   "<FIELD_SET_BOOL-REQUEST>"
   "FIELD_SET_BOOL-REQUEST"
   "<FIELD_SET_BOOL-RESPONSE>"
   "FIELD_SET_BOOL-RESPONSE"
   "FIELD_SET_COLOR"
   "<FIELD_SET_COLOR-REQUEST>"
   "FIELD_SET_COLOR-REQUEST"
   "<FIELD_SET_COLOR-RESPONSE>"
   "FIELD_SET_COLOR-RESPONSE"
   "FIELD_SET_FLOAT"
   "<FIELD_SET_FLOAT-REQUEST>"
   "FIELD_SET_FLOAT-REQUEST"
   "<FIELD_SET_FLOAT-RESPONSE>"
   "FIELD_SET_FLOAT-RESPONSE"
   "FIELD_SET_INT32"
   "<FIELD_SET_INT32-REQUEST>"
   "FIELD_SET_INT32-REQUEST"
   "<FIELD_SET_INT32-RESPONSE>"
   "FIELD_SET_INT32-RESPONSE"
   "FIELD_SET_ROTATION"
   "<FIELD_SET_ROTATION-REQUEST>"
   "FIELD_SET_ROTATION-REQUEST"
   "<FIELD_SET_ROTATION-RESPONSE>"
   "FIELD_SET_ROTATION-RESPONSE"
   "FIELD_SET_STRING"
   "<FIELD_SET_STRING-REQUEST>"
   "FIELD_SET_STRING-REQUEST"
   "<FIELD_SET_STRING-RESPONSE>"
   "FIELD_SET_STRING-RESPONSE"
   "FIELD_SET_VEC2F"
   "<FIELD_SET_VEC2F-REQUEST>"
   "FIELD_SET_VEC2F-REQUEST"
   "<FIELD_SET_VEC2F-RESPONSE>"
   "FIELD_SET_VEC2F-RESPONSE"
   "FIELD_SET_VEC3F"
   "<FIELD_SET_VEC3F-REQUEST>"
   "FIELD_SET_VEC3F-REQUEST"
   "<FIELD_SET_VEC3F-RESPONSE>"
   "FIELD_SET_VEC3F-RESPONSE"
   "GET_BOOL"
   "<GET_BOOL-REQUEST>"
   "GET_BOOL-REQUEST"
   "<GET_BOOL-RESPONSE>"
   "GET_BOOL-RESPONSE"
   "GET_FLOAT"
   "<GET_FLOAT-REQUEST>"
   "GET_FLOAT-REQUEST"
   "<GET_FLOAT-RESPONSE>"
   "GET_FLOAT-RESPONSE"
   "GET_FLOAT_ARRAY"
   "<GET_FLOAT_ARRAY-REQUEST>"
   "GET_FLOAT_ARRAY-REQUEST"
   "<GET_FLOAT_ARRAY-RESPONSE>"
   "GET_FLOAT_ARRAY-RESPONSE"
   "GET_INT"
   "<GET_INT-REQUEST>"
   "GET_INT-REQUEST"
   "<GET_INT-RESPONSE>"
   "GET_INT-RESPONSE"
   "GET_STRING"
   "<GET_STRING-REQUEST>"
   "GET_STRING-REQUEST"
   "<GET_STRING-RESPONSE>"
   "GET_STRING-RESPONSE"
   "GET_UINT64"
   "<GET_UINT64-REQUEST>"
   "GET_UINT64-REQUEST"
   "<GET_UINT64-RESPONSE>"
   "GET_UINT64-RESPONSE"
   "GET_URDF"
   "<GET_URDF-REQUEST>"
   "GET_URDF-REQUEST"
   "<GET_URDF-RESPONSE>"
   "GET_URDF-RESPONSE"
   "GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS"
   "<GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS-REQUEST>"
   "GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS-REQUEST"
   "<GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS-RESPONSE>"
   "GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS-RESPONSE"
   "LIDAR_GET_FREQUENCY_INFO"
   "<LIDAR_GET_FREQUENCY_INFO-REQUEST>"
   "LIDAR_GET_FREQUENCY_INFO-REQUEST"
   "<LIDAR_GET_FREQUENCY_INFO-RESPONSE>"
   "LIDAR_GET_FREQUENCY_INFO-RESPONSE"
   "LIDAR_GET_INFO"
   "<LIDAR_GET_INFO-REQUEST>"
   "LIDAR_GET_INFO-REQUEST"
   "<LIDAR_GET_INFO-RESPONSE>"
   "LIDAR_GET_INFO-RESPONSE"
   "LIDAR_GET_LAYER_POINT_CLOUD"
   "<LIDAR_GET_LAYER_POINT_CLOUD-REQUEST>"
   "LIDAR_GET_LAYER_POINT_CLOUD-REQUEST"
   "<LIDAR_GET_LAYER_POINT_CLOUD-RESPONSE>"
   "LIDAR_GET_LAYER_POINT_CLOUD-RESPONSE"
   "LIDAR_GET_LAYER_RANGE_IMAGE"
   "<LIDAR_GET_LAYER_RANGE_IMAGE-REQUEST>"
   "LIDAR_GET_LAYER_RANGE_IMAGE-REQUEST"
   "<LIDAR_GET_LAYER_RANGE_IMAGE-RESPONSE>"
   "LIDAR_GET_LAYER_RANGE_IMAGE-RESPONSE"
   "MOTOR_SET_CONTROL_PID"
   "<MOTOR_SET_CONTROL_PID-REQUEST>"
   "MOTOR_SET_CONTROL_PID-REQUEST"
   "<MOTOR_SET_CONTROL_PID-RESPONSE>"
   "MOTOR_SET_CONTROL_PID-RESPONSE"
   "MOUSE_GET_STATE"
   "<MOUSE_GET_STATE-REQUEST>"
   "MOUSE_GET_STATE-REQUEST"
   "<MOUSE_GET_STATE-RESPONSE>"
   "MOUSE_GET_STATE-RESPONSE"
   "NODE_ADD_FORCE_OR_TORQUE"
   "<NODE_ADD_FORCE_OR_TORQUE-REQUEST>"
   "NODE_ADD_FORCE_OR_TORQUE-REQUEST"
   "<NODE_ADD_FORCE_OR_TORQUE-RESPONSE>"
   "NODE_ADD_FORCE_OR_TORQUE-RESPONSE"
   "NODE_ADD_FORCE_WITH_OFFSET"
   "<NODE_ADD_FORCE_WITH_OFFSET-REQUEST>"
   "NODE_ADD_FORCE_WITH_OFFSET-REQUEST"
   "<NODE_ADD_FORCE_WITH_OFFSET-RESPONSE>"
   "NODE_ADD_FORCE_WITH_OFFSET-RESPONSE"
   "NODE_DISABLE_CONTACT_POINTS_TRACKING"
   "<NODE_DISABLE_CONTACT_POINTS_TRACKING-REQUEST>"
   "NODE_DISABLE_CONTACT_POINTS_TRACKING-REQUEST"
   "<NODE_DISABLE_CONTACT_POINTS_TRACKING-RESPONSE>"
   "NODE_DISABLE_CONTACT_POINTS_TRACKING-RESPONSE"
   "NODE_DISABLE_POSE_TRACKING"
   "<NODE_DISABLE_POSE_TRACKING-REQUEST>"
   "NODE_DISABLE_POSE_TRACKING-REQUEST"
   "<NODE_DISABLE_POSE_TRACKING-RESPONSE>"
   "NODE_DISABLE_POSE_TRACKING-RESPONSE"
   "NODE_ENABLE_CONTACT_POINTS_TRACKING"
   "<NODE_ENABLE_CONTACT_POINTS_TRACKING-REQUEST>"
   "NODE_ENABLE_CONTACT_POINTS_TRACKING-REQUEST"
   "<NODE_ENABLE_CONTACT_POINTS_TRACKING-RESPONSE>"
   "NODE_ENABLE_CONTACT_POINTS_TRACKING-RESPONSE"
   "NODE_ENABLE_POSE_TRACKING"
   "<NODE_ENABLE_POSE_TRACKING-REQUEST>"
   "NODE_ENABLE_POSE_TRACKING-REQUEST"
   "<NODE_ENABLE_POSE_TRACKING-RESPONSE>"
   "NODE_ENABLE_POSE_TRACKING-RESPONSE"
   "NODE_GET_CENTER_OF_MASS"
   "<NODE_GET_CENTER_OF_MASS-REQUEST>"
   "NODE_GET_CENTER_OF_MASS-REQUEST"
   "<NODE_GET_CENTER_OF_MASS-RESPONSE>"
   "NODE_GET_CENTER_OF_MASS-RESPONSE"
   "NODE_GET_CONTACT_POINTS"
   "<NODE_GET_CONTACT_POINTS-REQUEST>"
   "NODE_GET_CONTACT_POINTS-REQUEST"
   "<NODE_GET_CONTACT_POINTS-RESPONSE>"
   "NODE_GET_CONTACT_POINTS-RESPONSE"
   "NODE_GET_FIELD"
   "<NODE_GET_FIELD-REQUEST>"
   "NODE_GET_FIELD-REQUEST"
   "<NODE_GET_FIELD-RESPONSE>"
   "NODE_GET_FIELD-RESPONSE"
   "NODE_GET_FIELD_BY_INDEX"
   "<NODE_GET_FIELD_BY_INDEX-REQUEST>"
   "NODE_GET_FIELD_BY_INDEX-REQUEST"
   "<NODE_GET_FIELD_BY_INDEX-RESPONSE>"
   "NODE_GET_FIELD_BY_INDEX-RESPONSE"
   "NODE_GET_ID"
   "<NODE_GET_ID-REQUEST>"
   "NODE_GET_ID-REQUEST"
   "<NODE_GET_ID-RESPONSE>"
   "NODE_GET_ID-RESPONSE"
   "NODE_GET_NAME"
   "<NODE_GET_NAME-REQUEST>"
   "NODE_GET_NAME-REQUEST"
   "<NODE_GET_NAME-RESPONSE>"
   "NODE_GET_NAME-RESPONSE"
   "NODE_GET_NUMBER_OF_FIELDS"
   "<NODE_GET_NUMBER_OF_FIELDS-REQUEST>"
   "NODE_GET_NUMBER_OF_FIELDS-REQUEST"
   "<NODE_GET_NUMBER_OF_FIELDS-RESPONSE>"
   "NODE_GET_NUMBER_OF_FIELDS-RESPONSE"
   "NODE_GET_ORIENTATION"
   "<NODE_GET_ORIENTATION-REQUEST>"
   "NODE_GET_ORIENTATION-REQUEST"
   "<NODE_GET_ORIENTATION-RESPONSE>"
   "NODE_GET_ORIENTATION-RESPONSE"
   "NODE_GET_PARENT_NODE"
   "<NODE_GET_PARENT_NODE-REQUEST>"
   "NODE_GET_PARENT_NODE-REQUEST"
   "<NODE_GET_PARENT_NODE-RESPONSE>"
   "NODE_GET_PARENT_NODE-RESPONSE"
   "NODE_GET_POSE"
   "<NODE_GET_POSE-REQUEST>"
   "NODE_GET_POSE-REQUEST"
   "<NODE_GET_POSE-RESPONSE>"
   "NODE_GET_POSE-RESPONSE"
   "NODE_GET_POSITION"
   "<NODE_GET_POSITION-REQUEST>"
   "NODE_GET_POSITION-REQUEST"
   "<NODE_GET_POSITION-RESPONSE>"
   "NODE_GET_POSITION-RESPONSE"
   "NODE_GET_STATIC_BALANCE"
   "<NODE_GET_STATIC_BALANCE-REQUEST>"
   "NODE_GET_STATIC_BALANCE-REQUEST"
   "<NODE_GET_STATIC_BALANCE-RESPONSE>"
   "NODE_GET_STATIC_BALANCE-RESPONSE"
   "NODE_GET_STATUS"
   "<NODE_GET_STATUS-REQUEST>"
   "NODE_GET_STATUS-REQUEST"
   "<NODE_GET_STATUS-RESPONSE>"
   "NODE_GET_STATUS-RESPONSE"
   "NODE_GET_STRING"
   "<NODE_GET_STRING-REQUEST>"
   "NODE_GET_STRING-REQUEST"
   "<NODE_GET_STRING-RESPONSE>"
   "NODE_GET_STRING-RESPONSE"
   "NODE_GET_TYPE"
   "<NODE_GET_TYPE-REQUEST>"
   "NODE_GET_TYPE-REQUEST"
   "<NODE_GET_TYPE-RESPONSE>"
   "NODE_GET_TYPE-RESPONSE"
   "NODE_GET_VELOCITY"
   "<NODE_GET_VELOCITY-REQUEST>"
   "NODE_GET_VELOCITY-REQUEST"
   "<NODE_GET_VELOCITY-RESPONSE>"
   "NODE_GET_VELOCITY-RESPONSE"
   "NODE_MOVE_VIEWPOINT"
   "<NODE_MOVE_VIEWPOINT-REQUEST>"
   "NODE_MOVE_VIEWPOINT-REQUEST"
   "<NODE_MOVE_VIEWPOINT-RESPONSE>"
   "NODE_MOVE_VIEWPOINT-RESPONSE"
   "NODE_REMOVE"
   "<NODE_REMOVE-REQUEST>"
   "NODE_REMOVE-REQUEST"
   "<NODE_REMOVE-RESPONSE>"
   "NODE_REMOVE-RESPONSE"
   "NODE_RESET_FUNCTIONS"
   "<NODE_RESET_FUNCTIONS-REQUEST>"
   "NODE_RESET_FUNCTIONS-REQUEST"
   "<NODE_RESET_FUNCTIONS-RESPONSE>"
   "NODE_RESET_FUNCTIONS-RESPONSE"
   "NODE_SET_JOINT_POSITION"
   "<NODE_SET_JOINT_POSITION-REQUEST>"
   "NODE_SET_JOINT_POSITION-REQUEST"
   "<NODE_SET_JOINT_POSITION-RESPONSE>"
   "NODE_SET_JOINT_POSITION-RESPONSE"
   "NODE_SET_STRING"
   "<NODE_SET_STRING-REQUEST>"
   "NODE_SET_STRING-REQUEST"
   "<NODE_SET_STRING-RESPONSE>"
   "NODE_SET_STRING-RESPONSE"
   "NODE_SET_VELOCITY"
   "<NODE_SET_VELOCITY-REQUEST>"
   "NODE_SET_VELOCITY-REQUEST"
   "<NODE_SET_VELOCITY-RESPONSE>"
   "NODE_SET_VELOCITY-RESPONSE"
   "NODE_SET_VISIBILITY"
   "<NODE_SET_VISIBILITY-REQUEST>"
   "NODE_SET_VISIBILITY-REQUEST"
   "<NODE_SET_VISIBILITY-RESPONSE>"
   "NODE_SET_VISIBILITY-RESPONSE"
   "PEN_SET_INK_COLOR"
   "<PEN_SET_INK_COLOR-REQUEST>"
   "PEN_SET_INK_COLOR-REQUEST"
   "<PEN_SET_INK_COLOR-RESPONSE>"
   "PEN_SET_INK_COLOR-RESPONSE"
   "RANGE_FINDER_GET_INFO"
   "<RANGE_FINDER_GET_INFO-REQUEST>"
   "RANGE_FINDER_GET_INFO-REQUEST"
   "<RANGE_FINDER_GET_INFO-RESPONSE>"
   "RANGE_FINDER_GET_INFO-RESPONSE"
   "RECEIVER_GET_EMITTER_DIRECTION"
   "<RECEIVER_GET_EMITTER_DIRECTION-REQUEST>"
   "RECEIVER_GET_EMITTER_DIRECTION-REQUEST"
   "<RECEIVER_GET_EMITTER_DIRECTION-RESPONSE>"
   "RECEIVER_GET_EMITTER_DIRECTION-RESPONSE"
   "ROBOT_GET_DEVICE_LIST"
   "<ROBOT_GET_DEVICE_LIST-REQUEST>"
   "ROBOT_GET_DEVICE_LIST-REQUEST"
   "<ROBOT_GET_DEVICE_LIST-RESPONSE>"
   "ROBOT_GET_DEVICE_LIST-RESPONSE"
   "ROBOT_SET_MODE"
   "<ROBOT_SET_MODE-REQUEST>"
   "ROBOT_SET_MODE-REQUEST"
   "<ROBOT_SET_MODE-RESPONSE>"
   "ROBOT_SET_MODE-RESPONSE"
   "ROBOT_WAIT_FOR_USER_INPUT_EVENT"
   "<ROBOT_WAIT_FOR_USER_INPUT_EVENT-REQUEST>"
   "ROBOT_WAIT_FOR_USER_INPUT_EVENT-REQUEST"
   "<ROBOT_WAIT_FOR_USER_INPUT_EVENT-RESPONSE>"
   "ROBOT_WAIT_FOR_USER_INPUT_EVENT-RESPONSE"
   "SAVE_IMAGE"
   "<SAVE_IMAGE-REQUEST>"
   "SAVE_IMAGE-REQUEST"
   "<SAVE_IMAGE-RESPONSE>"
   "SAVE_IMAGE-RESPONSE"
   "SET_BOOL"
   "<SET_BOOL-REQUEST>"
   "SET_BOOL-REQUEST"
   "<SET_BOOL-RESPONSE>"
   "SET_BOOL-RESPONSE"
   "SET_FLOAT"
   "<SET_FLOAT-REQUEST>"
   "SET_FLOAT-REQUEST"
   "<SET_FLOAT-RESPONSE>"
   "SET_FLOAT-RESPONSE"
   "SET_FLOAT_ARRAY"
   "<SET_FLOAT_ARRAY-REQUEST>"
   "SET_FLOAT_ARRAY-REQUEST"
   "<SET_FLOAT_ARRAY-RESPONSE>"
   "SET_FLOAT_ARRAY-RESPONSE"
   "SET_INT"
   "<SET_INT-REQUEST>"
   "SET_INT-REQUEST"
   "<SET_INT-RESPONSE>"
   "SET_INT-RESPONSE"
   "SET_STRING"
   "<SET_STRING-REQUEST>"
   "SET_STRING-REQUEST"
   "<SET_STRING-RESPONSE>"
   "SET_STRING-RESPONSE"
   "SKIN_GET_BONE_NAME"
   "<SKIN_GET_BONE_NAME-REQUEST>"
   "SKIN_GET_BONE_NAME-REQUEST"
   "<SKIN_GET_BONE_NAME-RESPONSE>"
   "SKIN_GET_BONE_NAME-RESPONSE"
   "SKIN_GET_BONE_ORIENTATION"
   "<SKIN_GET_BONE_ORIENTATION-REQUEST>"
   "SKIN_GET_BONE_ORIENTATION-REQUEST"
   "<SKIN_GET_BONE_ORIENTATION-RESPONSE>"
   "SKIN_GET_BONE_ORIENTATION-RESPONSE"
   "SKIN_GET_BONE_POSITION"
   "<SKIN_GET_BONE_POSITION-REQUEST>"
   "SKIN_GET_BONE_POSITION-REQUEST"
   "<SKIN_GET_BONE_POSITION-RESPONSE>"
   "SKIN_GET_BONE_POSITION-RESPONSE"
   "SKIN_SET_BONE_ORIENTATION"
   "<SKIN_SET_BONE_ORIENTATION-REQUEST>"
   "SKIN_SET_BONE_ORIENTATION-REQUEST"
   "<SKIN_SET_BONE_ORIENTATION-RESPONSE>"
   "SKIN_SET_BONE_ORIENTATION-RESPONSE"
   "SKIN_SET_BONE_POSITION"
   "<SKIN_SET_BONE_POSITION-REQUEST>"
   "SKIN_SET_BONE_POSITION-REQUEST"
   "<SKIN_SET_BONE_POSITION-RESPONSE>"
   "SKIN_SET_BONE_POSITION-RESPONSE"
   "SPEAKER_IS_SOUND_PLAYING"
   "<SPEAKER_IS_SOUND_PLAYING-REQUEST>"
   "SPEAKER_IS_SOUND_PLAYING-REQUEST"
   "<SPEAKER_IS_SOUND_PLAYING-RESPONSE>"
   "SPEAKER_IS_SOUND_PLAYING-RESPONSE"
   "SPEAKER_PLAY_SOUND"
   "<SPEAKER_PLAY_SOUND-REQUEST>"
   "SPEAKER_PLAY_SOUND-REQUEST"
   "<SPEAKER_PLAY_SOUND-RESPONSE>"
   "SPEAKER_PLAY_SOUND-RESPONSE"
   "SPEAKER_SPEAK"
   "<SPEAKER_SPEAK-REQUEST>"
   "SPEAKER_SPEAK-REQUEST"
   "<SPEAKER_SPEAK-RESPONSE>"
   "SPEAKER_SPEAK-RESPONSE"
   "SUPERVISOR_GET_FROM_DEF"
   "<SUPERVISOR_GET_FROM_DEF-REQUEST>"
   "SUPERVISOR_GET_FROM_DEF-REQUEST"
   "<SUPERVISOR_GET_FROM_DEF-RESPONSE>"
   "SUPERVISOR_GET_FROM_DEF-RESPONSE"
   "SUPERVISOR_GET_FROM_ID"
   "<SUPERVISOR_GET_FROM_ID-REQUEST>"
   "SUPERVISOR_GET_FROM_ID-REQUEST"
   "<SUPERVISOR_GET_FROM_ID-RESPONSE>"
   "SUPERVISOR_GET_FROM_ID-RESPONSE"
   "SUPERVISOR_GET_FROM_STRING"
   "<SUPERVISOR_GET_FROM_STRING-REQUEST>"
   "SUPERVISOR_GET_FROM_STRING-REQUEST"
   "<SUPERVISOR_GET_FROM_STRING-RESPONSE>"
   "SUPERVISOR_GET_FROM_STRING-RESPONSE"
   "SUPERVISOR_MOVIE_START_RECORDING"
   "<SUPERVISOR_MOVIE_START_RECORDING-REQUEST>"
   "SUPERVISOR_MOVIE_START_RECORDING-REQUEST"
   "<SUPERVISOR_MOVIE_START_RECORDING-RESPONSE>"
   "SUPERVISOR_MOVIE_START_RECORDING-RESPONSE"
   "SUPERVISOR_SET_LABEL"
   "<SUPERVISOR_SET_LABEL-REQUEST>"
   "SUPERVISOR_SET_LABEL-REQUEST"
   "<SUPERVISOR_SET_LABEL-RESPONSE>"
   "SUPERVISOR_SET_LABEL-RESPONSE"
   "SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION"
   "<SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION-REQUEST>"
   "SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION-REQUEST"
   "<SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION-RESPONSE>"
   "SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION-RESPONSE"
   "SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITION"
   "<SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITION-REQUEST>"
   "SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITION-REQUEST"
   "<SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITION-RESPONSE>"
   "SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_POSITION-RESPONSE"
  ))

