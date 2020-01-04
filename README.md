CS2D Lua Wrapper
=====

Lua 5.1.4 wrapper that calls into unexported CS2D's Lua 5.1.4 functions. Allows Lua modules
to be compatible with CS2D without strange (memory) errors!

This can benefit server scripters to use external Lua C modules.

**This thing only runs server-side!!!**

http://www.unrealsoftware.de/forum_posts.php?post=426672

Usage
-----

Compile your Lua modules as usual, but instead of linking to Lua 5.1.4 DLL/shared object, add 1
more file `cs2dlua.c` to your compilation unit then you're ready. Put the resulting module to your
CS2D server root directory.
