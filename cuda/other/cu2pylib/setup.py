from setuptools import setup, Extension

pycudemo_core = Extension('pycudemo.core',
	sources=['pycudemo/core.cpp'],
	include_dirs = ['src'],
	libraries=['cudalib'])

setup(name = 'pycudemo',
	author = 'Yui Chun Leung', 
	author_email='lyc010197@gmail.com',
	version = '0.0.0',
	description="An example project showing how to build a pip-installable Python package that invokes custom CUDA/C++ code.",
	ext_modules=[pycudemo_core],
	packages=['pycudemo'])