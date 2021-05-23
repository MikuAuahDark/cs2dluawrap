Address Update Instruction
=====

In case of new CS2D update, relocate the addresses list. Normally these fields in
`address_linux/win.lua` should be updated:
* `checksumDedicated` - CRC32 checksum of the dedicated server executable (PHP/zlib/PNG CRC32).
* `checksumClient` - CRC32 checksum of the client.

After all the address has been updated, use this command to regenerate the address list:
```
export CS2DVERSION = 1.0.1.2
lua generate_func.lua cs2dluafunc.h address_win.lua > address/win_$CS2DVERSION.h
lua generate_func.lua cs2dluafunc.h address_linux.lua > address/linux_$CS2DVERSION.h
```

And change the CS2D version in `cs2dlua.c` then recompile (your modules).
