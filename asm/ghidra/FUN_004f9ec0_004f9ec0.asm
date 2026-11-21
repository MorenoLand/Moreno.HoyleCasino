; FUN_004f9ec0  004f9ec0
004f9ec0  PUSH EBP
004f9ec1  MOV EBP,ESP
004f9ec3  SUB ESP,0x5c
004f9ec6  MOV dword ptr [EBP + -0x54],ECX
004f9ec9  MOV ECX,dword ptr [EBP + -0x54]
004f9ecc  CALL 0x005da830
004f9ed1  MOVZX EAX,AL
004f9ed4  TEST EAX,EAX
004f9ed6  JZ 0x004f9f2e
004f9ed8  MOV ECX,dword ptr [EBP + 0x8]
004f9edb  PUSH ECX
004f9edc  MOV ECX,dword ptr [EBP + -0x54]
004f9edf  CALL 0x005d9670
004f9ee4  LEA EDX,[EBP + -0x10]
004f9ee7  PUSH EDX
004f9ee8  MOV ECX,dword ptr [EBP + 0x8]
004f9eeb  CALL 0x005d5a90
004f9ef0  MOV ECX,dword ptr [EAX]
004f9ef2  MOV EDX,dword ptr [EAX + 0x4]
004f9ef5  MOV EAX,dword ptr [EBP + 0x8]
004f9ef8  MOV dword ptr [EAX + 0x4e4],ECX
004f9efe  MOV dword ptr [EAX + 0x4e8],EDX
004f9f04  LEA ECX,[EBP + -0x18]
004f9f07  PUSH ECX
004f9f08  MOV ECX,dword ptr [EBP + 0x8]
004f9f0b  CALL 0x005d5a90
004f9f10  MOV EDX,dword ptr [EAX]
004f9f12  MOV EAX,dword ptr [EAX + 0x4]
004f9f15  MOV ECX,dword ptr [EBP + 0x8]
004f9f18  MOV dword ptr [ECX + 0x4ec],EDX
004f9f1e  MOV dword ptr [ECX + 0x4f0],EAX
004f9f24  JMP 0x004fa096
004f9f2e  MOV ECX,dword ptr [EBP + 0x8]
004f9f31  CALL 0x0063aac0
004f9f36  MOV EDX,dword ptr [EAX]
004f9f38  MOV dword ptr [EBP + -0x4c],EDX
004f9f3b  CMP dword ptr [EBP + -0x4c],0x2
004f9f3f  JZ 0x004f9f5d
004f9f41  MOV ECX,dword ptr [EBP + 0x8]
004f9f44  CALL 0x0063aac0
004f9f49  MOV EAX,dword ptr [EAX]
004f9f4b  MOV dword ptr [EBP + -0x50],EAX
004f9f4e  CMP dword ptr [EBP + -0x50],0x3
004f9f52  JZ 0x004f9f5d
004f9f54  MOV dword ptr [EBP + -0x58],0x0
004f9f5b  JMP 0x004f9f64
004f9f5d  MOV dword ptr [EBP + -0x58],0x1
004f9f64  MOVZX ECX,byte ptr [EBP + -0x58]
004f9f68  TEST ECX,ECX
004f9f6a  JNZ 0x004fa056
004f9f70  LEA EDX,[EBP + -0x8]
004f9f73  PUSH EDX
004f9f74  LEA EAX,[EBP + -0x4]
004f9f77  PUSH EAX
004f9f78  MOV ECX,dword ptr [EBP + -0x54]
004f9f7b  MOV EDX,dword ptr [ECX]
004f9f7d  MOV ECX,dword ptr [EBP + -0x54]
004f9f80  MOV EAX,dword ptr [EDX + 0x26c]
004f9f86  CALL EAX
004f9f88  MOV ECX,dword ptr [EBP + -0x4]
004f9f8b  MOV dword ptr [EBP + -0x5c],ECX
004f9f8e  CMP dword ptr [EBP + -0x5c],0xfa
004f9f95  JG 0x004f9fae
004f9f97  CMP dword ptr [EBP + -0x5c],0xfa
004f9f9e  JZ 0x004fa00a
004f9fa0  CMP dword ptr [EBP + -0x5c],0x5
004f9fa4  JZ 0x004f9fbc
004f9fa6  CMP dword ptr [EBP + -0x5c],0x19
004f9faa  JZ 0x004f9fe3
004f9fac  JMP 0x004f9fb7
004f9fae  CMP dword ptr [EBP + -0x5c],0x3e8
004f9fb5  JZ 0x004fa031
004f9fb7  JMP 0x004fa056
004f9fbc  PUSH 0x0
004f9fbe  PUSH 0x3e8
004f9fc3  CALL 0x0064c8a0
004f9fc8  ADD ESP,0x8
004f9fcb  MOV dword ptr [EBP + -0x20],EAX
004f9fce  MOV dword ptr [EBP + -0x1c],EDX
004f9fd1  MOV EDX,dword ptr [EBP + -0x1c]
004f9fd4  PUSH EDX
004f9fd5  MOV EAX,dword ptr [EBP + -0x20]
004f9fd8  PUSH EAX
004f9fd9  MOV ECX,dword ptr [EBP + 0x8]
004f9fdc  CALL 0x005d5af0
004f9fe1  JMP 0x004fa056
004f9fe3  PUSH 0x0
004f9fe5  PUSH 0x1388
004f9fea  CALL 0x0064c8a0
004f9fef  ADD ESP,0x8
004f9ff2  MOV dword ptr [EBP + -0x28],EAX
004f9ff5  MOV dword ptr [EBP + -0x24],EDX
004f9ff8  MOV ECX,dword ptr [EBP + -0x24]
004f9ffb  PUSH ECX
004f9ffc  MOV EDX,dword ptr [EBP + -0x28]
004f9fff  PUSH EDX
004fa000  MOV ECX,dword ptr [EBP + 0x8]
004fa003  CALL 0x005d5af0
004fa008  JMP 0x004fa056
004fa00a  PUSH 0x0
004fa00c  PUSH 0x61a8
004fa011  CALL 0x0064c8a0
004fa016  ADD ESP,0x8
004fa019  MOV dword ptr [EBP + -0x30],EAX
004fa01c  MOV dword ptr [EBP + -0x2c],EDX
004fa01f  MOV EAX,dword ptr [EBP + -0x2c]
004fa022  PUSH EAX
004fa023  MOV ECX,dword ptr [EBP + -0x30]
004fa026  PUSH ECX
004fa027  MOV ECX,dword ptr [EBP + 0x8]
004fa02a  CALL 0x005d5af0
004fa02f  JMP 0x004fa056
004fa031  PUSH 0x0
004fa033  PUSH 0x186a0
004fa038  CALL 0x0064c8a0
004fa03d  ADD ESP,0x8
004fa040  MOV dword ptr [EBP + -0x38],EAX
004fa043  MOV dword ptr [EBP + -0x34],EDX
004fa046  MOV EDX,dword ptr [EBP + -0x34]
004fa049  PUSH EDX
004fa04a  MOV EAX,dword ptr [EBP + -0x38]
004fa04d  PUSH EAX
004fa04e  MOV ECX,dword ptr [EBP + 0x8]
004fa051  CALL 0x005d5af0
004fa056  LEA ECX,[EBP + -0x40]
004fa059  PUSH ECX
004fa05a  MOV ECX,dword ptr [EBP + 0x8]
004fa05d  CALL 0x005d5a90
004fa062  MOV EDX,dword ptr [EAX]
004fa064  MOV EAX,dword ptr [EAX + 0x4]
004fa067  MOV ECX,dword ptr [EBP + 0x8]
004fa06a  MOV dword ptr [ECX + 0x4e4],EDX
004fa070  MOV dword ptr [ECX + 0x4e8],EAX
004fa076  LEA EDX,[EBP + -0x48]
004fa079  PUSH EDX
004fa07a  MOV ECX,dword ptr [EBP + 0x8]
004fa07d  CALL 0x005d5a90
004fa082  MOV ECX,dword ptr [EAX]
004fa084  MOV EDX,dword ptr [EAX + 0x4]
004fa087  MOV EAX,dword ptr [EBP + 0x8]
004fa08a  MOV dword ptr [EAX + 0x4ec],ECX
004fa090  MOV dword ptr [EAX + 0x4f0],EDX
004fa096  MOV ESP,EBP
004fa098  POP EBP
004fa099  RET 0x4
