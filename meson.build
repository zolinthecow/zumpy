project('zumpy', 'c',
    version : '0.0.1.alpha1',
    default_options : [
        'buildtype=release',
        'c_std=c11',
        'cpp_std=c++14',
        'warning_level=3',
    ]
)

py = import('python').find_installation(pure: false)
py.install_sources(
    ['src/zumpy/__init__.py'],
    pure: false,
    subdir: 'zumpy'
)

# Add subdirectories
subdir('src/c_src')
subdir('src/zumpy')
