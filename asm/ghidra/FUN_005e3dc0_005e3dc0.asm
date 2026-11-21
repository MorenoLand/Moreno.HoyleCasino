; FUN_005e3dc0  005e3dc0
005e3dc0  PUSH EBP
005e3dc1  MOV EBP,ESP
005e3dc3  SUB ESP,0x18
005e3dc6  MOV dword ptr [EBP + -0xc],ECX
005e3dc9  MOV ECX,dword ptr [0x0162ee84]
005e3dcf  CALL 0x005de860
005e3dd4  MOVZX EAX,AL
005e3dd7  TEST EAX,EAX
005e3dd9  JZ 0x005e3dfb
005e3ddb  PUSH 0x30d400
005e3de0  MOV ECX,dword ptr [EBP + -0xc]
005e3de3  CALL 0x005fb350
005e3de8  MOV dword ptr [EBP + -0x10],EAX
005e3deb  MOV ECX,dword ptr [EBP + -0x10]
005e3dee  MOV EDX,dword ptr [ECX]
005e3df0  MOV ECX,dword ptr [EBP + -0x10]
005e3df3  MOV EAX,dword ptr [EDX + 0xf4]
005e3df9  CALL EAX
005e3dfb  MOV ECX,dword ptr [0x0162ee84]
005e3e01  CALL 0x006375b0
005e3e06  MOV dword ptr [EBP + -0x4],EAX
005e3e09  MOV ECX,dword ptr [EBP + -0x4]
005e3e0c  CALL 0x005d52e0
005e3e11  MOV CL,byte ptr [EAX + 0x5d]
005e3e14  MOV byte ptr [EBP + -0x5],CL
005e3e17  MOVZX EDX,byte ptr [EBP + -0x5]
005e3e1b  TEST EDX,EDX
005e3e1d  JNZ 0x005e3e3f
005e3e1f  PUSH 0x30d401
005e3e24  MOV ECX,dword ptr [EBP + -0xc]
005e3e27  CALL 0x005fb350
005e3e2c  MOV dword ptr [EBP + -0x14],EAX
005e3e2f  MOV EAX,dword ptr [EBP + -0x14]
005e3e32  MOV EDX,dword ptr [EAX]
005e3e34  MOV ECX,dword ptr [EBP + -0x14]
005e3e37  MOV EAX,dword ptr [EDX + 0xf4]
005e3e3d  CALL EAX
005e3e3f  MOV ECX,dword ptr [EBP + -0xc]
005e3e42  CALL 0x00655360
005e3e47  MOVZX ECX,byte ptr [0x00795f94]
005e3e4e  TEST ECX,ECX
005e3e50  JZ 0x005e3e7d
005e3e52  PUSH 0xc
005e3e54  MOV ECX,dword ptr [EBP + -0xc]
005e3e57  CALL 0x005fb350
005e3e5c  TEST EAX,EAX
005e3e5e  JZ 0x005e3e7d
005e3e60  PUSH 0xc
005e3e62  MOV ECX,dword ptr [EBP + -0xc]
005e3e65  CALL 0x005fb350
005e3e6a  MOV dword ptr [EBP + -0x18],EAX
005e3e6d  MOV EDX,dword ptr [EBP + -0x18]
005e3e70  MOV EAX,dword ptr [EDX]
005e3e72  MOV ECX,dword ptr [EBP + -0x18]
005e3e75  MOV EDX,dword ptr [EAX + 0xcc]
005e3e7b  CALL EDX
005e3e7d  MOV ESP,EBP
005e3e7f  POP EBP
005e3e80  RET
