; FUN_005b3ee0  005b3ee0
005b3ee0  PUSH EBP
005b3ee1  MOV EBP,ESP
005b3ee3  SUB ESP,0x10
005b3ee6  MOV dword ptr [EBP + -0x10],ECX
005b3ee9  CMP dword ptr [EBP + 0xc],-0x1
005b3eed  JNZ 0x005b3efe
005b3eef  MOV EAX,dword ptr [EBP + 0x8]
005b3ef2  PUSH EAX
005b3ef3  MOV ECX,dword ptr [EBP + -0x10]
005b3ef6  CALL 0x005b4e50
005b3efb  MOV dword ptr [EBP + 0xc],EAX
005b3efe  PUSH 0x1
005b3f00  MOV ECX,dword ptr [EBP + 0xc]
005b3f03  PUSH ECX
005b3f04  MOV EDX,dword ptr [EBP + 0x8]
005b3f07  PUSH EDX
005b3f08  MOV ECX,dword ptr [EBP + -0x10]
005b3f0b  CALL 0x005b7140
005b3f10  MOV EAX,dword ptr [EBP + 0x8]
005b3f13  MOV ECX,dword ptr [EBP + -0x10]
005b3f16  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x580]
005b3f1d  MOV dword ptr [EBP + -0xc],EDX
005b3f20  MOV EAX,dword ptr [EBP + 0x8]
005b3f23  SHL EAX,0x5
005b3f26  MOV ECX,dword ptr [EBP + -0xc]
005b3f29  LEA EDX,[ECX + EAX*0x1 + 0x48]
005b3f2d  XOR EAX,EAX
005b3f2f  SHL EAX,0x3
005b3f32  MOV ECX,dword ptr [EDX + EAX*0x1]
005b3f35  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
005b3f39  MOV dword ptr [EBP + -0x8],ECX
005b3f3c  MOV dword ptr [EBP + -0x4],EDX
005b3f3f  PUSH 0x0
005b3f41  MOV EAX,dword ptr [EBP + 0xc]
005b3f44  PUSH EAX
005b3f45  LEA ECX,[EBP + -0x8]
005b3f48  PUSH ECX
005b3f49  MOV EDX,dword ptr [EBP + 0x8]
005b3f4c  MOV EAX,dword ptr [EBP + -0x10]
005b3f4f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005b3f56  MOV EDX,dword ptr [EBP + 0x8]
005b3f59  MOV EAX,dword ptr [EBP + -0x10]
005b3f5c  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x580]
005b3f63  MOV EAX,dword ptr [ECX]
005b3f65  MOV ECX,EDX
005b3f67  MOV EDX,dword ptr [EAX + 0xc4]
005b3f6d  CALL EDX
005b3f6f  MOV ESP,EBP
005b3f71  POP EBP
005b3f72  RET 0x8
