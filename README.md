# Doxygen CI/CD pipeline for GitHub Pages

![GitHub Tag](https://img.shields.io/github/v/tag/markhj/doxygen-cicd-example?label=version)
![GitHub Actions Workflow Status](https://img.shields.io/github/actions/workflow/status/markhj/doxygen-cicd-example/doxygen.yml)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?label=license)

This example demonstrates how to:

- Build the Doxygen documentation in the cloud (GitHub Actions).
- (Optionally) to include a theme provided as a Git submodule.
- Deploying the compiled docs to GitHub Pages.

There will be no need to build the documentation locally -- everything happens in the cloud.
This means you can keep your repo clear of auto-generated HTML content.

## 🎁 Guide

### Workflow file

Start by copying the file ``.github/workflows/doxygen.yml`` to your own project.
Adjust the contents to match the specs of your project.

### GitHub token

Next, create a **fine-grained token** in GitHub. This is created under your _account_ settings:

> Settings > Developer settings > Personal access tokens > Fine-grained tokens

Create a new token. Optionally (but recommended) you can limit to the token to only work
on the repository you're working on.

Additionally, you must add **Contents permission**.

Copy the token, and head to the _repository_ settings.
Under **Secrets and variables**, you create a new **repository secret**.

If you follow the example file provided, you can name it ``RELEASE_TOKEN``.

## 📌 Doxygen configuration

Please note that some values are changed from default in the ``Doxyfile`` in this repo.

Maybe, maybe not, you'll want to adjust them for your project.

- ``OUTPUT_DIRECTORY`` has been set to ``build``
- ``INPUT`` has been set to ``src``
- ``RECURSIVE`` has been enabled
- ``GENERATE_LATEX`` has been disabled
- ``HTML_EXTRA_STYLESHEET`` has been set to ``doxygen-awesome-css`` requirements
- ``GENERATE_TREEVIEW`` has been enabled (required by theme)

## 🍭 Theme

Optionally, you can include a theme as a Git submodule.

### In new repo

If you're working on a fresh repo, you can use:

````bash
git submodule add <repository url> <path/to/submodule>
````

### In cloned repo

If you've cloned our repository, remember to run

````bash
git submodule init
````

### Updating ``Doxyfile``

Remember to update the ``Doxyfile`` according to the instructions provided
by the theme.

You will usually have to update ``HTML_EXTRA_STYLESHEET``, but some themes
may have additional options or requirements.

## 🚀 Where is my documentation?

### Locally

When you build locally, using:

````bash
doxygen
````

The contents will be placed in ``build/html`` directory.
Open ``index.html`` to see how the documentation looks.

### GitHub Pages

When successfully built and deployed to GitHub pages, the documentation
will be accessible from:

````bash
https://<username>.github.io/<repo>
````

## Example

Example documentation is hosted at:
https://markhj.github.io/doxygen-cicd-example/
