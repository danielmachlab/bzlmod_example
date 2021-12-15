# Overview
This WIP repo is a demo of how bzlmod works. 

# Try it out
bzlmod works in Bazel >5.0, which there is not official release for yet. bzlmod is still in development, but we can use a pre-release of Bazel v5.0 to start using it.

1. Download bazelisk (`brew install bazelisk`) 
2. Run `bazel --version` to verify you are using the Bazel version specified in the [.bazeliskrc](.bazeliskrc) file
3. Run `bazel build src:hello-world` to build a simple C++ project the depends on `zlib` fetched by bzlmod

# Important links
[External Deps Google Doc](https://docs.google.com/document/d/1moQfNcEIttsk6vYanNKIy3ZuK53hQUFq1b1r0rmsYVg/edit#)

[bzlmod user guide](https://docs.bazel.build/versions/main/bzlmod.html)

[Bazel Central Registry](https://github.com/bazelbuild/bazel-central-registry)

# Note
I have a problem locally where I have to run `unset JAVA_HOME` before this demo works. I haven't dedicated enough time to finish figuring out what my problem is. 