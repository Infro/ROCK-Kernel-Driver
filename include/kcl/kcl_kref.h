#ifndef AMDKCL_KREF_H
#define AMDKCL_KREF_H

#include <linux/version.h>
#include <linux/kref.h>

#if DRM_VERSION_CODE < DRM_VERSION(4, 11, 0)
static inline unsigned int kref_read(const struct kref *kref)
{
	return atomic_read(&kref->refcount);
}
#endif

#endif /* AMDKCL_KREF_H */
