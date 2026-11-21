; FUN_0040db70  0040db70
0040db70  PUSH EBP
0040db71  MOV EBP,ESP
0040db73  PUSH -0x1
0040db75  PUSH 0x69da55
0040db7a  MOV EAX,FS:[0x0]
0040db80  PUSH EAX
0040db81  SUB ESP,0x10
0040db84  MOV EAX,[0x00781870]
0040db89  XOR EAX,EBP
0040db8b  PUSH EAX
0040db8c  LEA EAX,[EBP + -0xc]
0040db8f  MOV FS:[0x0],EAX
0040db95  MOV dword ptr [EBP + -0x18],ECX
0040db98  MOV EAX,dword ptr [EBP + -0x18]
0040db9b  CMP dword ptr [EAX + 0x38],0x0
0040db9f  JNZ 0x0040dc0d
0040dba1  PUSH 0x1bc
0040dba6  CALL 0x00686d82
0040dbab  ADD ESP,0x4
0040dbae  MOV dword ptr [EBP + -0x14],EAX
0040dbb1  MOV dword ptr [EBP + -0x4],0x0
0040dbb8  CMP dword ptr [EBP + -0x14],0x0
0040dbbc  JZ 0x0040dbcb
0040dbbe  MOV ECX,dword ptr [EBP + -0x14]
0040dbc1  CALL 0x00411d70
0040dbc6  MOV dword ptr [EBP + -0x1c],EAX
0040dbc9  JMP 0x0040dbd2
0040dbcb  MOV dword ptr [EBP + -0x1c],0x0
0040dbd2  MOV ECX,dword ptr [EBP + -0x1c]
0040dbd5  MOV dword ptr [EBP + -0x10],ECX
0040dbd8  MOV dword ptr [EBP + -0x4],0xffffffff
0040dbdf  MOV EDX,dword ptr [EBP + -0x18]
0040dbe2  MOV EAX,dword ptr [EBP + -0x10]
0040dbe5  MOV dword ptr [EDX + 0x38],EAX
0040dbe8  MOV ECX,dword ptr [EBP + -0x18]
0040dbeb  MOV EDX,dword ptr [ECX + 0x38]
0040dbee  MOV EAX,dword ptr [EBP + -0x18]
0040dbf1  MOV ECX,dword ptr [EAX + 0x38]
0040dbf4  MOV EDX,dword ptr [EDX]
0040dbf6  MOV EAX,dword ptr [EDX + 0x3c]
0040dbf9  CALL EAX
0040dbfb  PUSH 0x5
0040dbfd  PUSH 0x17c
0040dc02  MOV ECX,dword ptr [EBP + -0x18]
0040dc05  MOV ECX,dword ptr [ECX + 0x38]
0040dc08  CALL 0x005f7320
0040dc0d  MOV EDX,dword ptr [EBP + -0x18]
0040dc10  MOV ECX,dword ptr [EDX + 0x38]
0040dc13  CALL 0x00411e70
0040dc18  MOV EAX,[0x00790328]
0040dc1d  MOVZX ECX,byte ptr [EAX + 0x7]
0040dc21  TEST ECX,ECX
0040dc23  JZ 0x0040dc30
0040dc25  MOV EDX,dword ptr [EBP + -0x18]
0040dc28  MOV ECX,dword ptr [EDX + 0x38]
0040dc2b  CALL 0x005f85d0
0040dc30  MOV ECX,dword ptr [EBP + -0xc]
0040dc33  MOV dword ptr FS:[0x0],ECX
0040dc3a  POP ECX
0040dc3b  MOV ESP,EBP
0040dc3d  POP EBP
0040dc3e  RET
