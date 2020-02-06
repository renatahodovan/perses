#!/usr/bin/env python

import subprocess


class Target:

    def __init__(self, target_name, output_file, golden_file):
        self.target_name = target_name
        self.output_file = output_file
        self.golden_file = golden_file


targets = [
    Target(
        target_name="//benchmark/toys/delta_1:reduction_golden_test_reduction",
        output_file="bazel-bin/benchmark/toys/delta_1/result_reduction_golden_test_perses_node_priority_with_dfs_delta_t.c",
        golden_file="benchmark/toys/delta_1/golden_reduced_t.c"),
    Target(
        target_name="//benchmark/toys/delta_1:reduction_golden_test_reduction",
        output_file="bazel-bin/benchmark/toys/delta_1/reduction_progress.txt",
        golden_file="benchmark/toys/delta_1/golden_reduction_progress.txt"),
    Target(
        target_name="//benchmark/toys/parentheses:reduction_golden_test_reduction",
        output_file="bazel-bin/benchmark/toys/parentheses/result_reduction_golden_test_perses_node_priority_with_dfs_delta_t.c",
        golden_file="benchmark/toys/parentheses/golden_reduced_t.c"),
    Target(
        target_name="//benchmark/toys/parentheses:reduction_golden_test_reduction",
        output_file="bazel-bin/benchmark/toys/parentheses/reduction_progress.txt",
        golden_file="benchmark/toys/parentheses/golden_reduction_progress.txt"),
    Target(
        target_name="//benchmark/gcc-71626:reduction_golden_test_progress_test",
        output_file="bazel-bin/benchmark/gcc-71626/reduction_progress.txt",
        golden_file="benchmark/gcc-71626/golden_reduction_progress.txt"),
    Target(
        target_name="//benchmark/gcc-71626:reduction_golden_test",
        output_file="bazel-bin/benchmark/gcc-71626/result_reduction_golden_test_perses_node_priority_with_dfs_delta_small.c",
        golden_file="benchmark/gcc-71626/golden_perses.c"),
    Target(
        target_name="//benchmark/clang-27747:reduction_golden_test",
        output_file="bazel-bin/benchmark/clang-27747/result_reduction_golden_test_perses_node_priority_with_dfs_delta_small.c",
        golden_file="benchmark/clang-27747/golden_perses.c"),
    Target(
        target_name="//benchmark/clang-22382:reduction_golden_test",
        output_file="bazel-bin/benchmark/clang-22382/result_reduction_golden_test_perses_node_priority_with_dfs_delta_small.c",
        golden_file="benchmark/clang-22382/golden_perses.c"),
]

for target in targets:
    subprocess.check_call(["bazel", "build", target.target_name])
    content = None
    with open(target.output_file, "r") as f:
        content = f.read()
    with open(target.golden_file, "w") as f:
        f.write(content)