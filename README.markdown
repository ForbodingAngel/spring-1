# Coil RTS game engine

    git clone https://github.com/beyond-all-reason/spring -b BAR105

Coil is a fork and continuation of [Open Source Real Time Strategy game engine](https://github.com/spring/spring) (formerly Spring/TASpring) version 105.0

Visit our [webpage](https://www.beyondallreason.info) for help, suggestions,
bugs, community forum and everything spring related.

### Installation

You can use a pre-compiled binary, usually, you want to use an installer or a package prepared for your OS:

* <https://github.com/beyond-all-reason/spring/releases>


### Compiling

Detailed instructions for how to compile Coil can be found [here](https://github.com/beyond-all-reason/spring/wiki/Building-and-developing-engine-without-docker) or [here](https://github.com/beyond-all-reason/spring/wiki/SpringRTS-Build-Environment-(Docker))

Don't use 'master' branch, it is quite old.

You need to check our tags:

	git tag
	spring_bar_{BAR105}105.0-430-g2727993
	spring_bar_{BAR105}105.1.1-1005-ga7ea1cc
	spring_bar_{BAR105}105.1.1-1011-g325620e
	spring_bar_{BAR105}105.1.1-1032-gf4d6126
	spring_bar_{BAR105}105.1.1-1039-g895d540
	spring_bar_{BAR105}105.1.1-1050-g5075cc0
	...

And also the BAR105 branch in this case:

	git checkout origin/BAR105 -b BAR105

The most simple set of commands will be:

	cmake .
	make

### License

Our Terms are documented in the [LICENSE](LICENSE).
