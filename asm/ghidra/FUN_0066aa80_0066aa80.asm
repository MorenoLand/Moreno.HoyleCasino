; FUN_0066aa80  0066aa80
0066aa80  PUSH EBP
0066aa81  MOV EBP,ESP
0066aa83  SUB ESP,0x28
0066aa86  PUSH ESI
0066aa87  MOV dword ptr [EBP + -0x20],ECX
0066aa8a  MOV ECX,dword ptr [EBP + -0x20]
0066aa8d  CALL 0x00615ef0
0066aa92  MOV EAX,dword ptr [EBP + -0x20]
0066aa95  MOV ECX,dword ptr [EAX + 0xcc]
0066aa9b  MOV ECX,dword ptr [ECX + 0x5c]
0066aa9e  CALL 0x00615260
0066aaa3  CMP EAX,-0x1
0066aaa6  JNZ 0x0066aaad
0066aaa8  JMP 0x0066ac27
0066aaad  MOV EDX,dword ptr [EBP + -0x20]
0066aab0  MOV EAX,dword ptr [EDX + 0xcc]
0066aab6  MOV ECX,dword ptr [EAX + 0x74]
0066aab9  CALL 0x00606570
0066aabe  MOV dword ptr [EBP + -0x24],EAX
0066aac1  CMP dword ptr [EBP + -0x24],0x6
0066aac5  JZ 0x0066aae0
0066aac7  CMP dword ptr [EBP + -0x24],0x7
0066aacb  JZ 0x0066ab91
0066aad1  CMP dword ptr [EBP + -0x24],0x8
0066aad5  JZ 0x0066ac05
0066aadb  JMP 0x0066ac27
0066aae0  MOV ECX,dword ptr [EBP + -0x20]
0066aae3  MOV EDX,dword ptr [ECX + 0xcc]
0066aae9  MOV EAX,dword ptr [EDX + 0x5c]
0066aaec  MOV dword ptr [EBP + -0x14],EAX
0066aaef  MOV ECX,dword ptr [EBP + -0x14]
0066aaf2  CALL 0x005e4390
0066aaf7  TEST EAX,EAX
0066aaf9  JZ 0x0066ab0f
0066aafb  MOV ECX,dword ptr [EBP + -0x14]
0066aafe  CALL 0x005e4390
0066ab03  MOV ECX,EAX
0066ab05  CALL 0x00629c70
0066ab0a  MOV dword ptr [EBP + -0x28],EAX
0066ab0d  JMP 0x0066ab16
0066ab0f  MOV dword ptr [EBP + -0x28],0x0
0066ab16  MOV ECX,dword ptr [EBP + -0x28]
0066ab19  PUSH ECX
0066ab1a  MOV ECX,dword ptr [0x0162ee84]
0066ab20  ADD ECX,0x5c
0066ab23  CALL 0x00666e40
0066ab28  MOV dword ptr [EBP + -0x8],EAX
0066ab2b  CMP dword ptr [EBP + -0x8],0x0
0066ab2f  JNZ 0x0066ab36
0066ab31  JMP 0x0066ac27
0066ab36  MOV EDX,dword ptr [EBP + -0x20]
0066ab39  MOV EAX,dword ptr [EDX + 0xcc]
0066ab3f  MOV ECX,dword ptr [EAX + 0x84]
0066ab45  MOV EDX,dword ptr [ECX + 0x8]
0066ab48  MOV dword ptr [EBP + -0x18],EDX
0066ab4b  PUSH 0x1
0066ab4d  PUSH 0x0
0066ab4f  PUSH 0x0
0066ab51  PUSH -0x1
0066ab53  MOV ECX,dword ptr [EBP + -0x20]
0066ab56  CALL 0x00615260
0066ab5b  PUSH EAX
0066ab5c  MOV EAX,dword ptr [EBP + -0x8]
0066ab5f  MOV ECX,dword ptr [EAX]
0066ab61  PUSH ECX
0066ab62  MOV EDX,dword ptr [EBP + -0x18]
0066ab65  PUSH EDX
0066ab66  MOV ECX,dword ptr [0x0162ee84]
0066ab6c  ADD ECX,0x5c
0066ab6f  CALL 0x00666740
0066ab74  PUSH EAX
0066ab75  MOV EAX,dword ptr [EBP + -0x20]
0066ab78  MOV ECX,dword ptr [EAX + 0xcc]
0066ab7e  MOV EDX,dword ptr [ECX + 0x84]
0066ab84  MOV ECX,dword ptr [EDX + 0x20]
0066ab87  CALL 0x00646fa0
0066ab8c  JMP 0x0066ac27
0066ab91  MOV EAX,dword ptr [EBP + -0x20]
0066ab94  MOV ECX,dword ptr [EAX + 0xcc]
0066ab9a  MOV EDX,dword ptr [ECX + 0x84]
0066aba0  MOV EAX,dword ptr [EDX + 0x8]
0066aba3  MOV dword ptr [EBP + -0x1c],EAX
0066aba6  MOV ECX,dword ptr [EBP + -0x1c]
0066aba9  PUSH ECX
0066abaa  MOV ECX,dword ptr [0x0162ee84]
0066abb0  CALL 0x00639520
0066abb5  MOV dword ptr [EBP + -0x4],EAX
0066abb8  PUSH 0x0
0066abba  PUSH -0x1
0066abbc  PUSH 0x0
0066abbe  MOV ECX,dword ptr [EBP + -0x20]
0066abc1  CALL 0x00615260
0066abc6  PUSH EAX
0066abc7  MOV ESI,dword ptr [EBP + -0x4]
0066abca  IMUL ESI,ESI,0x380
0066abd0  MOV EDX,dword ptr [EBP + -0x20]
0066abd3  MOV EAX,dword ptr [EDX + 0xcc]
0066abd9  MOV ECX,dword ptr [EAX + 0x5c]
0066abdc  CALL 0x00615260
0066abe1  IMUL EAX,EAX,0x2c
0066abe4  MOV ECX,dword ptr [ESI + EAX*0x1 + 0x763580]
0066abeb  PUSH ECX
0066abec  MOV EDX,dword ptr [EBP + -0x20]
0066abef  MOV EAX,dword ptr [EDX + 0xcc]
0066abf5  MOV ECX,dword ptr [EAX + 0x84]
0066abfb  MOV ECX,dword ptr [ECX + 0x20]
0066abfe  CALL 0x00647210
0066ac03  JMP 0x0066ac27
0066ac05  PUSH 0x0
0066ac07  MOV ECX,dword ptr [EBP + -0x20]
0066ac0a  CALL 0x00615260
0066ac0f  PUSH EAX
0066ac10  MOV EDX,dword ptr [EBP + -0x20]
0066ac13  MOV EAX,dword ptr [EDX + 0xcc]
0066ac19  MOV ECX,dword ptr [EAX + 0x84]
0066ac1f  MOV ECX,dword ptr [ECX + 0x20]
0066ac22  CALL 0x006473f0
0066ac27  POP ESI
0066ac28  MOV ESP,EBP
0066ac2a  POP EBP
0066ac2b  RET
