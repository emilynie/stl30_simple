#ifndef __STL_CONFIG_H
#define __STL_CONFIG_H

#define __STD _std
#define __STL_BEGIN_NAMESPACE namespace _std {
#define __STL_END_NAMESPACE }
#define __STD_RELOPS _std
#define __STL_BEGIN_RELOPS_NAMESPACE namespace _std {
#define __STL_END_RELOPS_NAMESPACE }

#define __STL_TRY try
#define __STL_CATCH_ALL catch(...)
#define __STL_RETHROW throw
#define __STL_NOTHROW throw()
#define __STL_UNWIND(action) catch(...) { action; throw; }

#endif /* __STL_CONFIG_H */
