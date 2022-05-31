from setuptools import setup, Extension
from pybind11.setup_helpers import Pybind11Extension, build_ext
from glob import glob

ext_modules = [
    Pybind11Extension(
        "example",
        sorted(glob("src/*.cpp"))
    )
]

setup(name="example",cmdclass={"build_ext": build_ext},ext_modules=ext_modules)