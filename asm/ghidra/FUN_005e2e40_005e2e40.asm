; FUN_005e2e40  005e2e40
005e2e40  PUSH EBP
005e2e41  MOV EBP,ESP
005e2e43  SUB ESP,0xc
005e2e46  PUSH ESI
005e2e47  PUSH EDI
005e2e48  MOV dword ptr [EBP + -0xc],ECX
005e2e4b  MOV EAX,dword ptr [EBP + 0x8]
005e2e4e  PUSH EAX
005e2e4f  MOV ECX,dword ptr [EBP + -0xc]
005e2e52  CALL 0x006369b0
005e2e57  PUSH EAX
005e2e58  CALL 0x005dcb00
005e2e5d  ADD ESP,0x4
005e2e60  MOV ECX,EAX
005e2e62  CALL 0x005d52e0
005e2e67  MOV dword ptr [EBP + -0x8],EAX
005e2e6a  CMP dword ptr [EBP + -0x8],0x0
005e2e6e  JNZ 0x005e2e87
005e2e70  PUSH 0xa6c
005e2e75  PUSH 0x6d4b54
005e2e7a  PUSH 0x6d507c
005e2e7f  CALL 0x005e9f20
005e2e84  ADD ESP,0xc
005e2e87  MOV EDX,dword ptr [EBP + 0xc]
005e2e8a  MOV dword ptr [EBP + -0x4],EDX
005e2e8d  JMP 0x005e2e98
005e2e8f  MOV EAX,dword ptr [EBP + -0x4]
005e2e92  ADD EAX,0x1
005e2e95  MOV dword ptr [EBP + -0x4],EAX
005e2e98  CMP dword ptr [EBP + -0x4],0x63
005e2e9c  JGE 0x005e2ec4
005e2e9e  MOV ECX,dword ptr [EBP + -0x4]
005e2ea1  ADD ECX,0x1
005e2ea4  IMUL ECX,ECX,0x24
005e2ea7  MOV EDX,dword ptr [EBP + -0x8]
005e2eaa  LEA ESI,[EDX + ECX*0x1 + 0x60]
005e2eae  MOV EAX,dword ptr [EBP + -0x4]
005e2eb1  IMUL EAX,EAX,0x24
005e2eb4  MOV ECX,dword ptr [EBP + -0x8]
005e2eb7  LEA EDI,[ECX + EAX*0x1 + 0x60]
005e2ebb  MOV ECX,0x9
005e2ec0  MOVSD.REP ES:EDI,ESI
005e2ec2  JMP 0x005e2e8f
005e2ec4  MOV EDX,dword ptr [EBP + -0x8]
005e2ec7  MOV byte ptr [EDX + 0xe4c],0xff
005e2ece  MOV EAX,dword ptr [EBP + -0x8]
005e2ed1  MOV byte ptr [EAX + 0xe4d],0x1
005e2ed8  MOV ECX,dword ptr [EBP + -0x8]
005e2edb  MOV byte ptr [ECX + 0xe4e],0x1
005e2ee2  MOV EDX,dword ptr [EBP + -0x8]
005e2ee5  MOV byte ptr [EDX + 0xe4f],0x0
005e2eec  MOV EAX,dword ptr [EBP + -0x8]
005e2eef  MOV byte ptr [EAX + 0xe50],0x0
005e2ef6  MOV ECX,dword ptr [EBP + -0x8]
005e2ef9  MOV dword ptr [ECX + 0xe68],0x0
005e2f03  MOV EDX,dword ptr [EBP + -0x8]
005e2f06  MOV dword ptr [EDX + 0xe6c],0xfffffc18
005e2f10  MOV dword ptr [EBP + -0x4],0x0
005e2f17  JMP 0x005e2f22
005e2f19  MOV EAX,dword ptr [EBP + -0x4]
005e2f1c  ADD EAX,0x1
005e2f1f  MOV dword ptr [EBP + -0x4],EAX
005e2f22  CMP dword ptr [EBP + -0x4],0x14
005e2f26  JGE 0x005e2f37
005e2f28  MOV ECX,dword ptr [EBP + -0x8]
005e2f2b  ADD ECX,dword ptr [EBP + -0x4]
005e2f2e  MOV byte ptr [ECX + 0xe51],0x0
005e2f35  JMP 0x005e2f19
005e2f37  MOV EDX,dword ptr [EBP + 0x8]
005e2f3a  PUSH EDX
005e2f3b  MOV ECX,dword ptr [EBP + -0xc]
005e2f3e  CALL 0x006369b0
005e2f43  PUSH EAX
005e2f44  CALL 0x005dcb00
005e2f49  ADD ESP,0x4
005e2f4c  MOV ECX,EAX
005e2f4e  CALL 0x0063b0a0
005e2f53  POP EDI
005e2f54  POP ESI
005e2f55  MOV ESP,EBP
005e2f57  POP EBP
005e2f58  RET 0x8
