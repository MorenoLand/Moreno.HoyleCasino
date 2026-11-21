; FUN_005f3c80  005f3c80
005f3c80  PUSH EBP
005f3c81  MOV EBP,ESP
005f3c83  SUB ESP,0x2c
005f3c86  MOV dword ptr [EBP + -0x24],ECX
005f3c89  CMP dword ptr [0x015e55e4],0x0
005f3c90  JZ 0x005f3d82
005f3c96  MOV EAX,[0x007960d8]
005f3c9b  CMP dword ptr [EAX + 0x8],0x0
005f3c9f  JZ 0x005f3cd6
005f3ca1  MOV ECX,dword ptr [0x007960d8]
005f3ca7  MOV ECX,dword ptr [ECX + 0x8]
005f3caa  CALL 0x006098d0
005f3caf  MOV EDX,dword ptr [EBP + -0x24]
005f3cb2  MOV EAX,dword ptr [EDX]
005f3cb4  MOV ECX,dword ptr [EBP + -0x24]
005f3cb7  MOV EDX,dword ptr [EAX + 0x8c]
005f3cbd  CALL EDX
005f3cbf  MOVZX EAX,AL
005f3cc2  TEST EAX,EAX
005f3cc4  JZ 0x005f3cd6
005f3cc6  MOV ECX,dword ptr [EBP + -0x24]
005f3cc9  MOV EDX,dword ptr [ECX]
005f3ccb  MOV ECX,dword ptr [EBP + -0x24]
005f3cce  MOV EAX,dword ptr [EDX + 0x88]
005f3cd4  CALL EAX
005f3cd6  MOV ECX,dword ptr [0x015e55e4]
005f3cdc  MOV dword ptr [EBP + -0x14],ECX
005f3cdf  MOV EDX,dword ptr [EBP + -0x14]
005f3ce2  MOV dword ptr [EBP + -0x10],EDX
005f3ce5  CMP dword ptr [EBP + -0x10],0x0
005f3ce9  JZ 0x005f3cfe
005f3ceb  PUSH 0x1
005f3ced  MOV EAX,dword ptr [EBP + -0x10]
005f3cf0  MOV EDX,dword ptr [EAX]
005f3cf2  MOV ECX,dword ptr [EBP + -0x10]
005f3cf5  MOV EAX,dword ptr [EDX]
005f3cf7  CALL EAX
005f3cf9  MOV dword ptr [EBP + -0x28],EAX
005f3cfc  JMP 0x005f3d05
005f3cfe  MOV dword ptr [EBP + -0x28],0x0
005f3d05  MOV dword ptr [0x015e55e4],0x0
005f3d0f  CMP dword ptr [EBP + 0x8],-0x1
005f3d13  JZ 0x005f3d29
005f3d15  CMP dword ptr [EBP + 0x8],0x44c
005f3d1c  JZ 0x005f3d29
005f3d1e  MOV ECX,dword ptr [EBP + -0x24]
005f3d21  MOV ECX,dword ptr [ECX + 0x14]
005f3d24  CALL 0x005f7d50
005f3d29  MOV ECX,0x795098
005f3d2e  CALL 0x0060c9a0
005f3d33  TEST EAX,EAX
005f3d35  JZ 0x005f3d82
005f3d37  PUSH 0x0
005f3d39  MOV ECX,0x795098
005f3d3e  CALL 0x0060ca40
005f3d43  MOV dword ptr [EBP + -0x8],EAX
005f3d46  MOV EDX,dword ptr [EBP + -0x8]
005f3d49  PUSH EDX
005f3d4a  MOV ECX,0x795098
005f3d4f  CALL 0x0060c890
005f3d54  MOV EAX,dword ptr [EBP + -0x8]
005f3d57  MOV dword ptr [EBP + -0x1c],EAX
005f3d5a  MOV ECX,dword ptr [EBP + -0x1c]
005f3d5d  MOV dword ptr [EBP + -0x18],ECX
005f3d60  CMP dword ptr [EBP + -0x18],0x0
005f3d64  JZ 0x005f3d79
005f3d66  PUSH 0x1
005f3d68  MOV EDX,dword ptr [EBP + -0x18]
005f3d6b  MOV EAX,dword ptr [EDX]
005f3d6d  MOV ECX,dword ptr [EBP + -0x18]
005f3d70  MOV EDX,dword ptr [EAX]
005f3d72  CALL EDX
005f3d74  MOV dword ptr [EBP + -0x2c],EAX
005f3d77  JMP 0x005f3d80
005f3d79  MOV dword ptr [EBP + -0x2c],0x0
005f3d80  JMP 0x005f3d29
005f3d82  PUSH 0x0
005f3d84  MOV ECX,dword ptr [0x007960d8]
005f3d8a  CALL 0x00625240
005f3d8f  MOV dword ptr [EBP + -0x4],0x0
005f3d96  JMP 0x005f3da1
005f3d98  MOV EAX,dword ptr [EBP + -0x4]
005f3d9b  ADD EAX,0x1
005f3d9e  MOV dword ptr [EBP + -0x4],EAX
005f3da1  MOV ECX,dword ptr [EBP + -0x24]
005f3da4  ADD ECX,0x4
005f3da7  CALL 0x0060c9a0
005f3dac  CMP dword ptr [EBP + -0x4],EAX
005f3daf  JGE 0x005f3dd9
005f3db1  MOV ECX,dword ptr [EBP + -0x4]
005f3db4  PUSH ECX
005f3db5  MOV ECX,dword ptr [EBP + -0x24]
005f3db8  ADD ECX,0x4
005f3dbb  CALL 0x0060ca40
005f3dc0  MOV dword ptr [EBP + -0xc],EAX
005f3dc3  MOV EDX,dword ptr [EBP + -0xc]
005f3dc6  MOV EAX,dword ptr [EDX + 0x1a8]
005f3dcc  MOV dword ptr [EBP + -0x20],EAX
005f3dcf  MOV ECX,dword ptr [EBP + -0x20]
005f3dd2  CALL 0x00613da0
005f3dd7  JMP 0x005f3d98
005f3dd9  MOV ESP,EBP
005f3ddb  POP EBP
005f3ddc  RET 0x4
