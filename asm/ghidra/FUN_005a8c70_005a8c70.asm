; FUN_005a8c70  005a8c70
005a8c70  PUSH EBP
005a8c71  MOV EBP,ESP
005a8c73  SUB ESP,0x5c
005a8c76  MOV dword ptr [EBP + -0x4c],ECX
005a8c79  MOV dword ptr [EBP + -0x40],0x6cfa14
005a8c80  MOV dword ptr [EBP + -0x3c],0x6cfa00
005a8c87  MOV dword ptr [EBP + -0x38],0x6cf9e8
005a8c8e  MOV dword ptr [EBP + -0x34],0x6cf9d0
005a8c95  MOV dword ptr [EBP + -0x30],0x6cf9b4
005a8c9c  MOV dword ptr [EBP + -0x28],0x20
005a8ca3  MOV dword ptr [EBP + -0x24],0x22
005a8caa  MOV dword ptr [EBP + -0x20],0x20
005a8cb1  MOV dword ptr [EBP + -0x1c],0x40
005a8cb8  MOV dword ptr [EBP + -0x18],0x20
005a8cbf  MOV dword ptr [EBP + -0x14],0x5e
005a8cc6  MOV dword ptr [EBP + -0x10],0x20
005a8ccd  MOV dword ptr [EBP + -0xc],0x7c
005a8cd4  MOV dword ptr [EBP + -0x8],0x5
005a8cdb  MOV dword ptr [EBP + -0x4],0x9a
005a8ce2  MOV ECX,dword ptr [0x00793604]
005a8ce8  CALL 0x005b4f00
005a8ced  MOV dword ptr [EBP + -0x2c],EAX
005a8cf0  MOV EAX,dword ptr [EBP + -0x2c]
005a8cf3  PUSH EAX
005a8cf4  MOV ECX,dword ptr [0x00793604]
005a8cfa  CALL 0x005b4e50
005a8cff  MOV dword ptr [EBP + -0x44],EAX
005a8d02  PUSH 0x0
005a8d04  PUSH 0x1396
005a8d09  MOV ECX,dword ptr [EBP + -0x4c]
005a8d0c  CALL 0x005f83d0
005a8d11  PUSH 0x14
005a8d13  MOV ECX,dword ptr [EBP + -0x4c]
005a8d16  CALL 0x005f89d0
005a8d1b  PUSH 0x3
005a8d1d  PUSH 0x0
005a8d1f  PUSH 0x49
005a8d21  PUSH 0x6cf99c
005a8d26  CALL 0x00630f40
005a8d2b  ADD ESP,0x4
005a8d2e  PUSH EAX
005a8d2f  MOV ECX,dword ptr [EBP + -0x4c]
005a8d32  CALL 0x005f73e0
005a8d37  MOV dword ptr [EBP + -0x48],0x0
005a8d3e  JMP 0x005a8d49
005a8d40  MOV ECX,dword ptr [EBP + -0x48]
005a8d43  ADD ECX,0x1
005a8d46  MOV dword ptr [EBP + -0x48],ECX
005a8d49  CMP dword ptr [EBP + -0x48],0x5
005a8d4d  JGE 0x005a8db1
005a8d4f  PUSH 0x0
005a8d51  PUSH -0x1
005a8d53  PUSH 0x4a
005a8d55  PUSH 0x4b
005a8d57  PUSH 0x48
005a8d59  MOV EDX,dword ptr [EBP + -0x48]
005a8d5c  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x40]
005a8d60  PUSH EAX
005a8d61  CALL 0x00630f40
005a8d66  ADD ESP,0x4
005a8d69  PUSH EAX
005a8d6a  PUSH 0x2
005a8d6c  MOV ECX,dword ptr [EBP + -0x48]
005a8d6f  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x24]
005a8d73  PUSH EDX
005a8d74  MOV EAX,dword ptr [EBP + -0x48]
005a8d77  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
005a8d7b  PUSH ECX
005a8d7c  XOR EDX,EDX
005a8d7e  CMP dword ptr [EBP + -0x48],0x4
005a8d82  SETZ DL
005a8d85  ADD EDX,0x30d4de
005a8d8b  PUSH EDX
005a8d8c  MOV EAX,dword ptr [EBP + -0x48]
005a8d8f  PUSH EAX
005a8d90  PUSH 0x0
005a8d92  MOV ECX,dword ptr [EBP + -0x4c]
005a8d95  CALL 0x005f9de0
005a8d9a  PUSH 0x1
005a8d9c  MOV ECX,dword ptr [EBP + -0x48]
005a8d9f  PUSH ECX
005a8da0  MOV ECX,dword ptr [EBP + -0x4c]
005a8da3  CALL 0x005fb300
005a8da8  MOV ECX,EAX
005a8daa  CALL 0x005eb700
005a8daf  JMP 0x005a8d40
005a8db1  MOV EDX,dword ptr [EBP + -0x2c]
005a8db4  PUSH EDX
005a8db5  MOV ECX,dword ptr [0x00793604]
005a8dbb  CALL 0x005b6170
005a8dc0  MOVZX EAX,AL
005a8dc3  TEST EAX,EAX
005a8dc5  JZ 0x005a8de4
005a8dc7  PUSH 0x1
005a8dc9  MOV ECX,dword ptr [EBP + -0x4c]
005a8dcc  CALL 0x005fb300
005a8dd1  MOV dword ptr [EBP + -0x50],EAX
005a8dd4  MOV ECX,dword ptr [EBP + -0x50]
005a8dd7  MOV EDX,dword ptr [ECX]
005a8dd9  MOV ECX,dword ptr [EBP + -0x50]
005a8ddc  MOV EAX,dword ptr [EDX + 0xd0]
005a8de2  CALL EAX
005a8de4  MOV ECX,dword ptr [EBP + -0x2c]
005a8de7  PUSH ECX
005a8de8  MOV ECX,dword ptr [0x00793604]
005a8dee  CALL 0x005b3430
005a8df3  MOVZX EDX,AL
005a8df6  TEST EDX,EDX
005a8df8  JNZ 0x005a8e17
005a8dfa  PUSH 0x2
005a8dfc  MOV ECX,dword ptr [EBP + -0x4c]
005a8dff  CALL 0x005fb300
005a8e04  MOV dword ptr [EBP + -0x54],EAX
005a8e07  MOV EAX,dword ptr [EBP + -0x54]
005a8e0a  MOV EDX,dword ptr [EAX]
005a8e0c  MOV ECX,dword ptr [EBP + -0x54]
005a8e0f  MOV EAX,dword ptr [EDX + 0xd0]
005a8e15  CALL EAX
005a8e17  MOV ECX,dword ptr [EBP + -0x44]
005a8e1a  PUSH ECX
005a8e1b  MOV EDX,dword ptr [EBP + -0x2c]
005a8e1e  PUSH EDX
005a8e1f  MOV ECX,dword ptr [0x00793604]
005a8e25  CALL 0x005b3710
005a8e2a  MOVZX EAX,AL
005a8e2d  TEST EAX,EAX
005a8e2f  JNZ 0x005a8e4e
005a8e31  PUSH 0x3
005a8e33  MOV ECX,dword ptr [EBP + -0x4c]
005a8e36  CALL 0x005fb300
005a8e3b  MOV dword ptr [EBP + -0x58],EAX
005a8e3e  MOV ECX,dword ptr [EBP + -0x58]
005a8e41  MOV EDX,dword ptr [ECX]
005a8e43  MOV ECX,dword ptr [EBP + -0x58]
005a8e46  MOV EAX,dword ptr [EDX + 0xd0]
005a8e4c  CALL EAX
005a8e4e  MOV ECX,dword ptr [EBP + -0x2c]
005a8e51  PUSH ECX
005a8e52  MOV ECX,dword ptr [0x00793604]
005a8e58  CALL 0x005b37f0
005a8e5d  MOVZX EDX,AL
005a8e60  TEST EDX,EDX
005a8e62  JNZ 0x005a8e81
005a8e64  PUSH 0x4
005a8e66  MOV ECX,dword ptr [EBP + -0x4c]
005a8e69  CALL 0x005fb300
005a8e6e  MOV dword ptr [EBP + -0x5c],EAX
005a8e71  MOV EAX,dword ptr [EBP + -0x5c]
005a8e74  MOV EDX,dword ptr [EAX]
005a8e76  MOV ECX,dword ptr [EBP + -0x5c]
005a8e79  MOV EAX,dword ptr [EDX + 0xd0]
005a8e7f  CALL EAX
005a8e81  MOV ESP,EBP
005a8e83  POP EBP
005a8e84  RET
