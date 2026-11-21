; FUN_00601e90  00601e90
00601e90  PUSH EBP
00601e91  MOV EBP,ESP
00601e93  PUSH ECX
00601e94  MOV dword ptr [EBP + -0x4],ECX
00601e97  PUSH 0x0
00601e99  MOV EAX,dword ptr [EBP + -0x4]
00601e9c  MOV ECX,dword ptr [EAX + 0x4]
00601e9f  CALL 0x005f89f0
00601ea4  PUSH 0x0
00601ea6  MOV ECX,dword ptr [EBP + -0x4]
00601ea9  CALL 0x005f5df0
00601eae  MOV ECX,dword ptr [EBP + 0x8]
00601eb1  MOV byte ptr [ECX + 0x4],0x1
00601eb5  MOV EDX,dword ptr [EBP + -0x4]
00601eb8  MOV byte ptr [EDX + 0x8],0x0
00601ebc  MOV EAX,dword ptr [EBP + -0x4]
00601ebf  MOV byte ptr [EAX + 0x9],0x0
00601ec3  MOV ECX,dword ptr [EBP + 0x8]
00601ec6  PUSH ECX
00601ec7  MOV EDX,dword ptr [EBP + -0x4]
00601eca  MOV EAX,dword ptr [EDX]
00601ecc  MOV ECX,dword ptr [EBP + -0x4]
00601ecf  MOV EDX,dword ptr [EAX + 0x84]
00601ed5  CALL EDX
00601ed7  MOVZX EAX,AL
00601eda  TEST EAX,EAX
00601edc  JZ 0x00601f1b
00601ede  PUSH 0x3
00601ee0  MOV ECX,dword ptr [EBP + -0x4]
00601ee3  MOV EDX,dword ptr [ECX]
00601ee5  MOV ECX,dword ptr [EBP + -0x4]
00601ee8  MOV EAX,dword ptr [EDX + 0xd8]
00601eee  CALL EAX
00601ef0  PUSH 0x3
00601ef2  MOV ECX,dword ptr [EBP + -0x4]
00601ef5  PUSH ECX
00601ef6  MOV EDX,dword ptr [0x015e55e8]
00601efc  MOV EAX,dword ptr [EDX]
00601efe  MOV ECX,dword ptr [0x015e55e8]
00601f04  MOV EDX,dword ptr [EAX + 0x7c]
00601f07  CALL EDX
00601f09  MOV EAX,dword ptr [EBP + -0x4]
00601f0c  MOV EDX,dword ptr [EAX]
00601f0e  MOV ECX,dword ptr [EBP + -0x4]
00601f11  MOV EAX,dword ptr [EDX + 0xc0]
00601f17  CALL EAX
00601f19  JMP 0x00601f46
00601f1b  PUSH 0x0
00601f1d  MOV ECX,dword ptr [EBP + -0x4]
00601f20  PUSH ECX
00601f21  MOV EDX,dword ptr [0x015e55e8]
00601f27  MOV EAX,dword ptr [EDX]
00601f29  MOV ECX,dword ptr [0x015e55e8]
00601f2f  MOV EDX,dword ptr [EAX + 0x7c]
00601f32  CALL EDX
00601f34  PUSH 0x0
00601f36  MOV EAX,dword ptr [EBP + -0x4]
00601f39  MOV EDX,dword ptr [EAX]
00601f3b  MOV ECX,dword ptr [EBP + -0x4]
00601f3e  MOV EAX,dword ptr [EDX + 0xd8]
00601f44  CALL EAX
00601f46  MOV ESP,EBP
00601f48  POP EBP
00601f49  RET 0x4
