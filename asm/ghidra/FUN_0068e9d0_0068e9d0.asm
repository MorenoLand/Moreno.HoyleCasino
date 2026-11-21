; FUN_0068e9d0  0068e9d0
0068e9d0  PUSH EBP
0068e9d1  MOV EBP,ESP
0068e9d3  SUB ESP,0x2c
0068e9d6  MOV dword ptr [EBP + -0x2c],ECX
0068e9d9  MOV EAX,dword ptr [EBP + 0x8]
0068e9dc  MOV ECX,dword ptr [EAX + 0x4]
0068e9df  ADD ECX,0x4
0068e9e2  MOV dword ptr [EBP + -0x4],ECX
0068e9e5  MOV EDX,dword ptr [EBP + -0x2c]
0068e9e8  MOV EAX,dword ptr [EDX + 0x4]
0068e9eb  ADD EAX,0x4
0068e9ee  MOV dword ptr [EBP + -0x8],EAX
0068e9f1  MOV ECX,dword ptr [EBP + -0x2c]
0068e9f4  MOV EDX,dword ptr [ECX + 0x4]
0068e9f7  PUSH EDX
0068e9f8  MOV EAX,dword ptr [EBP + -0x4]
0068e9fb  MOV ECX,dword ptr [EAX]
0068e9fd  PUSH ECX
0068e9fe  MOV ECX,dword ptr [EBP + -0x2c]
0068ea01  CALL 0x0068f580
0068ea06  MOV EDX,dword ptr [EBP + -0x8]
0068ea09  MOV dword ptr [EDX],EAX
0068ea0b  MOV EAX,dword ptr [EBP + 0x8]
0068ea0e  MOV ECX,dword ptr [EAX + 0x8]
0068ea11  MOV dword ptr [EBP + -0xc],ECX
0068ea14  MOV EDX,dword ptr [EBP + -0x2c]
0068ea17  MOV EAX,dword ptr [EBP + -0xc]
0068ea1a  MOV dword ptr [EDX + 0x8],EAX
0068ea1d  MOV ECX,dword ptr [EBP + -0x2c]
0068ea20  MOV EDX,dword ptr [ECX + 0x4]
0068ea23  ADD EDX,0x4
0068ea26  MOV dword ptr [EBP + -0x10],EDX
0068ea29  MOV EAX,dword ptr [EBP + -0x10]
0068ea2c  MOV ECX,dword ptr [EAX]
0068ea2e  MOVSX EDX,byte ptr [ECX + 0x45]
0068ea32  TEST EDX,EDX
0068ea34  JNZ 0x0068eaad
0068ea36  MOV EAX,dword ptr [EBP + -0x2c]
0068ea39  MOV ECX,dword ptr [EAX + 0x4]
0068ea3c  ADD ECX,0x4
0068ea3f  MOV dword ptr [EBP + -0x14],ECX
0068ea42  MOV EDX,dword ptr [EBP + -0x14]
0068ea45  MOV EAX,dword ptr [EDX]
0068ea47  MOV dword ptr [EBP + -0x18],EAX
0068ea4a  MOV ECX,dword ptr [EBP + -0x18]
0068ea4d  MOV EDX,dword ptr [ECX]
0068ea4f  MOVSX EAX,byte ptr [EDX + 0x45]
0068ea53  TEST EAX,EAX
0068ea55  JNZ 0x0068ea61
0068ea57  MOV ECX,dword ptr [EBP + -0x18]
0068ea5a  MOV EDX,dword ptr [ECX]
0068ea5c  MOV dword ptr [EBP + -0x18],EDX
0068ea5f  JMP 0x0068ea4a
0068ea61  MOV EAX,dword ptr [EBP + -0x2c]
0068ea64  MOV ECX,dword ptr [EAX + 0x4]
0068ea67  MOV dword ptr [EBP + -0x1c],ECX
0068ea6a  MOV EDX,dword ptr [EBP + -0x1c]
0068ea6d  MOV EAX,dword ptr [EBP + -0x18]
0068ea70  MOV dword ptr [EDX],EAX
0068ea72  MOV ECX,dword ptr [EBP + -0x2c]
0068ea75  MOV EDX,dword ptr [ECX + 0x4]
0068ea78  ADD EDX,0x4
0068ea7b  MOV dword ptr [EBP + -0x20],EDX
0068ea7e  MOV EAX,dword ptr [EBP + -0x20]
0068ea81  MOV ECX,dword ptr [EAX]
0068ea83  MOV dword ptr [EBP + -0x24],ECX
0068ea86  MOV EDX,dword ptr [EBP + -0x24]
0068ea89  MOV EAX,dword ptr [EDX + 0x8]
0068ea8c  MOVSX ECX,byte ptr [EAX + 0x45]
0068ea90  TEST ECX,ECX
0068ea92  JNZ 0x0068ea9f
0068ea94  MOV EDX,dword ptr [EBP + -0x24]
0068ea97  MOV EAX,dword ptr [EDX + 0x8]
0068ea9a  MOV dword ptr [EBP + -0x24],EAX
0068ea9d  JMP 0x0068ea86
0068ea9f  MOV ECX,dword ptr [EBP + -0x2c]
0068eaa2  MOV EDX,dword ptr [ECX + 0x4]
0068eaa5  MOV EAX,dword ptr [EBP + -0x24]
0068eaa8  MOV dword ptr [EDX + 0x8],EAX
0068eaab  JMP 0x0068ead0
0068eaad  MOV ECX,dword ptr [EBP + -0x2c]
0068eab0  MOV EDX,dword ptr [ECX + 0x4]
0068eab3  MOV dword ptr [EBP + -0x28],EDX
0068eab6  MOV EAX,dword ptr [EBP + -0x28]
0068eab9  MOV ECX,dword ptr [EBP + -0x2c]
0068eabc  MOV EDX,dword ptr [ECX + 0x4]
0068eabf  MOV dword ptr [EAX],EDX
0068eac1  MOV EAX,dword ptr [EBP + -0x2c]
0068eac4  MOV ECX,dword ptr [EAX + 0x4]
0068eac7  MOV EDX,dword ptr [EBP + -0x2c]
0068eaca  MOV EAX,dword ptr [EDX + 0x4]
0068eacd  MOV dword ptr [ECX + 0x8],EAX
0068ead0  MOV ESP,EBP
0068ead2  POP EBP
0068ead3  RET 0x4
