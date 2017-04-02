# Introduction

This example is intended to
get [irony-mode](https://github.com/Sarcasm/irony-mode) working on a bazel
project.

The steps to reproduce are simple:

1. Install irony-mode (and its sub-packages: `company-irony` and `flycheck-irony`).

1. Install [bazel](https://bazel.build/versions/master/docs/install.html).

1. Compile this project so that it produces a `compile_commands.json` file, using these commands:

    ```shell
    $ bazel build --experimental_action_listener=//tools/actions:generate_compile_commands_listener //...
    $ python3 tools/actions/generate_compile_commands_json.py
    ```

1. Open `hello_irony/main.cc` and verify that irony mode successfully read
   `compile_commands.json` (via `M-x irony-cdb-menu`) but that the auto-complete
   features do not work.

Credit to [this gist](https://gist.github.com/bsilver8192/0115ee5d040bb601e3b7)
for how to generate a `compile_commands.json` file from `bazel`.
