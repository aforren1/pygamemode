from setuptools import setup, Extension
import os.path

setup_directory = os.path.abspath(os.path.dirname(__file__))

with open(os.path.join(setup_directory, 'README.md')) as readme_file:
    long_description = readme_file.read()

setup(
    name='gamemode',
    version='0.0.1',
    description='A wrapper for the gamemode client API.',
    long_description=long_description,
    url='https://github.com/aforren1/pygamemode',
    author='Alexander Forrence',
    author_email='aforren1@jhmi.edu',
    license='BSD 3',
    classifiers=[
        'Development Status :: 3 - Alpha',
        'Operating System :: POSIX :: Linux',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: BSD License',
        'Programming Language :: Python :: 3',
        'Topic :: Multimedia :: Graphics',
        'Topic :: Scientific/Engineering :: Visualization',
    ],
    ext_modules = [Extension('gamemode', ['gamemode.c'],
                   extra_compile_args=['-std=c99'])]
)