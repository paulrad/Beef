#define TCMALLOC_NAMESPACE tcmalloc_raw
#define TCMALLOC_CLEAR_SPAN_END

#include "central_freelist.cc"
#include "internal_logging.cc"
//#include "malloc_extension.cc"
#include "page_heap.cc"
#include "sampler.cc"
#include "span.cc"
#include "stack_trace_table.cc"
#include "static_vars.cc"
#include "tc_common.cc"
#include "thread_cache.cc"