; FUN_0064ce60  0064ce60
0064ce60  PUSH EBP
0064ce61  MOV EBP,ESP
0064ce63  PUSH -0x1
0064ce65  PUSH 0x6abffe
0064ce6a  MOV EAX,FS:[0x0]
0064ce70  PUSH EAX
0064ce71  SUB ESP,0x10
0064ce74  MOV EAX,[0x00781870]
0064ce79  XOR EAX,EBP
0064ce7b  PUSH EAX
0064ce7c  LEA EAX,[EBP + -0xc]
0064ce7f  MOV FS:[0x0],EAX
0064ce85  MOV dword ptr [EBP + -0x18],ECX
0064ce88  MOV ECX,dword ptr [EBP + -0x18]
0064ce8b  CALL 0x005f1120
0064ce90  MOV EAX,[0x007960d8]
0064ce95  CMP dword ptr [EAX + 0x8],0x0
0064ce99  JZ 0x0064ceb1
0064ce9b  MOV ECX,dword ptr [0x0162ee84]
0064cea1  MOV EDX,dword ptr [ECX]
0064cea3  MOV ECX,dword ptr [0x0162ee84]
0064cea9  MOV EAX,dword ptr [EDX + 0x384]
0064ceaf  CALL EAX
0064ceb1  MOV ECX,dword ptr [EBP + -0x18]
0064ceb4  MOV EDX,dword ptr [ECX]
0064ceb6  MOV ECX,dword ptr [EBP + -0x18]
0064ceb9  MOV EAX,dword ptr [EDX + 0x24]
0064cebc  CALL EAX
0064cebe  MOV ECX,dword ptr [EBP + -0x18]
0064cec1  CALL 0x0064cfa0
0064cec6  MOV ECX,dword ptr [EBP + -0x18]
0064cec9  MOV EDX,dword ptr [ECX]
0064cecb  MOV ECX,dword ptr [EBP + -0x18]
0064cece  MOV EAX,dword ptr [EDX + 0x60]
0064ced1  CALL EAX
0064ced3  PUSH -0x1
0064ced5  MOV ECX,dword ptr [0x0162ee84]
0064cedb  MOV EDX,dword ptr [ECX]
0064cedd  MOV ECX,dword ptr [0x0162ee84]
0064cee3  MOV EAX,dword ptr [EDX + 0x33c]
0064cee9  CALL EAX
0064ceeb  MOVZX ECX,AL
0064ceee  TEST ECX,ECX
0064cef0  JZ 0x0064cf8f
0064cef6  MOV EDX,dword ptr [0x0162ee84]
0064cefc  MOV EAX,dword ptr [EDX]
0064cefe  MOV ECX,dword ptr [0x0162ee84]
0064cf04  MOV EDX,dword ptr [EAX + 0x35c]
0064cf0a  CALL EDX
0064cf0c  MOV EAX,[0x0162ee84]
0064cf11  MOV EDX,dword ptr [EAX]
0064cf13  MOV ECX,dword ptr [0x0162ee84]
0064cf19  MOV EAX,dword ptr [EDX + 0xdc]
0064cf1f  CALL EAX
0064cf21  MOVZX ECX,AL
0064cf24  TEST ECX,ECX
0064cf26  JZ 0x0064cf8f
0064cf28  PUSH 0x19c
0064cf2d  CALL 0x00686d82
0064cf32  ADD ESP,0x4
0064cf35  MOV dword ptr [EBP + -0x14],EAX
0064cf38  MOV dword ptr [EBP + -0x4],0x0
0064cf3f  CMP dword ptr [EBP + -0x14],0x0
0064cf43  JZ 0x0064cf52
0064cf45  MOV ECX,dword ptr [EBP + -0x14]
0064cf48  CALL 0x00670680
0064cf4d  MOV dword ptr [EBP + -0x1c],EAX
0064cf50  JMP 0x0064cf59
0064cf52  MOV dword ptr [EBP + -0x1c],0x0
0064cf59  MOV EDX,dword ptr [EBP + -0x1c]
0064cf5c  MOV dword ptr [EBP + -0x10],EDX
0064cf5f  MOV dword ptr [EBP + -0x4],0xffffffff
0064cf66  MOV EAX,dword ptr [EBP + -0x18]
0064cf69  MOV ECX,dword ptr [EBP + -0x10]
0064cf6c  MOV dword ptr [EAX + 0x50],ECX
0064cf6f  MOV EDX,dword ptr [EBP + -0x18]
0064cf72  MOV ECX,dword ptr [EDX + 0x50]
0064cf75  CALL 0x006708c0
0064cf7a  MOV EAX,dword ptr [EBP + -0x18]
0064cf7d  MOV ECX,dword ptr [EAX + 0x50]
0064cf80  MOV EDX,dword ptr [EBP + -0x18]
0064cf83  MOV EAX,dword ptr [EDX + 0x50]
0064cf86  MOV EDX,dword ptr [ECX]
0064cf88  MOV ECX,EAX
0064cf8a  MOV EAX,dword ptr [EDX + 0x74]
0064cf8d  CALL EAX
0064cf8f  MOV ECX,dword ptr [EBP + -0xc]
0064cf92  MOV dword ptr FS:[0x0],ECX
0064cf99  POP ECX
0064cf9a  MOV ESP,EBP
0064cf9c  POP EBP
0064cf9d  RET
