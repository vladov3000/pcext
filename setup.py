from distutils.core import setup, Extension


setup(name="natural",
      version="1.0.0",
      description="testing embedding c in python",
      author="Noah Darwin",
      author_email="ndarwin@uw.edu",
      ext_modules=[Extension("natural", sources=["naturalmodule.c"])])
