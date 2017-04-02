cc_library(
    name = "hello_irony_lib",
    srcs = ["my_class.cc"],
    hdrs = ["my_class.h"],
)

cc_binary(
    name = "hello_irony",
    srcs = ["main.cc"],
    deps = [":hello_irony_lib"],
)
