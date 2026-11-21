; FUN_005aaa20  005aaa20
005aaa20  PUSH EBP
005aaa21  MOV EBP,ESP
005aaa23  PUSH -0x1
005aaa25  PUSH 0x6a7b65
005aaa2a  MOV EAX,FS:[0x0]
005aaa30  PUSH EAX
005aaa31  SUB ESP,0x2c
005aaa34  MOV EAX,[0x00781870]
005aaa39  XOR EAX,EBP
005aaa3b  PUSH EAX
005aaa3c  LEA EAX,[EBP + -0xc]
005aaa3f  MOV FS:[0x0],EAX
005aaa45  MOV dword ptr [EBP + -0x28],ECX
005aaa48  MOV ECX,dword ptr [EBP + -0x28]
005aaa4b  CALL 0x005fc360
005aaa50  MOV dword ptr [EBP + -0x2c],EAX
005aaa53  CMP dword ptr [EBP + -0x2c],0x4
005aaa57  JA 0x005aad1f
005aaa5d  MOV EAX,dword ptr [EBP + -0x2c]
005aaa60  JMP dword ptr [EAX*0x4 + 0x5aad4c]
005aad1f  XOR EDX,EDX
005aad21  JNZ 0x005aad3a
005aad23  PUSH 0x48e
005aad28  PUSH 0x6cf934
005aad2d  PUSH 0x6b2f58
005aad32  CALL 0x005e9f20
005aad37  ADD ESP,0xc
005aad3a  MOV ECX,dword ptr [EBP + -0xc]
005aad3d  MOV dword ptr FS:[0x0],ECX
005aad44  POP ECX
005aad45  MOV ESP,EBP
005aad47  POP EBP
005aad48  RET
