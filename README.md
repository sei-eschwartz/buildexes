# buildexes

[![Build Status](https://dev.azure.com/seipharos/buildexes/_apis/build/status%2Fsei-eschwartz.buildexes?branchName=master)](https://dev.azure.com/seipharos/buildexes/_build/latest?definitionId=3&branchName=master)

This repository builds exes using several versions of the Microsoft Visual C++ compiler.

Note: Uses some packages from [choco-vc](https://github.com/edmcman/choco-vc)

# Features

VS versions:
- 2008 (express) (no x86-64)
- 2010 (express) (no x86-64)
- 2012 (express)
- 2013 (express)
- 2015
- 2017
- <strike>2019</strike> (not working)
- 2022

Architectures:
- x86
- x86-64

# Bugs

- 2019 mysteriously stopped working for some reason
- What is the difference of Release vs RelWithDeb?