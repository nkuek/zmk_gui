#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_US
#define LV_ATTRIBUTE_IMG_US
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_US uint8_t us_map[] = {
  0x02, 0x03, 0x07, 0x02, 	/*Color of index 0*/
  0x2a, 0x32, 0xe3, 0xfd, 	/*Color of index 1*/
  0xd2, 0x07, 0x08, 0xfd, 	/*Color of index 2*/
  0x01, 0x00, 0x02, 0xfd, 	/*Color of index 3*/

  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xa8, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xa0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x7d, 0xd3, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xaa, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0xaf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0xae, 0xbf, 0xab, 0xea, 0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x5f, 0xfa, 0xbf, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xaa, 0xaa, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x15, 0x5f, 0xff, 0xea, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xaf, 0xff, 0xea, 0xaa, 0xaa, 0xab, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x01, 0x55, 0x55, 0x7e, 0xfe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0xab, 0xff, 0xff, 0xaa, 0xab, 0xea, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x15, 0x55, 0x55, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0xa6, 0xbe, 0xff, 0xff, 0xfe, 0xaa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x05, 0x55, 0x55, 0x57, 0xfa, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0xfe, 0xab, 0xbb, 0xff, 0xea, 0xaa, 0xaa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x55, 0x55, 0x55, 0x5f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 
  0xff, 0xea, 0xea, 0xbf, 0xaa, 0xaa, 0xaa, 0xaa, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc5, 0x55, 0x55, 0x55, 0x7f, 0xfe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0xff, 0xea, 0xea, 0xaa, 0xaa, 0xab, 0xaa, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x7f, 0xfe, 0xff, 0xff, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xfe, 0xaa, 0xaa, 0xaa, 0xaa, 0xea, 0xaa, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xfe, 0xff, 0xff, 0xd5, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xff, 0xea, 0xaa, 0xaa, 0xba, 0xbf, 0xaa, 0xfa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xbf, 0xff, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xfe, 0xaa, 0xbe, 0xab, 0xff, 0xea, 0xbb, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0x55, 0x5d, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xff, 0xff, 0xfe, 0xbb, 0xab, 0xff, 0xff, 0xea, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xbf, 0xff, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xbf, 0xbf, 0xff, 0xea, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0x55, 0x55, 0xdf, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0x9b, 0xf7, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xa9, 0x5d, 0xdd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbf, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xea, 0xa5, 0x6f, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x75, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xab, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0x95, 0x7d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xf4, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaa, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x99, 0x55, 0x65, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xba, 0xfa, 0xff, 0xff, 0xfa, 0xaa, 0xaa, 0x65, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xc0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaf, 0xfe, 0xaf, 0xff, 0xff, 0xaa, 0xaa, 0xa6, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xd5, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xab, 0xff, 0xff, 0xfa, 0xaa, 0xa9, 0x95, 0x5d, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xab, 0xff, 0xff, 0xbf, 0xaa, 0xa6, 0x55, 0x57, 0x57, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xfb, 0xd5, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xfe, 0x99, 0x55, 0x55, 0x75, 0xf7, 0xf5, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xfb, 0xd5, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x9a, 0xb5, 0xdf, 0xff, 0xff, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x66, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x75, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x5f, 0xd5, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0x40, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xe5, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x57, 0xff, 0xff, 0xff, 0x55, 0x55, 0x5f, 0xd5, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x55, 0x55, 0x57, 0xff, 0xff, 0xd5, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 0x55, 0x55, 0x5d, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xf5, 0x55, 0x57, 0xd5, 0x55, 0x7f, 0xff, 0xff, 0xff, 0x55, 0x55, 0x5f, 0xff, 0xdf, 0xd4, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x95, 0x55, 0x55, 0x55, 0x77, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x55, 0x55, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 0x55, 0x55, 0x55, 0x5d, 0xdf, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0x55, 0x5d, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0x75, 0x77, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x75, 0x55, 0x55, 0xfa, 0xef, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xd7, 0x7f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xd5, 0x55, 0x56, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x77, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xd5, 0x55, 0x5e, 0xab, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xd5, 0x55, 0x7a, 0xab, 0xff, 0xff, 0xff, 0xff, 0x75, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7a, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xaf, 0xff, 0xfd, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7e, 0xaf, 0xff, 0xfd, 0xff, 0xff, 0xf5, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xab, 0xff, 0xfd, 0x5f, 0xff, 0xfd, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xbf, 0xff, 0xfd, 0x5f, 0xff, 0xff, 0xc4, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xf5, 0x57, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x55, 0x55, 0x57, 0x55, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xe5, 0x55, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xfd, 0x55, 0x5d, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xd5, 0x55, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0xcc, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xd7, 0xd5, 0x55, 0x5d, 0xd5, 0x55, 0x55, 0x57, 0xff, 0xff, 0x55, 0x55, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0x75, 0x55, 0x5f, 0x55, 0xd5, 0x55, 0x55, 0xff, 0xfd, 0x55, 0x55, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xd5, 0x55, 0x7f, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x57, 0x5f, 0x55, 0x57, 0x57, 0x75, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x7d, 0x55, 0x5d, 0x59, 0x9d, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xfa, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x5d, 0x55, 0x55, 0xab, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x56, 0xab, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x5f, 0xaf, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x5f, 0xfd, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x5f, 0xaf, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x5f, 0xfd, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x7f, 0xaf, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x7f, 0xaf, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x6f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0xff, 0xef, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0xbf, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xbf, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0xff, 0xfa, 0xff, 0xf5, 0x55, 0x55, 0x56, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xaf, 0xaf, 0xff, 0xfe, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x57, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xbe, 0xea, 0xfa, 0xba, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x7f, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfa, 0xff, 0xbf, 0xfe, 0xaa, 0xaa, 0xaa, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x5f, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0xfe, 0xab, 0xff, 0xff, 0xea, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x57, 0xff, 0xff, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xfe, 0xaa, 0xbf, 0xff, 0xfa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0xff, 0xff, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaf, 0xff, 0xfa, 0xa6, 0xff, 0xff, 0xfa, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x7f, 0xfd, 0x55, 0x55, 0x57, 0xff, 0xff, 0xf7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xab, 0xff, 0xfb, 0xf9, 0xab, 0xff, 0xfe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0xdf, 0xff, 0xff, 0xdf, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xff, 0xff, 0xff, 0xab, 0xfe, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x9a, 0xbf, 0xff, 0xff, 0xab, 0xbf, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0xab, 0xff, 0xff, 0xab, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x6f, 0xff, 0xff, 0xab, 0xeb, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x7f, 0xff, 0xdf, 0xba, 0xeb, 0xef, 0xaf, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x56, 0xff, 0xff, 0xff, 0xaa, 0xfe, 0xab, 0xab, 0xfb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x77, 0x7f, 0xeb, 0xff, 0xa6, 0xaf, 0xab, 0xeb, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfd, 0x7f, 0xfa, 0xff, 0xfa, 0xab, 0xaa, 0xfb, 0xfa, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x57, 0xea, 0xbf, 0xbe, 0xaa, 0xaa, 0xfe, 0xfa, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xd5, 0xbb, 0xbf, 0xbe, 0xaa, 0xaa, 0xea, 0xfa, 0xbf, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf5, 0x7b, 0xea, 0xfe, 0xae, 0xaa, 0xaa, 0xba, 0xbf, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xeb, 0xf9, 0x7f, 0xaa, 0xbf, 0xaf, 0xaa, 0xaa, 0xba, 0xbf, 0xf7, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfa, 0xaa, 0x76, 0xbe, 0xef, 0xaf, 0xaa, 0xaa, 0xba, 0xbf, 0xd0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfa, 0xab, 0x55, 0xff, 0xeb, 0xae, 0xaa, 0xaa, 0xaa, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xea, 0xaa, 0x97, 0xff, 0xfe, 0xaa, 0xaa, 0xaa, 0xba, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xaa, 0x97, 0xff, 0xff, 0xea, 0xaa, 0x9a, 0xba, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0xd7, 0x74, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xaa, 0x9d, 0xff, 0xdf, 0xaa, 0xaa, 0x6a, 0xba, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xaa, 0xaf, 0x7f, 0xf7, 0xaa, 0xaf, 0xaa, 0xbf, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x6a, 0xaa, 0xaf, 0xd5, 0xff, 0xaa, 0xaf, 0xaa, 0xbf, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0xaa, 0xaf, 0xd5, 0xf6, 0xea, 0xab, 0x9a, 0xbf, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t us = {
  .header.cf = LV_IMG_CF_INDEXED_2BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 150,
  .header.h = 96,
  .data_size = 3664,
  .data = us_map,
};
