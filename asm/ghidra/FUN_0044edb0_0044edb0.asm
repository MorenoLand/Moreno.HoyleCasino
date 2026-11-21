; FUN_0044edb0  0044edb0
0044edb0  PUSH EBP
0044edb1  MOV EBP,ESP
0044edb3  SUB ESP,0x5c
0044edb6  PUSH ESI
0044edb7  MOV dword ptr [EBP + -0x34],ECX
0044edba  MOV EAX,dword ptr [EBP + 0x8]
0044edbd  PUSH EAX
0044edbe  CALL 0x005dcb00
0044edc3  ADD ESP,0x4
0044edc6  MOV ECX,EAX
0044edc8  CALL 0x005d5a50
0044edcd  MOV dword ptr [EBP + -0x10],EAX
0044edd0  MOV ECX,dword ptr [0x00790734]
0044edd6  MOV EDX,dword ptr [ECX]
0044edd8  MOV ECX,dword ptr [0x00790734]
0044edde  MOV EAX,dword ptr [EDX + 0x2b0]
0044ede4  CALL EAX
0044ede6  MOV dword ptr [EBP + -0x1c],EAX
0044ede9  MOV ECX,dword ptr [0x00790734]
0044edef  MOV EDX,dword ptr [ECX]
0044edf1  MOV ECX,dword ptr [0x00790734]
0044edf7  MOV EAX,dword ptr [EDX + 0x2b4]
0044edfd  CALL EAX
0044edff  MOV dword ptr [EBP + -0x8],EAX
0044ee02  MOV ECX,dword ptr [0x00790734]
0044ee08  CALL 0x005da8a0
0044ee0d  MOV dword ptr [EBP + -0x4],EAX
0044ee10  MOV ECX,dword ptr [0x00790734]
0044ee16  CALL 0x005dac90
0044ee1b  MOV dword ptr [EBP + -0x20],EAX
0044ee1e  MOV ECX,dword ptr [0x00790734]
0044ee24  CALL 0x005da8c0
0044ee29  MOV dword ptr [EBP + -0x14],EAX
0044ee2c  LEA ECX,[EBP + -0x30]
0044ee2f  PUSH ECX
0044ee30  MOV ECX,dword ptr [0x00790734]
0044ee36  CALL 0x005daa20
0044ee3b  MOV EDX,dword ptr [EAX]
0044ee3d  MOV dword ptr [EBP + -0x18],EDX
0044ee40  MOV EAX,dword ptr [EBP + 0x8]
0044ee43  PUSH EAX
0044ee44  CALL 0x005dcb00
0044ee49  ADD ESP,0x4
0044ee4c  MOV ECX,dword ptr [EAX + 0x4a8]
0044ee52  MOV dword ptr [EBP + -0x24],ECX
0044ee55  MOV dword ptr [EBP + -0x28],0x0
0044ee5c  MOV dword ptr [EBP + -0xc],0x0
0044ee63  MOV EDX,dword ptr [EBP + -0x10]
0044ee66  CMP EDX,dword ptr [EBP + -0x8]
0044ee69  JL 0x0044ee73
0044ee6b  MOV EAX,dword ptr [EBP + -0x8]
0044ee6e  MOV dword ptr [EBP + -0xc],EAX
0044ee71  JMP 0x0044ee79
0044ee73  MOV ECX,dword ptr [EBP + -0x10]
0044ee76  MOV dword ptr [EBP + -0xc],ECX
0044ee79  MOV EDX,dword ptr [EBP + -0x4]
0044ee7c  SUB EDX,dword ptr [EBP + -0x14]
0044ee7f  CMP EDX,0x4
0044ee82  JGE 0x0044ef36
0044ee88  MOV EAX,dword ptr [EBP + -0x4]
0044ee8b  CMP EAX,dword ptr [EBP + -0x14]
0044ee8e  JNZ 0x0044eeb1
0044ee90  MOV ECX,dword ptr [EBP + -0x10]
0044ee93  CMP ECX,dword ptr [EBP + -0x18]
0044ee96  JGE 0x0044eeaf
0044ee98  MOV EDX,dword ptr [EBP + -0x18]
0044ee9b  SUB EDX,dword ptr [EBP + -0x10]
0044ee9e  CMP EDX,dword ptr [EBP + -0xc]
0044eea1  JG 0x0044eeaf
0044eea3  MOV EAX,dword ptr [EBP + -0x18]
0044eea6  SUB EAX,dword ptr [EBP + -0x10]
0044eea9  ADD EAX,dword ptr [EBP + -0x1c]
0044eeac  MOV dword ptr [EBP + -0x28],EAX
0044eeaf  JMP 0x0044ef0e
0044eeb1  MOV ECX,dword ptr [EBP + -0x10]
0044eeb4  CMP ECX,dword ptr [EBP + -0x18]
0044eeb7  JGE 0x0044ef0e
0044eeb9  MOV EDX,dword ptr [EBP + -0x18]
0044eebc  SUB EDX,dword ptr [EBP + -0x10]
0044eebf  CMP EDX,dword ptr [EBP + -0xc]
0044eec2  JG 0x0044eee3
0044eec4  MOV ESI,dword ptr [EBP + -0x18]
0044eec7  SUB ESI,dword ptr [EBP + -0x10]
0044eeca  PUSH 0x5
0044eecc  CALL 0x0062fbf0
0044eed1  ADD ESP,0x4
0044eed4  MOV ECX,EAX
0044eed6  ADD ECX,0x1
0044eed9  MOV EAX,ESI
0044eedb  CDQ
0044eedc  IDIV ECX
0044eede  MOV dword ptr [EBP + -0x28],EAX
0044eee1  JMP 0x0044ef0e
0044eee3  MOV EDX,dword ptr [EBP + 0x8]
0044eee6  PUSH EDX
0044eee7  MOV ECX,dword ptr [EBP + -0x34]
0044eeea  CALL 0x0044ed20
0044eeef  MOVZX EAX,AL
0044eef2  TEST EAX,EAX
0044eef4  JZ 0x0044ef0e
0044eef6  PUSH 0x3
0044eef8  CALL 0x0062fbf0
0044eefd  ADD ESP,0x4
0044ef00  MOV ECX,EAX
0044ef02  ADD ECX,0x1
0044ef05  MOV EAX,dword ptr [EBP + -0xc]
0044ef08  CDQ
0044ef09  IDIV ECX
0044ef0b  MOV dword ptr [EBP + -0x28],EAX
0044ef0e  MOV EAX,dword ptr [EBP + -0x28]
0044ef11  CDQ
0044ef12  MOV ECX,0x5
0044ef17  IDIV ECX
0044ef19  TEST EDX,EDX
0044ef1b  JZ 0x0044ef28
0044ef1d  MOV EDX,dword ptr [EBP + -0x28]
0044ef20  ADD EDX,0x1
0044ef23  MOV dword ptr [EBP + -0x28],EDX
0044ef26  JMP 0x0044ef0e
0044ef28  CMP dword ptr [EBP + -0x28],0x0
0044ef2c  JZ 0x0044ef36
0044ef2e  MOV EAX,dword ptr [EBP + -0x28]
0044ef31  JMP 0x0044efc3
0044ef36  PUSH 0x5
0044ef38  CALL 0x0062fbf0
0044ef3d  ADD ESP,0x4
0044ef40  ADD EAX,0x1
0044ef43  IMUL EAX,dword ptr [EBP + -0x1c]
0044ef47  MOV dword ptr [EBP + -0x38],EAX
0044ef4a  FILD dword ptr [EBP + -0x38]
0044ef4d  MOV EAX,dword ptr [EBP + 0x8]
0044ef50  PUSH EAX
0044ef51  MOV ECX,dword ptr [EBP + -0x34]
0044ef54  FSTP double ptr [EBP + -0x40]
0044ef57  CALL 0x0044e970
0044ef5c  MOV ESI,EAX
0044ef5e  PUSH 0x5
0044ef60  CALL 0x0062fbf0
0044ef65  ADD ESP,0x4
0044ef68  MOV ECX,EAX
0044ef6a  ADD ECX,0x1
0044ef6d  MOV EAX,ESI
0044ef6f  CDQ
0044ef70  IDIV ECX
0044ef72  MOV dword ptr [EBP + -0x44],EAX
0044ef75  FILD dword ptr [EBP + -0x44]
0044ef78  FMUL double ptr [EBP + -0x40]
0044ef7b  MOV EDX,dword ptr [EBP + -0x24]
0044ef7e  IMUL EDX,dword ptr [EBP + -0x1c]
0044ef82  MOV dword ptr [EBP + -0x48],EDX
0044ef85  FILD dword ptr [EBP + -0x48]
0044ef88  MOV EAX,dword ptr [EBP + 0x8]
0044ef8b  PUSH EAX
0044ef8c  MOV ECX,dword ptr [EBP + -0x34]
0044ef8f  FXCH
0044ef91  FSTP double ptr [EBP + -0x50]
0044ef94  FSTP double ptr [EBP + -0x58]
0044ef97  CALL 0x0044e970
0044ef9c  MOV ESI,EAX
0044ef9e  PUSH 0x5
0044efa0  CALL 0x0062fbf0
0044efa5  ADD ESP,0x4
0044efa8  MOV ECX,EAX
0044efaa  ADD ECX,0x1
0044efad  MOV EAX,ESI
0044efaf  CDQ
0044efb0  IDIV ECX
0044efb2  MOV dword ptr [EBP + -0x5c],EAX
0044efb5  FILD dword ptr [EBP + -0x5c]
0044efb8  FMUL double ptr [EBP + -0x58]
0044efbb  FADD double ptr [EBP + -0x50]
0044efbe  CALL 0x00686cc0
0044efc3  POP ESI
0044efc4  MOV ESP,EBP
0044efc6  POP EBP
0044efc7  RET 0x4
