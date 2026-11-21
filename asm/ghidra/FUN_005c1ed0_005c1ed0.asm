; FUN_005c1ed0  005c1ed0
005c1ed0  PUSH EBP
005c1ed1  MOV EBP,ESP
005c1ed3  SUB ESP,0x28
005c1ed6  MOV dword ptr [EBP + -0x20],ECX
005c1ed9  MOV EAX,dword ptr [EBP + -0x20]
005c1edc  MOV EDX,dword ptr [EAX]
005c1ede  MOV ECX,dword ptr [EBP + -0x20]
005c1ee1  MOV EAX,dword ptr [EDX + 0x28]
005c1ee4  CALL EAX
005c1ee6  MOVZX ECX,AL
005c1ee9  TEST ECX,ECX
005c1eeb  JZ 0x005c1f0a
005c1eed  MOV EDX,dword ptr [EBP + -0x20]
005c1ef0  MOV EAX,dword ptr [EDX]
005c1ef2  MOV ECX,dword ptr [EBP + -0x20]
005c1ef5  MOV EDX,dword ptr [EAX + 0x24]
005c1ef8  CALL EDX
005c1efa  MOVZX EAX,AL
005c1efd  TEST EAX,EAX
005c1eff  JNZ 0x005c1f0a
005c1f01  MOV dword ptr [EBP + -0x24],0x1
005c1f08  JMP 0x005c1f11
005c1f0a  MOV dword ptr [EBP + -0x24],0x0
005c1f11  MOV CL,byte ptr [EBP + -0x24]
005c1f14  MOV byte ptr [EBP + -0x5],CL
005c1f17  MOV dword ptr [EBP + -0x4],0x0
005c1f1e  JMP 0x005c1f29
005c1f20  MOV EDX,dword ptr [EBP + -0x4]
005c1f23  ADD EDX,0x1
005c1f26  MOV dword ptr [EBP + -0x4],EDX
005c1f29  MOV EAX,dword ptr [EBP + -0x4]
005c1f2c  CMP dword ptr [EAX*0x4 + 0x759e6c],0x0
005c1f34  JL 0x005c1f6b
005c1f36  MOV ECX,dword ptr [EBP + -0x4]
005c1f39  MOV EDX,dword ptr [ECX*0x4 + 0x759e6c]
005c1f40  PUSH EDX
005c1f41  MOV EAX,dword ptr [EBP + -0x20]
005c1f44  MOV ECX,dword ptr [EAX + 0x8]
005c1f47  CALL 0x005fb300
005c1f4c  MOV dword ptr [EBP + -0xc],EAX
005c1f4f  CMP dword ptr [EBP + -0xc],0x0
005c1f53  JZ 0x005c1f69
005c1f55  MOV CL,byte ptr [EBP + -0x5]
005c1f58  PUSH ECX
005c1f59  MOV EDX,dword ptr [EBP + -0xc]
005c1f5c  MOV EAX,dword ptr [EDX]
005c1f5e  MOV ECX,dword ptr [EBP + -0xc]
005c1f61  MOV EDX,dword ptr [EAX + 0xd4]
005c1f67  CALL EDX
005c1f69  JMP 0x005c1f20
005c1f6b  MOV EAX,dword ptr [EBP + -0x20]
005c1f6e  MOV EDX,dword ptr [EAX]
005c1f70  MOV ECX,dword ptr [EBP + -0x20]
005c1f73  MOV EAX,dword ptr [EDX + 0x28]
005c1f76  CALL EAX
005c1f78  MOVZX ECX,AL
005c1f7b  TEST ECX,ECX
005c1f7d  JZ 0x005c1fb8
005c1f7f  MOV EDX,dword ptr [EBP + -0x20]
005c1f82  MOV EAX,dword ptr [EDX]
005c1f84  MOV ECX,dword ptr [EBP + -0x20]
005c1f87  MOV EDX,dword ptr [EAX + 0x24]
005c1f8a  CALL EDX
005c1f8c  MOVZX EAX,AL
005c1f8f  TEST EAX,EAX
005c1f91  JNZ 0x005c1fb8
005c1f93  MOV ECX,dword ptr [EBP + -0x20]
005c1f96  MOV EDX,dword ptr [ECX + 0x4]
005c1f99  MOV EAX,dword ptr [EDX + 0x8]
005c1f9c  MOV dword ptr [EBP + -0x10],EAX
005c1f9f  MOV ECX,dword ptr [EBP + -0x20]
005c1fa2  MOV ECX,dword ptr [ECX + 0x4]
005c1fa5  CALL 0x005c47b0
005c1faa  CMP dword ptr [EBP + -0x10],EAX
005c1fad  JG 0x005c1fb8
005c1faf  MOV dword ptr [EBP + -0x28],0x1
005c1fb6  JMP 0x005c1fbf
005c1fb8  MOV dword ptr [EBP + -0x28],0x0
005c1fbf  MOV DL,byte ptr [EBP + -0x28]
005c1fc2  MOV byte ptr [EBP + -0x5],DL
005c1fc5  PUSH 0x5e
005c1fc7  MOV EAX,dword ptr [EBP + -0x20]
005c1fca  MOV ECX,dword ptr [EAX + 0x8]
005c1fcd  CALL 0x005fb300
005c1fd2  MOV dword ptr [EBP + -0xc],EAX
005c1fd5  CMP dword ptr [EBP + -0xc],0x0
005c1fd9  JZ 0x005c1fef
005c1fdb  MOV CL,byte ptr [EBP + -0x5]
005c1fde  PUSH ECX
005c1fdf  MOV EDX,dword ptr [EBP + -0xc]
005c1fe2  MOV EAX,dword ptr [EDX]
005c1fe4  MOV ECX,dword ptr [EBP + -0xc]
005c1fe7  MOV EDX,dword ptr [EAX + 0xd4]
005c1fed  CALL EDX
005c1fef  MOV ESP,EBP
005c1ff1  POP EBP
005c1ff2  RET
