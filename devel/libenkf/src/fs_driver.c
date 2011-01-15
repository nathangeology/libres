#include <util.h>
#include <fs_types.h>
#include <fs_driver.h>

/* 
   The underlying base types (abstract - with no accompanying
   implementation); these two type ID's are not exported outside this
   file. They are not stored to disk, and only used in an attempt
   yo verify run-time casts.
*/
#define FS_DRIVER_ID           10
#define FS_DRIVER_INDEX_ID     30


/*****************************************************************/
/* This fs driver implemenatition is common to both dynamic and
   parameter info. */

void fs_driver_init(fs_driver_type * driver) {
  driver->type_id = FS_DRIVER_ID;
}

void fs_driver_assert_cast(const fs_driver_type * driver) {
  if (driver->type_id != FS_DRIVER_ID) 
    util_abort("%s: internal error - incorrect cast() - aborting \n" , __func__);
}


fs_driver_type * fs_driver_safe_cast(void * __driver) {
  fs_driver_type * driver = (fs_driver_type *) __driver;
  if (driver->type_id != FS_DRIVER_ID)
    util_abort("%s: runtime cast failed. \n",__func__);
  return driver;
}

/*****************************************************************/

void fs_driver_index_init(fs_driver_index_type * driver) {
  driver->type_id = FS_DRIVER_INDEX_ID;
}

void fs_driver_index_assert_cast(const fs_driver_index_type * driver) {
  if (driver->type_id != FS_DRIVER_INDEX_ID) 
    util_abort("%s: internal error - incorrect cast() - aborting \n" , __func__);
}


fs_driver_index_type * fs_driver_index_safe_cast(void * __driver) {
  fs_driver_index_type * driver = (fs_driver_index_type *) __driver;
  if (driver->type_id != FS_DRIVER_INDEX_ID)
    util_abort("%s: runtime cast failed. \n",__func__);
  return driver;
}


/*****************************************************************/


