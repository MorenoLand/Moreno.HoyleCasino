; FUN_00604d80  00604d80
00604d80  PUSH EBP
00604d81  MOV EBP,ESP
00604d83  PUSH ECX
00604d84  MOV dword ptr [EBP + -0x4],ECX
00604d87  MOV EAX,dword ptr [EBP + -0x4]
00604d8a  MOV EDX,dword ptr [EAX]
00604d8c  MOV ECX,dword ptr [EBP + -0x4]
00604d8f  MOV EAX,dword ptr [EDX + 0x40]
00604d92  CALL EAX
00604d94  MOV ECX,dword ptr [EBP + 0x34]
00604d97  PUSH ECX
00604d98  MOV ECX,dword ptr [EBP + -0x4]
00604d9b  CALL 0x005f53e0
00604da0  MOV EDX,dword ptr [EBP + -0x4]
00604da3  MOV EAX,dword ptr [EBP + 0x28]
00604da6  MOV dword ptr [EDX + 0x80],EAX
00604dac  MOV ECX,dword ptr [EBP + -0x4]
00604daf  MOV EDX,dword ptr [EBP + 0x2c]
00604db2  MOV dword ptr [ECX + 0x50],EDX
00604db5  MOV EAX,dword ptr [EBP + -0x4]
00604db8  MOV ECX,dword ptr [EBP + 0x30]
00604dbb  MOV dword ptr [EAX + 0x54],ECX
00604dbe  MOV EDX,dword ptr [EBP + -0x4]
00604dc1  MOV EAX,dword ptr [EDX + 0x4c]
00604dc4  MOV ECX,dword ptr [EBP + -0x4]
00604dc7  MOV EDX,dword ptr [ECX + 0x4]
00604dca  MOV dword ptr [EAX + 0x4],EDX
00604dcd  PUSH -0x1
00604dcf  MOV EAX,dword ptr [EBP + 0x14]
00604dd2  PUSH EAX
00604dd3  MOV ECX,dword ptr [EBP + 0x10]
00604dd6  PUSH ECX
00604dd7  MOV EDX,dword ptr [EBP + 0xc]
00604dda  PUSH EDX
00604ddb  MOV EAX,dword ptr [EBP + 0x8]
00604dde  PUSH EAX
00604ddf  MOV ECX,dword ptr [EBP + -0x4]
00604de2  MOV ECX,dword ptr [ECX + 0x4c]
00604de5  CALL 0x005eae80
00604dea  MOV EDX,dword ptr [EBP + -0x4]
00604ded  MOV EAX,dword ptr [EDX + 0x48]
00604df0  MOV ECX,dword ptr [EBP + -0x4]
00604df3  MOV EDX,dword ptr [ECX + 0x4]
00604df6  MOV dword ptr [EAX + 0x4],EDX
00604df9  MOV ECX,dword ptr [EBP + -0x4]
00604dfc  CALL 0x006050f0
00604e01  MOVZX EAX,AL
00604e04  TEST EAX,EAX
00604e06  JZ 0x00604e57
00604e08  MOV ECX,dword ptr [EBP + 0xc]
00604e0b  ADD ECX,dword ptr [EBP + 0x20]
00604e0e  MOV EDX,dword ptr [EBP + -0x4]
00604e11  MOV dword ptr [EDX + 0x5c],ECX
00604e14  MOV EAX,dword ptr [EBP + 0xc]
00604e17  ADD EAX,dword ptr [EBP + 0x24]
00604e1a  MOV ECX,dword ptr [EBP + -0x4]
00604e1d  MOV dword ptr [ECX + 0x60],EAX
00604e20  MOV EDX,dword ptr [EBP + -0x4]
00604e23  MOV dword ptr [EDX + 0x68],0x0
00604e2a  MOV EAX,dword ptr [EBP + -0x4]
00604e2d  MOV dword ptr [EAX + 0x64],0x0
00604e34  PUSH -0x1
00604e36  MOV ECX,dword ptr [EBP + 0x14]
00604e39  ADD ECX,0x1
00604e3c  PUSH ECX
00604e3d  MOV EDX,dword ptr [EBP + 0x10]
00604e40  ADD EDX,dword ptr [EBP + 0x1c]
00604e43  PUSH EDX
00604e44  PUSH 0x0
00604e46  MOV EAX,dword ptr [EBP + 0x18]
00604e49  PUSH EAX
00604e4a  MOV ECX,dword ptr [EBP + -0x4]
00604e4d  MOV ECX,dword ptr [ECX + 0x48]
00604e50  CALL 0x005eae80
00604e55  JMP 0x00604ea4
00604e57  MOV EDX,dword ptr [EBP + 0x10]
00604e5a  ADD EDX,dword ptr [EBP + 0x20]
00604e5d  MOV EAX,dword ptr [EBP + -0x4]
00604e60  MOV dword ptr [EAX + 0x64],EDX
00604e63  MOV ECX,dword ptr [EBP + 0x10]
00604e66  ADD ECX,dword ptr [EBP + 0x24]
00604e69  MOV EDX,dword ptr [EBP + -0x4]
00604e6c  MOV dword ptr [EDX + 0x68],ECX
00604e6f  MOV EAX,dword ptr [EBP + -0x4]
00604e72  MOV dword ptr [EAX + 0x60],0x0
00604e79  MOV ECX,dword ptr [EBP + -0x4]
00604e7c  MOV dword ptr [ECX + 0x5c],0x0
00604e83  PUSH -0x1
00604e85  MOV EDX,dword ptr [EBP + 0x14]
00604e88  ADD EDX,0x1
00604e8b  PUSH EDX
00604e8c  PUSH 0x0
00604e8e  MOV EAX,dword ptr [EBP + 0xc]
00604e91  ADD EAX,dword ptr [EBP + 0x1c]
00604e94  PUSH EAX
00604e95  MOV ECX,dword ptr [EBP + 0x18]
00604e98  PUSH ECX
00604e99  MOV EDX,dword ptr [EBP + -0x4]
00604e9c  MOV ECX,dword ptr [EDX + 0x48]
00604e9f  CALL 0x005eae80
00604ea4  MOV ESP,EBP
00604ea6  POP EBP
00604ea7  RET 0x30
