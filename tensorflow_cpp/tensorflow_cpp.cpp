// tensorflow_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS

#ifndef NOMINMAX
# define NOMINMAX
#endif

#include <cstdio>
#include <functional>
#include <string>
#include <vector>

#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/graph.pb.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/graph/default_device.h"
#include "tensorflow/core/graph/graph_def_builder.h"
#include "tensorflow/core/lib/core/threadpool.h"
#include "tensorflow/core/lib/strings/str_util.h"
#include "tensorflow/core/lib/strings/stringprintf.h"
#include "tensorflow/core/platform/init_main.h"
#include "tensorflow/core/platform/logging.h"
#include "tensorflow/core/platform/types.h"
#include "tensorflow/core/public/session.h"

#include "tensorflow/c/c_api.h"

#include "tensorflow/core/public/version.h"

int main()
{
    std::cout << "Tensorflow Barbell Hello World! TF version: " << TF_Version() << ", compiled with: " << tf_compiler_version() << "(current: " << _MSC_VER << ")" <<  std::endl;

    return 0;
}

