; FUN_00646c20  00646c20
00646c20  PUSH EBP
00646c21  MOV EBP,ESP
00646c23  PUSH ECX
00646c24  MOV dword ptr [EBP + -0x4],ECX
00646c27  MOV EAX,dword ptr [EBP + -0x4]
00646c2a  MOV byte ptr [EAX + 0x5c],0x1
00646c2e  MOVZX ECX,byte ptr [EBP + 0x8]
00646c32  TEST ECX,ECX
00646c34  JZ 0x00646c40
00646c36  PUSH 0x1
00646c38  MOV ECX,dword ptr [EBP + -0x4]
00646c3b  CALL 0x00648270
00646c40  MOV EDX,dword ptr [EBP + -0x4]
00646c43  MOV EAX,dword ptr [EDX + 0xc]
00646c46  MOV ECX,dword ptr [EBP + -0x4]
00646c49  MOV ECX,dword ptr [ECX + 0xc]
00646c4c  MOV EDX,dword ptr [EAX]
00646c4e  MOV EAX,dword ptr [EDX + 0x70]
00646c51  CALL EAX
00646c53  MOV ECX,dword ptr [EBP + -0x4]
00646c56  MOV EDX,dword ptr [ECX + 0x8]
00646c59  MOV EAX,dword ptr [EBP + -0x4]
00646c5c  MOV ECX,dword ptr [EAX + 0x8]
00646c5f  MOV EDX,dword ptr [EDX]
00646c61  MOV EAX,dword ptr [EDX + 0x70]
00646c64  CALL EAX
00646c66  MOV ECX,dword ptr [EBP + -0x4]
00646c69  MOV EDX,dword ptr [ECX + 0x18]
00646c6c  MOV EAX,dword ptr [EBP + -0x4]
00646c6f  MOV ECX,dword ptr [EAX + 0x18]
00646c72  MOV EDX,dword ptr [EDX]
00646c74  MOV EAX,dword ptr [EDX + 0x70]
00646c77  CALL EAX
00646c79  MOV ECX,dword ptr [EBP + -0x4]
00646c7c  CMP dword ptr [ECX + 0x14],0x0
00646c80  JZ 0x00646c8d
00646c82  MOV EDX,dword ptr [EBP + -0x4]
00646c85  MOV ECX,dword ptr [EDX + 0x14]
00646c88  CALL 0x00664670
00646c8d  MOV EAX,dword ptr [EBP + -0x4]
00646c90  CMP dword ptr [EAX + 0x1c],0x0
00646c94  JZ 0x00646ca9
00646c96  MOV ECX,dword ptr [EBP + -0x4]
00646c99  MOV EDX,dword ptr [ECX + 0x1c]
00646c9c  MOV EAX,dword ptr [EBP + -0x4]
00646c9f  MOV ECX,dword ptr [EAX + 0x1c]
00646ca2  MOV EDX,dword ptr [EDX]
00646ca4  MOV EAX,dword ptr [EDX + 0x70]
00646ca7  CALL EAX
00646ca9  MOV ESP,EBP
00646cab  POP EBP
00646cac  RET 0x4
