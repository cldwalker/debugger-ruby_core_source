#define RUBY_BASE_NAME "ruby"
#define RUBY_VERSION_NAME RUBY_BASE_NAME"-"RUBY_LIB_VERSION
#define RUBY_LIB_VERSION_STYLE 3	/* full */
#define RUBY_LIB_PREFIX RUBY_EXEC_PREFIX"/lib/"RUBY_BASE_NAME
#define RUBY_ARCH_PREFIX_FOR(arch) RUBY_EXEC_PREFIX"/lib/"arch"/"RUBY_BASE_NAME
#define RUBY_SITEARCH_PREFIX_FOR(arch) RUBY_EXEC_PREFIX"/lib/"arch"/"RUBY_BASE_NAME
#define RUBY_ARCH_LIB_FOR(arch) RUBY_ARCH_PREFIX_FOR(arch)"/"RUBY_LIB_VERSION
#define RUBY_SITE_LIB "/usr/local/lib/site_ruby"
#define RUBY_SITE_ARCH_LIB_FOR(arch) "/usr/local/lib/x86_64-linux-gnu/site_ruby"
#define RUBY_VENDOR_LIB RUBY_LIB_PREFIX"/vendor_ruby"
#define RUBY_VENDOR_ARCH_LIB_FOR(arch) RUBY_SITEARCH_PREFIX_FOR(arch)"/vendor_ruby/"RUBY_LIB_VERSION
#define RUBY_PLATFORM "x86_64-linux-gnu"
