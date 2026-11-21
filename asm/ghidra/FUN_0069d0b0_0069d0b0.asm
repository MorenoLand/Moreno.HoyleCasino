; FUN_0069d0b0  0069d0b0
0069d0b0  SUB ESP,0x10
0069d0b3  FLD float ptr [ESP + 0x14]
0069d0b7  FMUL double ptr [0x006e57e8]
0069d0bd  FST double ptr [ESP]
0069d0c1  FSUB double ptr [0x006b2c38]
0069d0c7  FSTP double ptr [ESP + 0x8]
0069d0cb  FLD double ptr [ESP + 0x8]
0069d0cf  FISTP dword ptr [ESP + 0x14]
0069d0d3  MOV ECX,dword ptr [ESP + 0x14]
0069d0d7  FLD float ptr [ECX*0x4 + 0x78fd6c]
0069d0de  FSUB float ptr [ECX*0x4 + 0x78fd68]
0069d0e5  FILD dword ptr [ESP + 0x14]
0069d0e9  LEA EAX,[ECX*0x4 + 0x78fd68]
0069d0f0  FSUBR double ptr [ESP]
0069d0f4  FMULP
0069d0f6  FADD float ptr [EAX]
0069d0f8  ADD ESP,0x10
0069d0fb  RET
