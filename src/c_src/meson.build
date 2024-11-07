core_lib = static_library('core',
    'core.c',
    include_directories: include_directories('.'),
    c_args: ['-O3', '-march=native'],
)

core_dep = declare_dependency(
    link_with: core_lib,
    include_directories: include_directories('.')
)

py.extension_module('_binding',
    '_binding.c',
    dependencies: [
        core_dep,
    ],
    install: true,
    install_dir: py.get_install_dir() / 'zumpy'
)
