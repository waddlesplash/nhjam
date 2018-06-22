`rhjam`
=================
`rhjam` is the Refactored Haiku Jam. [Haiku](https://haiku-os.org) has used Jam for its build
system since the very beginning, but as time went on, patches were needed for Jam to keep up
with the demands of Haiku for build systems. As the original Jam is unmaintained, Haiku's
Jam has essentially become a true fork; and this repository forms the next evolution of that.

## Roadmap
 * **The whole project is now compiled as C++ code.** This required changes to the generated
   parsers, among other fixes. Eventually this will allow for some major modernizations.
 * (WIP) **Platform configuration has been reworked.** Defining what platform you are
   compiling for is no longer mandatory; the headers will figure it out based on compiler
   defines.
 * (TODO) **Rework memory allocation.** Presently, Jam uses a lot of fixed-sized arrays
   as well as other inefficient memory storage paradigms; as a result, when running a
   full build of Haiku, Jam needs over 1GB of memory. This is obviously ridiculous.
 * (TODO) **Rework dependency checking.** Jam invocations should not take 30 seconds to
   compute dependences before they start.
 * More things...
