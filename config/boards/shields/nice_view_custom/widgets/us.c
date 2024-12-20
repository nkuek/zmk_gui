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
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0xfe, 0xfe, 0xfe, 0xfe, 	/*Color of index 1*/
  0x10, 0x10, 0x10, 0x63, 	/*Color of index 2*/
  0x00, 0x00, 0x00, 0xfd, 	/*Color of index 3*/

  0xd7, 0xff, 0xff, 0xf5, 0xd5, 0x55, 0x55, 0x55, 0xff, 0xfd, 0x55, 0x55, 0x57, 0x55, 0xf7, 0xfd, 0x57, 0x77, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xad, 0x55, 0x5f, 0xee, 0x80, 0x00, 0x00, 0x00, 
  0x7f, 0xff, 0xff, 0xfd, 0xd7, 0x55, 0x55, 0x57, 0xf5, 0x75, 0xff, 0x57, 0xff, 0xff, 0xf7, 0xfd, 0x55, 0x77, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x09, 0x55, 0x55, 0x55, 0x57, 0xe0, 0x00, 0x00, 0x00, 
  0xff, 0xfd, 0x55, 0x7d, 0xff, 0xf5, 0x55, 0x57, 0xf5, 0x55, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x57, 0xf0, 0x00, 0x00, 0x00, 0x02, 0xbd, 0x5f, 0xd5, 0x55, 0xd5, 0xdc, 0x00, 0x00, 0x00, 
  0xff, 0xd5, 0xf5, 0xff, 0xff, 0xff, 0xd5, 0xd5, 0xd5, 0x55, 0xff, 0xdd, 0xfd, 0x55, 0xdd, 0x75, 0x5f, 0xf7, 0xf8, 0x00, 0x00, 0x02, 0xbb, 0xfd, 0x7f, 0xd5, 0x55, 0x55, 0x5f, 0xa0, 0x00, 0x00, 
  0xff, 0xff, 0x55, 0xff, 0xff, 0xff, 0xff, 0x57, 0x55, 0x57, 0xd7, 0x55, 0xff, 0x55, 0x55, 0x75, 0x5f, 0xf5, 0xfc, 0x00, 0x00, 0x2b, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x57, 0xfc, 0x00, 0x00, 
  0xff, 0xff, 0xdf, 0x57, 0xff, 0x5f, 0xf5, 0xff, 0x55, 0x5f, 0xd5, 0xdf, 0xfd, 0x55, 0x55, 0x55, 0x7f, 0xf5, 0x5e, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x5f, 0x00, 0x00, 
  0x55, 0xff, 0xff, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xd5, 0xf5, 0xd7, 0x7f, 0xd5, 0x57, 0xe0, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0xd7, 0xa0, 0x00, 
  0x55, 0x57, 0xff, 0x7f, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x75, 0xdf, 0xf5, 0x55, 0xff, 0xff, 0x7f, 0xf5, 0x55, 0x7b, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xfd, 0x55, 0x55, 0xd5, 0xf8, 0x00, 
  0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0xf5, 0x55, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0x57, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0xff, 0x00, 
  0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x5f, 0xf5, 0x55, 0x55, 0x55, 0x77, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xfd, 0x57, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0xff, 0x80, 
  0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0x55, 0xff, 0xff, 0xd5, 0x55, 0x7f, 0xd5, 0x55, 0x55, 0xd5, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0xff, 0xf7, 0xff, 0xff, 0x55, 0x55, 0x7f, 0x80, 
  0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0x57, 0x5f, 0xff, 0xf5, 0x55, 0x7f, 0xd5, 0x7d, 0x57, 0xff, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x57, 0xff, 0x77, 0xff, 0xff, 0xd5, 0x55, 0x7f, 0x80, 
  0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xfd, 0x55, 0xff, 0xf5, 0x55, 0x7f, 0x55, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xfd, 0x55, 0xff, 0x77, 0xff, 0xff, 0xd5, 0x7d, 0x7f, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x5d, 0x5f, 0xf5, 0x55, 0x7f, 0xf5, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xff, 0xff, 0x55, 0x7f, 0x5f, 0xff, 0xff, 0xf5, 0x5d, 0xff, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xdf, 0x57, 0xf5, 0xff, 0xff, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xf5, 0x5d, 0xf7, 0x80, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xd5, 0x55, 0x5f, 0xfd, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0xfd, 0xe0, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0xfd, 0x57, 0xfd, 0x58, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xfd, 0x7f, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xfd, 0x55, 0xff, 0xd6, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xf5, 0x5f, 0xf5, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x7f, 0xdf, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7d, 0xff, 0xfd, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x7f, 0xff, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xfd, 0x55, 0xd5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x5f, 0xfe, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xfd, 0x55, 0x7f, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xfd, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0xf8, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xd7, 0x5d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0x5f, 0xff, 0xff, 0xf5, 0x55, 0x57, 0xe0, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0x55, 0xff, 0x57, 0xff, 0xff, 0xf5, 0x5f, 0xff, 0x80, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0x55, 0x55, 0x5f, 0xff, 0xfd, 0x7f, 0xff, 0x55, 0xff, 0xd7, 0xff, 0xff, 0xd5, 0x5f, 0xfc, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xfd, 0x55, 0x57, 0xff, 0xfd, 0xff, 0xff, 0x55, 0x7f, 0xdf, 0xff, 0xff, 0xd7, 0xfb, 0xa0, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0xff, 0xff, 0xff, 0xff, 0x7d, 0x5f, 0xdf, 0xff, 0xff, 0x57, 0xe0, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x55, 0x57, 0xdf, 0xff, 0xfd, 0x5f, 0xf0, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x55, 0xff, 0xff, 0xff, 0x55, 0x57, 0xdf, 0xff, 0xf5, 0x5f, 0xf0, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xdf, 0x55, 0x7f, 0xff, 0xff, 0x55, 0xff, 0xdf, 0xff, 0xd5, 0x7f, 0xe0, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5f, 0xff, 0xff, 0xf5, 0xf7, 0x55, 0x5f, 0xff, 0xff, 0xd7, 0xff, 0xdf, 0xfd, 0x55, 0x7f, 0xe0, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xff, 0x55, 0x57, 0xff, 0xff, 0xfd, 0x57, 0xdf, 0x55, 0x55, 0xff, 0xc0, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xd7, 0xd5, 0xf7, 0xd5, 0x55, 0xff, 0xff, 0xff, 0xff, 0x75, 0x55, 0x57, 0xff, 0x80, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xdf, 0xf7, 0xf5, 0x55, 0xff, 0xff, 0xfd, 0x5d, 0x75, 0x55, 0x5f, 0xfe, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0xd5, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0x5f, 0xfd, 0x55, 0x7f, 0xff, 0xf5, 0x57, 0xf5, 0x57, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x5f, 0xff, 0x55, 0x5d, 0xbb, 0xff, 0x55, 0x55, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x5f, 0x5f, 0xff, 0xd5, 0x5e, 0x02, 0x2a, 0xd5, 0x55, 0xf7, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5d, 0x5f, 0xff, 0xf5, 0x5f, 0x00, 0x00, 0x2b, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xfd, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xf5, 0x7f, 0xff, 0xf5, 0x5f, 0x80, 0x00, 0x00, 0x2a, 0xef, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xfd, 0x55, 0xff, 0x5f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xd5, 0xff, 0xff, 0xfd, 0x5f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0xd5, 0x55, 0x55, 0x55, 0x77, 0x55, 0x55, 0xd7, 0xff, 0xff, 0xff, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x55, 0xf5, 0x5d, 0x57, 0xfd, 0x5f, 0xd5, 0x55, 0x55, 0x7f, 0xff, 0xff, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf5, 0x75, 0x5f, 0xff, 0x7d, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xd5, 0xf7, 0xff, 0xff, 0x7f, 0xf5, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0x7f, 0xff, 0xff, 0xfd, 0x5f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x75, 0x55, 0x55, 0x55, 0x55, 0x57, 0x7f, 0xd5, 0x75, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0x7d, 0x55, 0x7f, 0xff, 0xff, 0xfd, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5d, 0xff, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xfd, 0xfd, 0x7f, 0xff, 0xff, 0xfd, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x55, 0x5f, 0xff, 0xff, 0xfd, 0xff, 0xf5, 0x7f, 0xff, 0xff, 0xfd, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0x55, 0x57, 0xff, 0xff, 0xf5, 0xfd, 0x75, 0x7f, 0xff, 0xff, 0xfd, 0x5f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xf5, 0x57, 0xf5, 0x7f, 0xff, 0xff, 0xf5, 0x5f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xfd, 0x55, 0xd5, 0x7f, 0x7d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xf5, 0x5f, 0xfd, 0x7f, 0xff, 0xff, 0xd5, 0x5f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xfd, 0x55, 0x55, 0x57, 0x55, 0x55, 0x5f, 0xff, 0xf5, 0x5f, 0xfd, 0xff, 0xff, 0xff, 0x55, 0x5f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfd, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x57, 0x55, 0x55, 0x57, 0xff, 0xfd, 0x57, 0xf5, 0xff, 0xff, 0xff, 0x55, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfd, 0x5f, 0xdf, 0xfd, 0x5f, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x57, 0xf7, 0xff, 0xff, 0xfd, 0x57, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xd5, 0x57, 0xff, 0xf5, 0x5f, 0xff, 0xd7, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xf5, 0xd7, 0xff, 0xff, 0xf5, 0x57, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xfd, 0x55, 0x7f, 0xff, 0xd5, 0x5f, 0xf5, 0x5f, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xfd, 0x5f, 0xff, 0xff, 0xd5, 0x57, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xd5, 0x77, 0xff, 0xdf, 0xd7, 0xf5, 0x5f, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0x55, 0x57, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf5, 0xd5, 0xff, 0xff, 0xf5, 0xf7, 0xd7, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xd7, 0xff, 0xfd, 0x55, 0x5f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0x55, 0x7f, 0xdf, 0x5d, 0x75, 0xf5, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0x55, 0x5f, 0xdf, 0x5d, 0x7f, 0xff, 0xf5, 0x55, 0x55, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf7, 0xd5, 0x7f, 0xd7, 0xff, 0xfd, 0xfd, 0xf5, 0x55, 0x55, 0x55, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf5, 0xf5, 0x5f, 0xfd, 0x7f, 0xfd, 0x7d, 0xfd, 0x55, 0x55, 0x57, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf7, 0xfd, 0xfd, 0x5f, 0xff, 0x7f, 0x55, 0x7d, 0xfd, 0x5f, 0x55, 0x55, 0xd5, 0x55, 0x55, 0x57, 0x7d, 0x57, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xd5, 0xff, 0xff, 0x5d, 0xf7, 0xff, 0x5d, 0x7d, 0xf5, 0xff, 0xf5, 0xf5, 0xff, 0x55, 0x55, 0x7f, 0x55, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf5, 0x7f, 0xff, 0xfd, 0x7d, 0xff, 0xff, 0xff, 0x75, 0xff, 0xff, 0xfd, 0xfd, 0x55, 0x7f, 0xf5, 0x57, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xf5, 0x7f, 0xff, 0xf7, 0xfd, 0x7d, 0xff, 0xff, 0xff, 0x57, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xff, 0x55, 0x7f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t us = {
  .header.cf = LV_IMG_CF_INDEXED_2BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 128,
  .header.h = 65,
  .data_size = 2096,
  .data = us_map,
};
