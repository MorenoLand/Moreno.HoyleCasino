; FUN_0069d100  0069d100
0069d100  SUB ESP,0x10
0069d103  FLD float ptr [ESP + 0x14]
0069d107  FMUL float ptr [0x006e57f4]
0069d10d  FSUB float ptr [0x006e57f0]
0069d113  FST double ptr [ESP]
0069d117  FSUB double ptr [0x006b2c38]
0069d11d  FSTP double ptr [ESP + 0x8]
0069d121  FLD double ptr [ESP + 0x8]
0069d125  FISTP dword ptr [ESP + 0x14]
0069d129  MOV ECX,dword ptr [ESP + 0x14]
0069d12d  FLD float ptr [ECX*0x4 + 0x78ff74]
0069d134  FSUB float ptr [ECX*0x4 + 0x78ff70]
0069d13b  FILD dword ptr [ESP + 0x14]
0069d13f  LEA EAX,[ECX*0x4 + 0x78ff70]
0069d146  FSUBR double ptr [ESP]
0069d14a  FMULP
0069d14c  FADD float ptr [EAX]
0069d14e  ADD ESP,0x10
0069d151  RET
