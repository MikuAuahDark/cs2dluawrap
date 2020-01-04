Address Update Instruction
=====

In case of new CS2D update, relocate the addresses list. Normally these fields in
`address_linux/win.lua` should be updated:
* `match` - CS2D string version
* `findDedicated` - Location of the CS2D string version for the dedicated server. The CS2D
  version has this pattern: `<length> <version>` where `length` is the length of the version
  string and `<version>` is version string **in UTF-16LE** format. So this contains address
  of that pattern while the game is running. Example pattern for CS2D 1.0.1.1:
  `07 00 00 00 31 00 2e 00 30 00 2e 00 31 00 2e 00 31 00`
* `findClient` - Same as above, but for the game client.

After all the address has been updated, use this command to regenerate the address list:
```
export CS2DVERSION = 1.0.1.1
lua generate_func.lua cs2dluafunc.h address_win.lua > address/win_$CS2DVERSION.h
lua generate_func.lua cs2dluafunc.h address_linux.lua > address/linux_$CS2DVERSION.h
```

And change the CS2D version in `cs2dlua.c` then recompile your modules.
