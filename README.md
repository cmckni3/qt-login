[![project unmaintained](https://img.shields.io/badge/project-unmaintained-red.svg)](https://img.shields.io/badge/project-unmaintained-red.svg)

# QT Application created for CSC 3380 that uses a hardcoded username and password

## How to compile

I used Qt 4.7 to create my GUI login application. Qt 4.7 can be found at
qt.nokia.com as source installation or binary installation.

The username and password for my application are as follows:

Username: Admin
Password: 123456

To build and run my application

1. Install the Qt4 Framework and create appropriate environmental
variables to it.

2. Run qmake -project from this directory to generate a directory.pro
file

3. Run qmake -makefile to generate the makefile which should have the
paths to Qt in it. (Optionally a different make configuration can be
chosen such as macx-g++42 or linux-g++ using the -target option)

4. Run make

The program is now compiled and can be run. It uses the GUI style of the
operating system it is running on. I have include a compiled version of
the application for Mac Os X.
