# Lomse: A free open source library for rendering music scores

[![Travis CI](https://travis-ci.org/lenmus/lomse.svg)](https://travis-ci.org/lenmus/lomse)
[![Appveyor](https://ci.appveyor.com/api/projects/status/m0sbs3tkwvnih9bl/branch/master?svg=true)](https://ci.appveyor.com/project/cecilios/lomse-aai68/branch/master)
[![Coverity Scan](https://img.shields.io/coverity/scan/16694.svg)](https://scan.coverity.com/projects/lenmus-lomse)
[![License: BSD2](https://img.shields.io/badge/License-BSD--2-blue.svg)](https://lenmus.github.io/lomse/page-library-license.html)


Lomse objective is provide software developers with a library to add capabilities to any program for rendering, editing and playing back music scores. It is written in C++ and it is free open source and platform independent. Lomse stands for "LenMus Open Music Score Edition Library".

Please be aware that Lomse is a work in progress, not having yet reached version 1.0. This means that the library is operative but with limitations. In particular, support for music scores is currently limited. You are welcome to join this non-commercial project and collaborate in its development. 


## License
Lomse is distributed under the BSD 2-clause license, a permissive open source license to allow Lomse to be used in any projects, whether open source or proprietary. This license is a GPL compatible license, so you can use Lomse in GPL licensed projects.


## Features

* Platform independent.
* Can be safely used in commercial closed source projects.
* MusicXML import.
* Renderization of full documents (paragraphs, tables, lists, scores, images, etc.).
* Support for score playback, by generating "midi events" in real time
* Support for visual tracking effects (i.e. moving cursor) during playback in sync. with midi events or with external player.
* Support for music scores edition.
* Music renderization is based on fonts compliant with the Standard Music Font Layout (SMuFL) specification.



## Contributing

If you would like to contribute or to join this project, you are welcome. The project has no commercial aim and all contributions are welcomed!

By contributing to the Lomse repository through pull-request, comment,
or otherwise, the contributor releases their content to the
license and copyright terms as described in the [LICENSE][].
Each contributor holds copyright over their contributions to Lomse.

Read [Contributing][] for information about how to contribute.



## Installation

~~~~
# download lomse repository
cd <projects-path>
git clone -b master --single-branch https://github.com/lenmus/lomse.git

# create folder for building and move there
mkdir build
cd build

#build lomse and testlib
cmake -G "Unix Makefiles" ../lomse
make

#run tests
./bin/testlib

#install library
sudo make install
~~~~

For more info, packages, or other options see [this](http://www.lenmus.org/en/lomse/install)



## More info
* [API Documentation](https://lenmus.github.io/lomse/)
* [Contributing](https://github.com/lenmus/lomse/blob/master/CONTRIBUTING.md)
* [Lomse homepage](http://www.lenmus.org/en/lomse/intro)
* [Lomse PPA](https://launchpad.net/~lomse/+archive/ubuntu/ppa/+packages)
* [Installation](http://www.lenmus.org/en/lomse/install)
* [Tutorials](http://www.lenmus.org/en/lomse/documents)


