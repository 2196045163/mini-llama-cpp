// Copyright (c) 2026 yus3nable
// SPDX-License-Identifier: MIT

#ifndef TESTS_GGUF_TEST_UTILS_H_
#define TESTS_GGUF_TEST_UTILS_H_

#include <cstring>
#include <fstream>
#include <string>

namespace mini_llama::test {

inline bool HasGgufMagic(const std::string& path) {
  std::ifstream input(path, std::ios::binary);
  char magic[4];
  return input.read(magic, sizeof(magic)) &&
         std::memcmp(magic, "GGUF", sizeof(magic)) == 0;
}

}  // namespace mini_llama::test

#endif  // TESTS_GGUF_TEST_UTILS_H_
