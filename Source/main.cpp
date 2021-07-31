#include <GL/glew.h>
#include <GL/glut.h>
#include "BasicDataTypeDeclarations.h"



string GLGetEnumString(GLenum value){
	if(value == GL_ZERO) return "GL_ZERO";
	if(value == GL_FALSE) return "GL_FALSE";
	if(value == GL_LOGIC_OP) return "GL_LOGIC_OP";
	if(value == GL_NONE) return "GL_NONE";
	if(value == GL_TEXTURE_COMPONENTS) return "GL_TEXTURE_COMPONENTS";
	if(value == GL_NO_ERROR) return "GL_NO_ERROR";
	if(value == GL_POINTS) return "GL_POINTS";
	if(value == GL_CURRENT_BIT) return "GL_CURRENT_BIT";
	if(value == GL_TRUE) return "GL_TRUE";
	if(value == GL_ONE) return "GL_ONE";
	if(value == GL_CLIENT_PIXEL_STORE_BIT) return "GL_CLIENT_PIXEL_STORE_BIT";
	if(value == GL_LINES) return "GL_LINES";
	if(value == GL_LINE_LOOP) return "GL_LINE_LOOP";
	if(value == GL_POINT_BIT) return "GL_POINT_BIT";
	if(value == GL_CLIENT_VERTEX_ARRAY_BIT) return "GL_CLIENT_VERTEX_ARRAY_BIT";
	if(value == GL_LINE_STRIP) return "GL_LINE_STRIP";
	if(value == GL_LINE_BIT) return "GL_LINE_BIT";
	if(value == GL_TRIANGLES) return "GL_TRIANGLES";
	if(value == GL_TRIANGLE_STRIP) return "GL_TRIANGLE_STRIP";
	if(value == GL_TRIANGLE_FAN) return "GL_TRIANGLE_FAN";
	if(value == GL_QUADS) return "GL_QUADS";
	if(value == GL_QUAD_STRIP) return "GL_QUAD_STRIP";
	if(value == GL_POLYGON_BIT) return "GL_POLYGON_BIT";
	if(value == GL_POLYGON) return "GL_POLYGON";
	if(value == GL_POLYGON_STIPPLE_BIT) return "GL_POLYGON_STIPPLE_BIT";
	if(value == GL_PIXEL_MODE_BIT) return "GL_PIXEL_MODE_BIT";
	if(value == GL_LIGHTING_BIT) return "GL_LIGHTING_BIT";
	if(value == GL_FOG_BIT) return "GL_FOG_BIT";
	if(value == GL_DEPTH_BUFFER_BIT) return "GL_DEPTH_BUFFER_BIT";
	if(value == GL_ACCUM) return "GL_ACCUM";
	if(value == GL_LOAD) return "GL_LOAD";
	if(value == GL_RETURN) return "GL_RETURN";
	if(value == GL_MULT) return "GL_MULT";
	if(value == GL_ADD) return "GL_ADD";
	if(value == GL_NEVER) return "GL_NEVER";
	if(value == GL_ACCUM_BUFFER_BIT) return "GL_ACCUM_BUFFER_BIT";
	if(value == GL_LESS) return "GL_LESS";
	if(value == GL_EQUAL) return "GL_EQUAL";
	if(value == GL_LEQUAL) return "GL_LEQUAL";
	if(value == GL_GREATER) return "GL_GREATER";
	if(value == GL_NOTEQUAL) return "GL_NOTEQUAL";
	if(value == GL_GEQUAL) return "GL_GEQUAL";
	if(value == GL_ALWAYS) return "GL_ALWAYS";
	if(value == GL_SRC_COLOR) return "GL_SRC_COLOR";
	if(value == GL_ONE_MINUS_SRC_COLOR) return "GL_ONE_MINUS_SRC_COLOR";
	if(value == GL_SRC_ALPHA) return "GL_SRC_ALPHA";
	if(value == GL_ONE_MINUS_SRC_ALPHA) return "GL_ONE_MINUS_SRC_ALPHA";
	if(value == GL_DST_ALPHA) return "GL_DST_ALPHA";
	if(value == GL_ONE_MINUS_DST_ALPHA) return "GL_ONE_MINUS_DST_ALPHA";
	if(value == GL_DST_COLOR) return "GL_DST_COLOR";
	if(value == GL_ONE_MINUS_DST_COLOR) return "GL_ONE_MINUS_DST_COLOR";
	if(value == GL_SRC_ALPHA_SATURATE) return "GL_SRC_ALPHA_SATURATE";
	if(value == GL_STENCIL_BUFFER_BIT) return "GL_STENCIL_BUFFER_BIT";
	if(value == GL_FRONT_LEFT) return "GL_FRONT_LEFT";
	if(value == GL_FRONT_RIGHT) return "GL_FRONT_RIGHT";
	if(value == GL_BACK_LEFT) return "GL_BACK_LEFT";
	if(value == GL_BACK_RIGHT) return "GL_BACK_RIGHT";
	if(value == GL_FRONT) return "GL_FRONT";
	if(value == GL_BACK) return "GL_BACK";
	if(value == GL_LEFT) return "GL_LEFT";
	if(value == GL_RIGHT) return "GL_RIGHT";
	if(value == GL_FRONT_AND_BACK) return "GL_FRONT_AND_BACK";
	if(value == GL_AUX0) return "GL_AUX0";
	if(value == GL_AUX1) return "GL_AUX1";
	if(value == GL_AUX2) return "GL_AUX2";
	if(value == GL_AUX3) return "GL_AUX3";
	if(value == GL_INVALID_ENUM) return "GL_INVALID_ENUM";
	if(value == GL_INVALID_VALUE) return "GL_INVALID_VALUE";
	if(value == GL_INVALID_OPERATION) return "GL_INVALID_OPERATION";
	if(value == GL_STACK_OVERFLOW) return "GL_STACK_OVERFLOW";
	if(value == GL_STACK_UNDERFLOW) return "GL_STACK_UNDERFLOW";
	if(value == GL_OUT_OF_MEMORY) return "GL_OUT_OF_MEMORY";
	if(value == GL_2D) return "GL_2D";
	if(value == GL_3D) return "GL_3D";
	if(value == GL_3D_COLOR) return "GL_3D_COLOR";
	if(value == GL_3D_COLOR_TEXTURE) return "GL_3D_COLOR_TEXTURE";
	if(value == GL_4D_COLOR_TEXTURE) return "GL_4D_COLOR_TEXTURE";
	if(value == GL_PASS_THROUGH_TOKEN) return "GL_PASS_THROUGH_TOKEN";
	if(value == GL_POINT_TOKEN) return "GL_POINT_TOKEN";
	if(value == GL_LINE_TOKEN) return "GL_LINE_TOKEN";
	if(value == GL_POLYGON_TOKEN) return "GL_POLYGON_TOKEN";
	if(value == GL_BITMAP_TOKEN) return "GL_BITMAP_TOKEN";
	if(value == GL_DRAW_PIXEL_TOKEN) return "GL_DRAW_PIXEL_TOKEN";
	if(value == GL_COPY_PIXEL_TOKEN) return "GL_COPY_PIXEL_TOKEN";
	if(value == GL_LINE_RESET_TOKEN) return "GL_LINE_RESET_TOKEN";
	if(value == GL_EXP) return "GL_EXP";
	if(value == GL_VIEWPORT_BIT) return "GL_VIEWPORT_BIT";
	if(value == GL_EXP2) return "GL_EXP2";
	if(value == GL_CW) return "GL_CW";
	if(value == GL_CCW) return "GL_CCW";
	if(value == GL_COEFF) return "GL_COEFF";
	if(value == GL_ORDER) return "GL_ORDER";
	if(value == GL_DOMAIN) return "GL_DOMAIN";
	if(value == GL_CURRENT_COLOR) return "GL_CURRENT_COLOR";
	if(value == GL_CURRENT_INDEX) return "GL_CURRENT_INDEX";
	if(value == GL_CURRENT_NORMAL) return "GL_CURRENT_NORMAL";
	if(value == GL_CURRENT_TEXTURE_COORDS) return "GL_CURRENT_TEXTURE_COORDS";
	if(value == GL_CURRENT_RASTER_COLOR) return "GL_CURRENT_RASTER_COLOR";
	if(value == GL_CURRENT_RASTER_INDEX) return "GL_CURRENT_RASTER_INDEX";
	if(value == GL_CURRENT_RASTER_TEXTURE_COORDS) return "GL_CURRENT_RASTER_TEXTURE_COORDS";
	if(value == GL_CURRENT_RASTER_POSITION) return "GL_CURRENT_RASTER_POSITION";
	if(value == GL_CURRENT_RASTER_POSITION_VALID) return "GL_CURRENT_RASTER_POSITION_VALID";
	if(value == GL_CURRENT_RASTER_DISTANCE) return "GL_CURRENT_RASTER_DISTANCE";
	if(value == GL_POINT_SMOOTH) return "GL_POINT_SMOOTH";
	if(value == GL_POINT_SIZE) return "GL_POINT_SIZE";
	if(value == GL_POINT_SIZE_RANGE) return "GL_POINT_SIZE_RANGE";
	if(value == GL_POINT_SIZE_GRANULARITY) return "GL_POINT_SIZE_GRANULARITY";
	if(value == GL_LINE_SMOOTH) return "GL_LINE_SMOOTH";
	if(value == GL_LINE_WIDTH) return "GL_LINE_WIDTH";
	if(value == GL_LINE_WIDTH_RANGE) return "GL_LINE_WIDTH_RANGE";
	if(value == GL_LINE_WIDTH_GRANULARITY) return "GL_LINE_WIDTH_GRANULARITY";
	if(value == GL_LINE_STIPPLE) return "GL_LINE_STIPPLE";
	if(value == GL_LINE_STIPPLE_PATTERN) return "GL_LINE_STIPPLE_PATTERN";
	if(value == GL_LINE_STIPPLE_REPEAT) return "GL_LINE_STIPPLE_REPEAT";
	if(value == GL_LIST_MODE) return "GL_LIST_MODE";
	if(value == GL_MAX_LIST_NESTING) return "GL_MAX_LIST_NESTING";
	if(value == GL_LIST_BASE) return "GL_LIST_BASE";
	if(value == GL_LIST_INDEX) return "GL_LIST_INDEX";
	if(value == GL_POLYGON_MODE) return "GL_POLYGON_MODE";
	if(value == GL_POLYGON_SMOOTH) return "GL_POLYGON_SMOOTH";
	if(value == GL_POLYGON_STIPPLE) return "GL_POLYGON_STIPPLE";
	if(value == GL_EDGE_FLAG) return "GL_EDGE_FLAG";
	if(value == GL_CULL_FACE) return "GL_CULL_FACE";
	if(value == GL_CULL_FACE_MODE) return "GL_CULL_FACE_MODE";
	if(value == GL_FRONT_FACE) return "GL_FRONT_FACE";
	if(value == GL_LIGHTING) return "GL_LIGHTING";
	if(value == GL_LIGHT_MODEL_LOCAL_VIEWER) return "GL_LIGHT_MODEL_LOCAL_VIEWER";
	if(value == GL_LIGHT_MODEL_TWO_SIDE) return "GL_LIGHT_MODEL_TWO_SIDE";
	if(value == GL_LIGHT_MODEL_AMBIENT) return "GL_LIGHT_MODEL_AMBIENT";
	if(value == GL_SHADE_MODEL) return "GL_SHADE_MODEL";
	if(value == GL_COLOR_MATERIAL_FACE) return "GL_COLOR_MATERIAL_FACE";
	if(value == GL_COLOR_MATERIAL_PARAMETER) return "GL_COLOR_MATERIAL_PARAMETER";
	if(value == GL_COLOR_MATERIAL) return "GL_COLOR_MATERIAL";
	if(value == GL_FOG) return "GL_FOG";
	if(value == GL_FOG_INDEX) return "GL_FOG_INDEX";
	if(value == GL_FOG_DENSITY) return "GL_FOG_DENSITY";
	if(value == GL_FOG_START) return "GL_FOG_START";
	if(value == GL_FOG_END) return "GL_FOG_END";
	if(value == GL_FOG_MODE) return "GL_FOG_MODE";
	if(value == GL_FOG_COLOR) return "GL_FOG_COLOR";
	if(value == GL_DEPTH_RANGE) return "GL_DEPTH_RANGE";
	if(value == GL_DEPTH_TEST) return "GL_DEPTH_TEST";
	if(value == GL_DEPTH_WRITEMASK) return "GL_DEPTH_WRITEMASK";
	if(value == GL_DEPTH_CLEAR_VALUE) return "GL_DEPTH_CLEAR_VALUE";
	if(value == GL_DEPTH_FUNC) return "GL_DEPTH_FUNC";
	if(value == GL_ACCUM_CLEAR_VALUE) return "GL_ACCUM_CLEAR_VALUE";
	if(value == GL_STENCIL_TEST) return "GL_STENCIL_TEST";
	if(value == GL_STENCIL_CLEAR_VALUE) return "GL_STENCIL_CLEAR_VALUE";
	if(value == GL_STENCIL_FUNC) return "GL_STENCIL_FUNC";
	if(value == GL_STENCIL_VALUE_MASK) return "GL_STENCIL_VALUE_MASK";
	if(value == GL_STENCIL_FAIL) return "GL_STENCIL_FAIL";
	if(value == GL_STENCIL_PASS_DEPTH_FAIL) return "GL_STENCIL_PASS_DEPTH_FAIL";
	if(value == GL_STENCIL_PASS_DEPTH_PASS) return "GL_STENCIL_PASS_DEPTH_PASS";
	if(value == GL_STENCIL_REF) return "GL_STENCIL_REF";
	if(value == GL_STENCIL_WRITEMASK) return "GL_STENCIL_WRITEMASK";
	if(value == GL_MATRIX_MODE) return "GL_MATRIX_MODE";
	if(value == GL_NORMALIZE) return "GL_NORMALIZE";
	if(value == GL_VIEWPORT) return "GL_VIEWPORT";
	if(value == GL_MODELVIEW_STACK_DEPTH) return "GL_MODELVIEW_STACK_DEPTH";
	if(value == GL_PROJECTION_STACK_DEPTH) return "GL_PROJECTION_STACK_DEPTH";
	if(value == GL_TEXTURE_STACK_DEPTH) return "GL_TEXTURE_STACK_DEPTH";
	if(value == GL_MODELVIEW_MATRIX) return "GL_MODELVIEW_MATRIX";
	if(value == GL_PROJECTION_MATRIX) return "GL_PROJECTION_MATRIX";
	if(value == GL_TEXTURE_MATRIX) return "GL_TEXTURE_MATRIX";
	if(value == GL_ATTRIB_STACK_DEPTH) return "GL_ATTRIB_STACK_DEPTH";
	if(value == GL_CLIENT_ATTRIB_STACK_DEPTH) return "GL_CLIENT_ATTRIB_STACK_DEPTH";
	if(value == GL_ALPHA_TEST) return "GL_ALPHA_TEST";
	if(value == GL_ALPHA_TEST_FUNC) return "GL_ALPHA_TEST_FUNC";
	if(value == GL_ALPHA_TEST_REF) return "GL_ALPHA_TEST_REF";
	if(value == GL_DITHER) return "GL_DITHER";
	if(value == GL_BLEND_DST) return "GL_BLEND_DST";
	if(value == GL_BLEND_SRC) return "GL_BLEND_SRC";
	if(value == GL_BLEND) return "GL_BLEND";
	if(value == GL_LOGIC_OP_MODE) return "GL_LOGIC_OP_MODE";
	if(value == GL_INDEX_LOGIC_OP) return "GL_INDEX_LOGIC_OP";
	if(value == GL_COLOR_LOGIC_OP) return "GL_COLOR_LOGIC_OP";
	if(value == GL_AUX_BUFFERS) return "GL_AUX_BUFFERS";
	if(value == GL_DRAW_BUFFER) return "GL_DRAW_BUFFER";
	if(value == GL_READ_BUFFER) return "GL_READ_BUFFER";
	if(value == GL_SCISSOR_BOX) return "GL_SCISSOR_BOX";
	if(value == GL_SCISSOR_TEST) return "GL_SCISSOR_TEST";
	if(value == GL_INDEX_CLEAR_VALUE) return "GL_INDEX_CLEAR_VALUE";
	if(value == GL_INDEX_WRITEMASK) return "GL_INDEX_WRITEMASK";
	if(value == GL_COLOR_CLEAR_VALUE) return "GL_COLOR_CLEAR_VALUE";
	if(value == GL_COLOR_WRITEMASK) return "GL_COLOR_WRITEMASK";
	if(value == GL_INDEX_MODE) return "GL_INDEX_MODE";
	if(value == GL_RGBA_MODE) return "GL_RGBA_MODE";
	if(value == GL_DOUBLEBUFFER) return "GL_DOUBLEBUFFER";
	if(value == GL_STEREO) return "GL_STEREO";
	if(value == GL_RENDER_MODE) return "GL_RENDER_MODE";
	if(value == GL_PERSPECTIVE_CORRECTION_HINT) return "GL_PERSPECTIVE_CORRECTION_HINT";
	if(value == GL_POINT_SMOOTH_HINT) return "GL_POINT_SMOOTH_HINT";
	if(value == GL_LINE_SMOOTH_HINT) return "GL_LINE_SMOOTH_HINT";
	if(value == GL_POLYGON_SMOOTH_HINT) return "GL_POLYGON_SMOOTH_HINT";
	if(value == GL_FOG_HINT) return "GL_FOG_HINT";
	if(value == GL_TEXTURE_GEN_S) return "GL_TEXTURE_GEN_S";
	if(value == GL_TEXTURE_GEN_T) return "GL_TEXTURE_GEN_T";
	if(value == GL_TEXTURE_GEN_R) return "GL_TEXTURE_GEN_R";
	if(value == GL_TEXTURE_GEN_Q) return "GL_TEXTURE_GEN_Q";
	if(value == GL_PIXEL_MAP_I_TO_I) return "GL_PIXEL_MAP_I_TO_I";
	if(value == GL_PIXEL_MAP_S_TO_S) return "GL_PIXEL_MAP_S_TO_S";
	if(value == GL_PIXEL_MAP_I_TO_R) return "GL_PIXEL_MAP_I_TO_R";
	if(value == GL_PIXEL_MAP_I_TO_G) return "GL_PIXEL_MAP_I_TO_G";
	if(value == GL_PIXEL_MAP_I_TO_B) return "GL_PIXEL_MAP_I_TO_B";
	if(value == GL_PIXEL_MAP_I_TO_A) return "GL_PIXEL_MAP_I_TO_A";
	if(value == GL_PIXEL_MAP_R_TO_R) return "GL_PIXEL_MAP_R_TO_R";
	if(value == GL_PIXEL_MAP_G_TO_G) return "GL_PIXEL_MAP_G_TO_G";
	if(value == GL_PIXEL_MAP_B_TO_B) return "GL_PIXEL_MAP_B_TO_B";
	if(value == GL_PIXEL_MAP_A_TO_A) return "GL_PIXEL_MAP_A_TO_A";
	if(value == GL_PIXEL_MAP_I_TO_I_SIZE) return "GL_PIXEL_MAP_I_TO_I_SIZE";
	if(value == GL_PIXEL_MAP_S_TO_S_SIZE) return "GL_PIXEL_MAP_S_TO_S_SIZE";
	if(value == GL_PIXEL_MAP_I_TO_R_SIZE) return "GL_PIXEL_MAP_I_TO_R_SIZE";
	if(value == GL_PIXEL_MAP_I_TO_G_SIZE) return "GL_PIXEL_MAP_I_TO_G_SIZE";
	if(value == GL_PIXEL_MAP_I_TO_B_SIZE) return "GL_PIXEL_MAP_I_TO_B_SIZE";
	if(value == GL_PIXEL_MAP_I_TO_A_SIZE) return "GL_PIXEL_MAP_I_TO_A_SIZE";
	if(value == GL_PIXEL_MAP_R_TO_R_SIZE) return "GL_PIXEL_MAP_R_TO_R_SIZE";
	if(value == GL_PIXEL_MAP_G_TO_G_SIZE) return "GL_PIXEL_MAP_G_TO_G_SIZE";
	if(value == GL_PIXEL_MAP_B_TO_B_SIZE) return "GL_PIXEL_MAP_B_TO_B_SIZE";
	if(value == GL_PIXEL_MAP_A_TO_A_SIZE) return "GL_PIXEL_MAP_A_TO_A_SIZE";
	if(value == GL_UNPACK_SWAP_BYTES) return "GL_UNPACK_SWAP_BYTES";
	if(value == GL_UNPACK_LSB_FIRST) return "GL_UNPACK_LSB_FIRST";
	if(value == GL_UNPACK_ROW_LENGTH) return "GL_UNPACK_ROW_LENGTH";
	if(value == GL_UNPACK_SKIP_ROWS) return "GL_UNPACK_SKIP_ROWS";
	if(value == GL_UNPACK_SKIP_PIXELS) return "GL_UNPACK_SKIP_PIXELS";
	if(value == GL_UNPACK_ALIGNMENT) return "GL_UNPACK_ALIGNMENT";
	if(value == GL_PACK_SWAP_BYTES) return "GL_PACK_SWAP_BYTES";
	if(value == GL_PACK_LSB_FIRST) return "GL_PACK_LSB_FIRST";
	if(value == GL_PACK_ROW_LENGTH) return "GL_PACK_ROW_LENGTH";
	if(value == GL_PACK_SKIP_ROWS) return "GL_PACK_SKIP_ROWS";
	if(value == GL_PACK_SKIP_PIXELS) return "GL_PACK_SKIP_PIXELS";
	if(value == GL_PACK_ALIGNMENT) return "GL_PACK_ALIGNMENT";
	if(value == GL_MAP_COLOR) return "GL_MAP_COLOR";
	if(value == GL_MAP_STENCIL) return "GL_MAP_STENCIL";
	if(value == GL_INDEX_SHIFT) return "GL_INDEX_SHIFT";
	if(value == GL_INDEX_OFFSET) return "GL_INDEX_OFFSET";
	if(value == GL_RED_SCALE) return "GL_RED_SCALE";
	if(value == GL_RED_BIAS) return "GL_RED_BIAS";
	if(value == GL_ZOOM_X) return "GL_ZOOM_X";
	if(value == GL_ZOOM_Y) return "GL_ZOOM_Y";
	if(value == GL_GREEN_SCALE) return "GL_GREEN_SCALE";
	if(value == GL_GREEN_BIAS) return "GL_GREEN_BIAS";
	if(value == GL_BLUE_SCALE) return "GL_BLUE_SCALE";
	if(value == GL_BLUE_BIAS) return "GL_BLUE_BIAS";
	if(value == GL_ALPHA_SCALE) return "GL_ALPHA_SCALE";
	if(value == GL_ALPHA_BIAS) return "GL_ALPHA_BIAS";
	if(value == GL_DEPTH_SCALE) return "GL_DEPTH_SCALE";
	if(value == GL_DEPTH_BIAS) return "GL_DEPTH_BIAS";
	if(value == GL_MAX_EVAL_ORDER) return "GL_MAX_EVAL_ORDER";
	if(value == GL_MAX_LIGHTS) return "GL_MAX_LIGHTS";
	if(value == GL_MAX_CLIP_PLANES) return "GL_MAX_CLIP_PLANES";
	if(value == GL_MAX_TEXTURE_SIZE) return "GL_MAX_TEXTURE_SIZE";
	if(value == GL_MAX_PIXEL_MAP_TABLE) return "GL_MAX_PIXEL_MAP_TABLE";
	if(value == GL_MAX_ATTRIB_STACK_DEPTH) return "GL_MAX_ATTRIB_STACK_DEPTH";
	if(value == GL_MAX_MODELVIEW_STACK_DEPTH) return "GL_MAX_MODELVIEW_STACK_DEPTH";
	if(value == GL_MAX_NAME_STACK_DEPTH) return "GL_MAX_NAME_STACK_DEPTH";
	if(value == GL_MAX_PROJECTION_STACK_DEPTH) return "GL_MAX_PROJECTION_STACK_DEPTH";
	if(value == GL_MAX_TEXTURE_STACK_DEPTH) return "GL_MAX_TEXTURE_STACK_DEPTH";
	if(value == GL_MAX_VIEWPORT_DIMS) return "GL_MAX_VIEWPORT_DIMS";
	if(value == GL_MAX_CLIENT_ATTRIB_STACK_DEPTH) return "GL_MAX_CLIENT_ATTRIB_STACK_DEPTH";
	if(value == GL_SUBPIXEL_BITS) return "GL_SUBPIXEL_BITS";
	if(value == GL_INDEX_BITS) return "GL_INDEX_BITS";
	if(value == GL_RED_BITS) return "GL_RED_BITS";
	if(value == GL_GREEN_BITS) return "GL_GREEN_BITS";
	if(value == GL_BLUE_BITS) return "GL_BLUE_BITS";
	if(value == GL_ALPHA_BITS) return "GL_ALPHA_BITS";
	if(value == GL_DEPTH_BITS) return "GL_DEPTH_BITS";
	if(value == GL_STENCIL_BITS) return "GL_STENCIL_BITS";
	if(value == GL_ACCUM_RED_BITS) return "GL_ACCUM_RED_BITS";
	if(value == GL_ACCUM_GREEN_BITS) return "GL_ACCUM_GREEN_BITS";
	if(value == GL_ACCUM_BLUE_BITS) return "GL_ACCUM_BLUE_BITS";
	if(value == GL_ACCUM_ALPHA_BITS) return "GL_ACCUM_ALPHA_BITS";
	if(value == GL_NAME_STACK_DEPTH) return "GL_NAME_STACK_DEPTH";
	if(value == GL_AUTO_NORMAL) return "GL_AUTO_NORMAL";
	if(value == GL_MAP1_COLOR_4) return "GL_MAP1_COLOR_4";
	if(value == GL_MAP1_INDEX) return "GL_MAP1_INDEX";
	if(value == GL_MAP1_NORMAL) return "GL_MAP1_NORMAL";
	if(value == GL_MAP1_TEXTURE_COORD_1) return "GL_MAP1_TEXTURE_COORD_1";
	if(value == GL_MAP1_TEXTURE_COORD_2) return "GL_MAP1_TEXTURE_COORD_2";
	if(value == GL_MAP1_TEXTURE_COORD_3) return "GL_MAP1_TEXTURE_COORD_3";
	if(value == GL_MAP1_TEXTURE_COORD_4) return "GL_MAP1_TEXTURE_COORD_4";
	if(value == GL_MAP1_VERTEX_3) return "GL_MAP1_VERTEX_3";
	if(value == GL_MAP1_VERTEX_4) return "GL_MAP1_VERTEX_4";
	if(value == GL_MAP2_COLOR_4) return "GL_MAP2_COLOR_4";
	if(value == GL_MAP2_INDEX) return "GL_MAP2_INDEX";
	if(value == GL_MAP2_NORMAL) return "GL_MAP2_NORMAL";
	if(value == GL_MAP2_TEXTURE_COORD_1) return "GL_MAP2_TEXTURE_COORD_1";
	if(value == GL_MAP2_TEXTURE_COORD_2) return "GL_MAP2_TEXTURE_COORD_2";
	if(value == GL_MAP2_TEXTURE_COORD_3) return "GL_MAP2_TEXTURE_COORD_3";
	if(value == GL_MAP2_TEXTURE_COORD_4) return "GL_MAP2_TEXTURE_COORD_4";
	if(value == GL_MAP2_VERTEX_3) return "GL_MAP2_VERTEX_3";
	if(value == GL_MAP2_VERTEX_4) return "GL_MAP2_VERTEX_4";
	if(value == GL_MAP1_GRID_DOMAIN) return "GL_MAP1_GRID_DOMAIN";
	if(value == GL_MAP1_GRID_SEGMENTS) return "GL_MAP1_GRID_SEGMENTS";
	if(value == GL_MAP2_GRID_DOMAIN) return "GL_MAP2_GRID_DOMAIN";
	if(value == GL_MAP2_GRID_SEGMENTS) return "GL_MAP2_GRID_SEGMENTS";
	if(value == GL_TEXTURE_1D) return "GL_TEXTURE_1D";
	if(value == GL_TEXTURE_2D) return "GL_TEXTURE_2D";
	if(value == GL_FEEDBACK_BUFFER_POINTER) return "GL_FEEDBACK_BUFFER_POINTER";
	if(value == GL_FEEDBACK_BUFFER_SIZE) return "GL_FEEDBACK_BUFFER_SIZE";
	if(value == GL_FEEDBACK_BUFFER_TYPE) return "GL_FEEDBACK_BUFFER_TYPE";
	if(value == GL_SELECTION_BUFFER_POINTER) return "GL_SELECTION_BUFFER_POINTER";
	if(value == GL_SELECTION_BUFFER_SIZE) return "GL_SELECTION_BUFFER_SIZE";
	if(value == GL_TEXTURE_WIDTH) return "GL_TEXTURE_WIDTH";
	if(value == GL_TRANSFORM_BIT) return "GL_TRANSFORM_BIT";
	if(value == GL_TEXTURE_HEIGHT) return "GL_TEXTURE_HEIGHT";
	if(value == GL_TEXTURE_INTERNAL_FORMAT) return "GL_TEXTURE_INTERNAL_FORMAT";
	if(value == GL_TEXTURE_BORDER_COLOR) return "GL_TEXTURE_BORDER_COLOR";
	if(value == GL_TEXTURE_BORDER) return "GL_TEXTURE_BORDER";
	if(value == GL_DONT_CARE) return "GL_DONT_CARE";
	if(value == GL_FASTEST) return "GL_FASTEST";
	if(value == GL_NICEST) return "GL_NICEST";
	if(value == GL_AMBIENT) return "GL_AMBIENT";
	if(value == GL_DIFFUSE) return "GL_DIFFUSE";
	if(value == GL_SPECULAR) return "GL_SPECULAR";
	if(value == GL_POSITION) return "GL_POSITION";
	if(value == GL_SPOT_DIRECTION) return "GL_SPOT_DIRECTION";
	if(value == GL_SPOT_EXPONENT) return "GL_SPOT_EXPONENT";
	if(value == GL_SPOT_CUTOFF) return "GL_SPOT_CUTOFF";
	if(value == GL_CONSTANT_ATTENUATION) return "GL_CONSTANT_ATTENUATION";
	if(value == GL_LINEAR_ATTENUATION) return "GL_LINEAR_ATTENUATION";
	if(value == GL_QUADRATIC_ATTENUATION) return "GL_QUADRATIC_ATTENUATION";
	if(value == GL_COMPILE) return "GL_COMPILE";
	if(value == GL_COMPILE_AND_EXECUTE) return "GL_COMPILE_AND_EXECUTE";
	if(value == GL_BYTE) return "GL_BYTE";
	if(value == GL_UNSIGNED_BYTE) return "GL_UNSIGNED_BYTE";
	if(value == GL_SHORT) return "GL_SHORT";
	if(value == GL_UNSIGNED_SHORT) return "GL_UNSIGNED_SHORT";
	if(value == GL_INT) return "GL_INT";
	if(value == GL_UNSIGNED_INT) return "GL_UNSIGNED_INT";
	if(value == GL_FLOAT) return "GL_FLOAT";
	if(value == GL_2_BYTES) return "GL_2_BYTES";
	if(value == GL_3_BYTES) return "GL_3_BYTES";
	if(value == GL_4_BYTES) return "GL_4_BYTES";
	if(value == GL_DOUBLE) return "GL_DOUBLE";
	if(value == GL_CLEAR) return "GL_CLEAR";
	if(value == GL_AND) return "GL_AND";
	if(value == GL_AND_REVERSE) return "GL_AND_REVERSE";
	if(value == GL_COPY) return "GL_COPY";
	if(value == GL_AND_INVERTED) return "GL_AND_INVERTED";
	if(value == GL_NOOP) return "GL_NOOP";
	if(value == GL_XOR) return "GL_XOR";
	if(value == GL_OR) return "GL_OR";
	if(value == GL_NOR) return "GL_NOR";
	if(value == GL_EQUIV) return "GL_EQUIV";
	if(value == GL_INVERT) return "GL_INVERT";
	if(value == GL_OR_REVERSE) return "GL_OR_REVERSE";
	if(value == GL_COPY_INVERTED) return "GL_COPY_INVERTED";
	if(value == GL_OR_INVERTED) return "GL_OR_INVERTED";
	if(value == GL_NAND) return "GL_NAND";
	if(value == GL_SET) return "GL_SET";
	if(value == GL_EMISSION) return "GL_EMISSION";
	if(value == GL_SHININESS) return "GL_SHININESS";
	if(value == GL_AMBIENT_AND_DIFFUSE) return "GL_AMBIENT_AND_DIFFUSE";
	if(value == GL_COLOR_INDEXES) return "GL_COLOR_INDEXES";
	if(value == GL_MODELVIEW) return "GL_MODELVIEW";
	if(value == GL_PROJECTION) return "GL_PROJECTION";
	if(value == GL_TEXTURE) return "GL_TEXTURE";
	if(value == GL_COLOR) return "GL_COLOR";
	if(value == GL_DEPTH) return "GL_DEPTH";
	if(value == GL_STENCIL) return "GL_STENCIL";
	if(value == GL_COLOR_INDEX) return "GL_COLOR_INDEX";
	if(value == GL_STENCIL_INDEX) return "GL_STENCIL_INDEX";
	if(value == GL_DEPTH_COMPONENT) return "GL_DEPTH_COMPONENT";
	if(value == GL_RED) return "GL_RED";
	if(value == GL_GREEN) return "GL_GREEN";
	if(value == GL_BLUE) return "GL_BLUE";
	if(value == GL_ALPHA) return "GL_ALPHA";
	if(value == GL_RGB) return "GL_RGB";
	if(value == GL_RGBA) return "GL_RGBA";
	if(value == GL_LUMINANCE) return "GL_LUMINANCE";
	if(value == GL_LUMINANCE_ALPHA) return "GL_LUMINANCE_ALPHA";
	if(value == GL_BITMAP) return "GL_BITMAP";
	if(value == GL_POINT) return "GL_POINT";
	if(value == GL_LINE) return "GL_LINE";
	if(value == GL_FILL) return "GL_FILL";
	if(value == GL_RENDER) return "GL_RENDER";
	if(value == GL_FEEDBACK) return "GL_FEEDBACK";
	if(value == GL_SELECT) return "GL_SELECT";
	if(value == GL_FLAT) return "GL_FLAT";
	if(value == GL_SMOOTH) return "GL_SMOOTH";
	if(value == GL_KEEP) return "GL_KEEP";
	if(value == GL_REPLACE) return "GL_REPLACE";
	if(value == GL_INCR) return "GL_INCR";
	if(value == GL_DECR) return "GL_DECR";
	if(value == GL_VENDOR) return "GL_VENDOR";
	if(value == GL_RENDERER) return "GL_RENDERER";
	if(value == GL_VERSION) return "GL_VERSION";
	if(value == GL_EXTENSIONS) return "GL_EXTENSIONS";
	if(value == GL_S) return "GL_S";
	if(value == GL_ENABLE_BIT) return "GL_ENABLE_BIT";
	if(value == GL_T) return "GL_T";
	if(value == GL_R) return "GL_R";
	if(value == GL_Q) return "GL_Q";
	if(value == GL_MODULATE) return "GL_MODULATE";
	if(value == GL_DECAL) return "GL_DECAL";
	if(value == GL_TEXTURE_ENV_MODE) return "GL_TEXTURE_ENV_MODE";
	if(value == GL_TEXTURE_ENV_COLOR) return "GL_TEXTURE_ENV_COLOR";
	if(value == GL_TEXTURE_ENV) return "GL_TEXTURE_ENV";
	if(value == GL_EYE_LINEAR) return "GL_EYE_LINEAR";
	if(value == GL_OBJECT_LINEAR) return "GL_OBJECT_LINEAR";
	if(value == GL_SPHERE_MAP) return "GL_SPHERE_MAP";
	if(value == GL_TEXTURE_GEN_MODE) return "GL_TEXTURE_GEN_MODE";
	if(value == GL_OBJECT_PLANE) return "GL_OBJECT_PLANE";
	if(value == GL_EYE_PLANE) return "GL_EYE_PLANE";
	if(value == GL_NEAREST) return "GL_NEAREST";
	if(value == GL_LINEAR) return "GL_LINEAR";
	if(value == GL_NEAREST_MIPMAP_NEAREST) return "GL_NEAREST_MIPMAP_NEAREST";
	if(value == GL_LINEAR_MIPMAP_NEAREST) return "GL_LINEAR_MIPMAP_NEAREST";
	if(value == GL_NEAREST_MIPMAP_LINEAR) return "GL_NEAREST_MIPMAP_LINEAR";
	if(value == GL_LINEAR_MIPMAP_LINEAR) return "GL_LINEAR_MIPMAP_LINEAR";
	if(value == GL_TEXTURE_MAG_FILTER) return "GL_TEXTURE_MAG_FILTER";
	if(value == GL_TEXTURE_MIN_FILTER) return "GL_TEXTURE_MIN_FILTER";
	if(value == GL_TEXTURE_WRAP_S) return "GL_TEXTURE_WRAP_S";
	if(value == GL_TEXTURE_WRAP_T) return "GL_TEXTURE_WRAP_T";
	if(value == GL_CLAMP) return "GL_CLAMP";
	if(value == GL_REPEAT) return "GL_REPEAT";
	if(value == GL_POLYGON_OFFSET_UNITS) return "GL_POLYGON_OFFSET_UNITS";
	if(value == GL_POLYGON_OFFSET_POINT) return "GL_POLYGON_OFFSET_POINT";
	if(value == GL_POLYGON_OFFSET_LINE) return "GL_POLYGON_OFFSET_LINE";
	if(value == GL_R3_G3_B2) return "GL_R3_G3_B2";
	if(value == GL_V2F) return "GL_V2F";
	if(value == GL_V3F) return "GL_V3F";
	if(value == GL_C4UB_V2F) return "GL_C4UB_V2F";
	if(value == GL_C4UB_V3F) return "GL_C4UB_V3F";
	if(value == GL_C3F_V3F) return "GL_C3F_V3F";
	if(value == GL_N3F_V3F) return "GL_N3F_V3F";
	if(value == GL_C4F_N3F_V3F) return "GL_C4F_N3F_V3F";
	if(value == GL_T2F_V3F) return "GL_T2F_V3F";
	if(value == GL_T4F_V4F) return "GL_T4F_V4F";
	if(value == GL_T2F_C4UB_V3F) return "GL_T2F_C4UB_V3F";
	if(value == GL_T2F_C3F_V3F) return "GL_T2F_C3F_V3F";
	if(value == GL_T2F_N3F_V3F) return "GL_T2F_N3F_V3F";
	if(value == GL_T2F_C4F_N3F_V3F) return "GL_T2F_C4F_N3F_V3F";
	if(value == GL_T4F_C4F_N3F_V4F) return "GL_T4F_C4F_N3F_V4F";
	if(value == GL_CLIP_PLANE0) return "GL_CLIP_PLANE0";
	if(value == GL_CLIP_PLANE1) return "GL_CLIP_PLANE1";
	if(value == GL_CLIP_PLANE2) return "GL_CLIP_PLANE2";
	if(value == GL_CLIP_PLANE3) return "GL_CLIP_PLANE3";
	if(value == GL_CLIP_PLANE4) return "GL_CLIP_PLANE4";
	if(value == GL_CLIP_PLANE5) return "GL_CLIP_PLANE5";
	if(value == GL_LIGHT0) return "GL_LIGHT0";
	if(value == GL_COLOR_BUFFER_BIT) return "GL_COLOR_BUFFER_BIT";
	if(value == GL_LIGHT1) return "GL_LIGHT1";
	if(value == GL_LIGHT2) return "GL_LIGHT2";
	if(value == GL_LIGHT3) return "GL_LIGHT3";
	if(value == GL_LIGHT4) return "GL_LIGHT4";
	if(value == GL_LIGHT5) return "GL_LIGHT5";
	if(value == GL_LIGHT6) return "GL_LIGHT6";
	if(value == GL_LIGHT7) return "GL_LIGHT7";
	if(value == GL_HINT_BIT) return "GL_HINT_BIT";
	if(value == GL_POLYGON_OFFSET_FILL) return "GL_POLYGON_OFFSET_FILL";
	if(value == GL_POLYGON_OFFSET_FACTOR) return "GL_POLYGON_OFFSET_FACTOR";
	if(value == GL_ALPHA4) return "GL_ALPHA4";
	if(value == GL_ALPHA8) return "GL_ALPHA8";
	if(value == GL_ALPHA12) return "GL_ALPHA12";
	if(value == GL_ALPHA16) return "GL_ALPHA16";
	if(value == GL_LUMINANCE4) return "GL_LUMINANCE4";
	if(value == GL_LUMINANCE8) return "GL_LUMINANCE8";
	if(value == GL_LUMINANCE12) return "GL_LUMINANCE12";
	if(value == GL_LUMINANCE16) return "GL_LUMINANCE16";
	if(value == GL_LUMINANCE4_ALPHA4) return "GL_LUMINANCE4_ALPHA4";
	if(value == GL_LUMINANCE6_ALPHA2) return "GL_LUMINANCE6_ALPHA2";
	if(value == GL_LUMINANCE8_ALPHA8) return "GL_LUMINANCE8_ALPHA8";
	if(value == GL_LUMINANCE12_ALPHA4) return "GL_LUMINANCE12_ALPHA4";
	if(value == GL_LUMINANCE12_ALPHA12) return "GL_LUMINANCE12_ALPHA12";
	if(value == GL_LUMINANCE16_ALPHA16) return "GL_LUMINANCE16_ALPHA16";
	if(value == GL_INTENSITY) return "GL_INTENSITY";
	if(value == GL_INTENSITY4) return "GL_INTENSITY4";
	if(value == GL_INTENSITY8) return "GL_INTENSITY8";
	if(value == GL_INTENSITY12) return "GL_INTENSITY12";
	if(value == GL_INTENSITY16) return "GL_INTENSITY16";
	if(value == GL_RGB4) return "GL_RGB4";
	if(value == GL_RGB5) return "GL_RGB5";
	if(value == GL_RGB8) return "GL_RGB8";
	if(value == GL_RGB10) return "GL_RGB10";
	if(value == GL_RGB12) return "GL_RGB12";
	if(value == GL_RGB16) return "GL_RGB16";
	if(value == GL_RGBA2) return "GL_RGBA2";
	if(value == GL_RGBA4) return "GL_RGBA4";
	if(value == GL_RGB5_A1) return "GL_RGB5_A1";
	if(value == GL_RGBA8) return "GL_RGBA8";
	if(value == GL_RGB10_A2) return "GL_RGB10_A2";
	if(value == GL_RGBA12) return "GL_RGBA12";
	if(value == GL_RGBA16) return "GL_RGBA16";
	if(value == GL_TEXTURE_RED_SIZE) return "GL_TEXTURE_RED_SIZE";
	if(value == GL_TEXTURE_GREEN_SIZE) return "GL_TEXTURE_GREEN_SIZE";
	if(value == GL_TEXTURE_BLUE_SIZE) return "GL_TEXTURE_BLUE_SIZE";
	if(value == GL_TEXTURE_ALPHA_SIZE) return "GL_TEXTURE_ALPHA_SIZE";
	if(value == GL_TEXTURE_LUMINANCE_SIZE) return "GL_TEXTURE_LUMINANCE_SIZE";
	if(value == GL_TEXTURE_INTENSITY_SIZE) return "GL_TEXTURE_INTENSITY_SIZE";
	if(value == GL_PROXY_TEXTURE_1D) return "GL_PROXY_TEXTURE_1D";
	if(value == GL_PROXY_TEXTURE_2D) return "GL_PROXY_TEXTURE_2D";
	if(value == GL_TEXTURE_PRIORITY) return "GL_TEXTURE_PRIORITY";
	if(value == GL_TEXTURE_RESIDENT) return "GL_TEXTURE_RESIDENT";
	if(value == GL_TEXTURE_BINDING_1D) return "GL_TEXTURE_BINDING_1D";
	if(value == GL_TEXTURE_BINDING_2D) return "GL_TEXTURE_BINDING_2D";
	if(value == GL_VERTEX_ARRAY) return "GL_VERTEX_ARRAY";
	if(value == GL_NORMAL_ARRAY) return "GL_NORMAL_ARRAY";
	if(value == GL_COLOR_ARRAY) return "GL_COLOR_ARRAY";
	if(value == GL_INDEX_ARRAY) return "GL_INDEX_ARRAY";
	if(value == GL_TEXTURE_COORD_ARRAY) return "GL_TEXTURE_COORD_ARRAY";
	if(value == GL_EDGE_FLAG_ARRAY) return "GL_EDGE_FLAG_ARRAY";
	if(value == GL_VERTEX_ARRAY_SIZE) return "GL_VERTEX_ARRAY_SIZE";
	if(value == GL_VERTEX_ARRAY_TYPE) return "GL_VERTEX_ARRAY_TYPE";
	if(value == GL_VERTEX_ARRAY_STRIDE) return "GL_VERTEX_ARRAY_STRIDE";
	if(value == GL_NORMAL_ARRAY_TYPE) return "GL_NORMAL_ARRAY_TYPE";
	if(value == GL_NORMAL_ARRAY_STRIDE) return "GL_NORMAL_ARRAY_STRIDE";
	if(value == GL_COLOR_ARRAY_SIZE) return "GL_COLOR_ARRAY_SIZE";
	if(value == GL_COLOR_ARRAY_TYPE) return "GL_COLOR_ARRAY_TYPE";
	if(value == GL_COLOR_ARRAY_STRIDE) return "GL_COLOR_ARRAY_STRIDE";
	if(value == GL_INDEX_ARRAY_TYPE) return "GL_INDEX_ARRAY_TYPE";
	if(value == GL_INDEX_ARRAY_STRIDE) return "GL_INDEX_ARRAY_STRIDE";
	if(value == GL_TEXTURE_COORD_ARRAY_SIZE) return "GL_TEXTURE_COORD_ARRAY_SIZE";
	if(value == GL_TEXTURE_COORD_ARRAY_TYPE) return "GL_TEXTURE_COORD_ARRAY_TYPE";
	if(value == GL_TEXTURE_COORD_ARRAY_STRIDE) return "GL_TEXTURE_COORD_ARRAY_STRIDE";
	if(value == GL_EDGE_FLAG_ARRAY_STRIDE) return "GL_EDGE_FLAG_ARRAY_STRIDE";
	if(value == GL_VERTEX_ARRAY_POINTER) return "GL_VERTEX_ARRAY_POINTER";
	if(value == GL_NORMAL_ARRAY_POINTER) return "GL_NORMAL_ARRAY_POINTER";
	if(value == GL_COLOR_ARRAY_POINTER) return "GL_COLOR_ARRAY_POINTER";
	if(value == GL_INDEX_ARRAY_POINTER) return "GL_INDEX_ARRAY_POINTER";
	if(value == GL_TEXTURE_COORD_ARRAY_POINTER) return "GL_TEXTURE_COORD_ARRAY_POINTER";
	if(value == GL_EDGE_FLAG_ARRAY_POINTER) return "GL_EDGE_FLAG_ARRAY_POINTER";
	if(value == GL_COLOR_INDEX1_EXT) return "GL_COLOR_INDEX1_EXT";
	if(value == GL_COLOR_INDEX2_EXT) return "GL_COLOR_INDEX2_EXT";
	if(value == GL_COLOR_INDEX4_EXT) return "GL_COLOR_INDEX4_EXT";
	if(value == GL_COLOR_INDEX8_EXT) return "GL_COLOR_INDEX8_EXT";
	if(value == GL_COLOR_INDEX12_EXT) return "GL_COLOR_INDEX12_EXT";
	if(value == GL_COLOR_INDEX16_EXT) return "GL_COLOR_INDEX16_EXT";
	if(value == GL_EVAL_BIT) return "GL_EVAL_BIT";
	if(value == GL_LIST_BIT) return "GL_LIST_BIT";
	if(value == GL_TEXTURE_BIT) return "GL_TEXTURE_BIT";
	if(value == GL_SCISSOR_BIT) return "GL_SCISSOR_BIT";
	if(value == GL_ALL_ATTRIB_BITS) return "GL_ALL_ATTRIB_BITS";
	if(value == GL_CLIENT_ALL_ATTRIB_BITS) return "GL_CLIENT_ALL_ATTRIB_BITS";
	return "Undefined GLEnum";
}

#ifdef _MSC_VER
#define Assert(x) if(!(x)) __debugbreak()
#else
#define Assert(x) (x)
#endif


#define GLCall(x) GLClearError();\
	x;\
	Assert(GLLogError(#x, __FILE__, __LINE__))

static void GLClearError(){
	// Repeatly get errors until there's no error
	while(glGetError() != GL_NO_ERROR);
}

static bool GLLogError(const char* function, const char* file, int line){
	// While the glGetError() not returns GL_NO_ERROR(which is defined to 0) 
	while(GLenum error = glGetError()){
		cout << "[OpenGL Error " << hex << error << dec << "] "
			 << "(" << file << ":" << line << ") : "
			 << GLGetEnumString(error) << endl;
		return false;
	}
	return true;
}

struct ShaderProgramSource{
	string VertexShader;
	string FragmentShader;
};

ShaderProgramSource ParseShader(string filePath){
	enum class ShaderType{
		NONE = -1, VERTEX = 0, FRAGMENT = 1
	};

	ifstream stream(filePath);
	string line;
	ShaderType type = ShaderType::NONE;
	stringstream ss[2];

	while(getline(stream, line)){
		if(line.find("#shader") != string::npos){
			if(line.find("vertex")   != string::npos) type = ShaderType::VERTEX;
			if(line.find("fragment") != string::npos) type = ShaderType::FRAGMENT;
		}
		else{
			ss[(int)type] << line << '\n';
		}
	}

	return {
		ss[(i32)ShaderType::VERTEX].str(),
		ss[(i32)ShaderType::FRAGMENT].str()
	};
}

static ui32 CompileShader(ui32 shaderType, const string& shaderCode){
	// Create a seperated shader
	ui32 shader = glCreateShader(shaderType);

	// Replace the source code of this shader object
	const char* code_cstr = shaderCode.c_str();
	glShaderSource(shader, 1, &code_cstr, nullptr);

	// Compile the shader
	glCompileShader(shader);

	// Get the compiling status
	i32 result;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &result);

	// If there is at least one error
	if(result == GL_FALSE){
		// Get the Length of the Error Message
		i32 length;
		glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &length);

		// Get the Error Message itself
		char* message = new char[length];
		glGetShaderInfoLog(shader, length, &length, message);

		// Output the error message
		cout << "Failed to compile "
		     << (shaderType == GL_VERTEX_SHADER ? "Vertex" : "Fragment")
			 << " Shader." << endl
			 << message << endl;

		// Return an empty shader
		glDeleteShader(shader);
		return 0;
	}

	return shader;
}

static ui32 CreateShader(const string& vertexShader, const string& fragmentShader){
	// Create a new whole shader
	ui32 program = glCreateProgram();

	// Compile Vertex and Fragment Shader
	ui32 vs = CompileShader(GL_VERTEX_SHADER, vertexShader);
	ui32 fs = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

	// Attach Vertex and Fragment Shader into the whole shader
	glAttachShader(program, vs);
	glAttachShader(program, fs);

	// Do Linking and Validating, make the whole shader run
	glLinkProgram(program);
	glValidateProgram(program);

	// Flag the deletions of Vertex and Fragment Shader
	glDeleteShader(vs);
	glDeleteShader(fs);

	return program;
}

// Create ui32s to save buffers' ID
ui32 vbo;  // Vertex Buffer Object
ui32 ibo;  // Index  Buffer Object
ui32 vao;  // Vertex Array  Object
ui32 shader;

#define POSITION_LENGTH 8
#define INDICIES_LENGTH 6

// Define our Vericies
f32 positions[POSITION_LENGTH] = {
	-0.5f, -0.5f,
	 0.5f, -0.5f,
	 0.5f,  0.5f,
	-0.5f,  0.5f
};

ui32 indicies[INDICIES_LENGTH] = {
	0, 1, 2,
	2, 3, 0
};

void Setup()
{
	// Load our shaders
	ShaderProgramSource source = ParseShader("../Resources/basic.shader");
	shader = CreateShader(source.VertexShader, source.FragmentShader);
	glUseProgram(shader);

    // Create vbo
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, POSITION_LENGTH * sizeof(f32), positions, GL_STATIC_DRAW);

    // Create vao
	// Make sure to create vao after vbo and before ibo
	// So that the vao can properly build the connection to vbo
	GLCall(glGenVertexArrays(1, &vao));
	GLCall(glBindVertexArray(vao));
    GLCall(glEnableVertexAttribArray(0));
    GLCall(glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), 0));

	// Create ibo
	glGenBuffers(1, &ibo);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, POSITION_LENGTH * sizeof(ui32), indicies, GL_STATIC_DRAW);

	// Debind all the stuffs
	// Make sure to debind vao before vbo
	// Otherwise the vao will lose connection to vbo
	glBindVertexArray(0);
	glUseProgram(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

float deltaColor = 0.0f;

void Update()
{
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Set delta color
	deltaColor += 0.01f;
	if(deltaColor > 1.0f){
		deltaColor = 0.0f;
	}

	// Bind shader and set uniform
	glUseProgram(shader);
	i32 location = glGetUniformLocation(shader, "u_Color");
	glUniform4f(location, deltaColor, deltaColor, 0.0f, 1.0f);

	// Bind vao
	// Because the vao is connected to the vbo
	// So we no longer need to bind the vbo
	glBindVertexArray(vao);

	// Bind ibo
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);

	// Draw Triangles
	GLCall(glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, csNullPtr));

	// Debind all the stuffs
	glUseProgram(0);
	glBindVertexArray(0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	// Swap the front and back buffer
	glutSwapBuffers();
}

void CleanUp(){
	glDeleteProgram(shader);
	cout << "The Shader has been deleted!" << endl;
}

void OnTimer(int value)
{
   glutPostRedisplay();
   glutTimerFunc(16, OnTimer, 1);
}

int main(int argc, char** argv)
{
	// Init GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

	// Create a window
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(30, 30);
	glutCreateWindow(argv[0]);

	// Init GLEW ---AFTER CREATING A WINDOW--- !!! (This is very important!)
	if (glewInit() != GLEW_OK) {
		cout << "Error when initializing glew!\n" << endl;
		return -1;
	}

	// Print OpenGL Version
	cout << glGetString(GL_VERSION) << endl;

	// Run our custom Setup() function
	Setup();
	// Bind our update function to GLUT
	glutDisplayFunc(Update);        // Refresh when window resize
	glutTimerFunc(16, OnTimer, 1);  // Refresh every 16ms (about 60 FPS)
	// Run our update function every frame
	glutMainLoop();
	// Run CleanUp() after the main loop ends
	CleanUp();

	// Return after closing the window
	return 0;
}
