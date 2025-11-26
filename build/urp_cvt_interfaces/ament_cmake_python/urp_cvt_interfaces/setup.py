from setuptools import find_packages
from setuptools import setup

setup(
    name='urp_cvt_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('urp_cvt_interfaces', 'urp_cvt_interfaces.*')),
)
