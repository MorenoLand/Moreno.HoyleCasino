; FUN_005fdff0  005fdff0
005fdff0  PUSH EBP
005fdff1  MOV EBP,ESP
005fdff3  PUSH -0x1
005fdff5  PUSH 0x6aa6cc
005fdffa  MOV EAX,FS:[0x0]
005fe000  PUSH EAX
005fe001  SUB ESP,0x68
005fe004  MOV EAX,[0x00781870]
005fe009  XOR EAX,EBP
005fe00b  MOV dword ptr [EBP + -0x10],EAX
005fe00e  PUSH EAX
005fe00f  LEA EAX,[EBP + -0xc]
005fe012  MOV FS:[0x0],EAX
005fe018  MOV dword ptr [EBP + -0x6c],ECX
005fe01b  MOV EAX,dword ptr [EBP + 0xc]
005fe01e  PUSH EAX
005fe01f  MOV ECX,dword ptr [EBP + -0x6c]
005fe022  CALL 0x005ff060
005fe027  MOV dword ptr [EBP + -0x58],EAX
005fe02a  CMP dword ptr [EBP + -0x58],0x0
005fe02e  JNZ 0x005fe035
005fe030  JMP 0x005fe1a1
005fe035  LEA ECX,[EBP + -0x54]
005fe038  PUSH ECX
005fe039  MOV EDX,dword ptr [EBP + 0x8]
005fe03c  PUSH EDX
005fe03d  MOV EAX,[0x015e55e4]
005fe042  MOV EDX,dword ptr [EAX]
005fe044  MOV ECX,dword ptr [0x015e55e4]
005fe04a  MOV EAX,dword ptr [EDX + 0x48]
005fe04d  CALL EAX
005fe04f  MOV ECX,dword ptr [EBP + -0x54]
005fe052  PUSH ECX
005fe053  MOV ECX,dword ptr [EBP + -0x58]
005fe056  CALL 0x005f53e0
005fe05b  MOV EDX,dword ptr [EBP + -0x50]
005fe05e  PUSH EDX
005fe05f  MOV EAX,[0x015e55e8]
005fe064  MOV EDX,dword ptr [EAX]
005fe066  MOV ECX,dword ptr [0x015e55e8]
005fe06c  MOV EAX,dword ptr [EDX + 0x14]
005fe06f  CALL EAX
005fe071  PUSH EAX
005fe072  MOV ECX,dword ptr [EBP + -0x58]
005fe075  MOV EDX,dword ptr [ECX]
005fe077  MOV ECX,dword ptr [EBP + -0x58]
005fe07a  MOV EAX,dword ptr [EDX + 0xe0]
005fe080  CALL EAX
005fe082  MOV ECX,dword ptr [EBP + -0x58]
005fe085  MOV EDX,dword ptr [EBP + -0x4c]
005fe088  MOV dword ptr [ECX + 0x1ec],EDX
005fe08e  MOV EAX,dword ptr [EBP + -0x58]
005fe091  CMP dword ptr [EAX + 0x1f4],0x0
005fe098  JZ 0x005fe0d9
005fe09a  MOV ECX,dword ptr [EBP + -0x58]
005fe09d  MOV EDX,dword ptr [ECX + 0x1f4]
005fe0a3  MOV dword ptr [EBP + -0x60],EDX
005fe0a6  MOV EAX,dword ptr [EBP + -0x60]
005fe0a9  MOV dword ptr [EBP + -0x5c],EAX
005fe0ac  CMP dword ptr [EBP + -0x5c],0x0
005fe0b0  JZ 0x005fe0c5
005fe0b2  PUSH 0x1
005fe0b4  MOV ECX,dword ptr [EBP + -0x5c]
005fe0b7  MOV EDX,dword ptr [ECX]
005fe0b9  MOV ECX,dword ptr [EBP + -0x5c]
005fe0bc  MOV EAX,dword ptr [EDX]
005fe0be  CALL EAX
005fe0c0  MOV dword ptr [EBP + -0x70],EAX
005fe0c3  JMP 0x005fe0cc
005fe0c5  MOV dword ptr [EBP + -0x70],0x0
005fe0cc  MOV ECX,dword ptr [EBP + -0x58]
005fe0cf  MOV dword ptr [ECX + 0x1f4],0x0
005fe0d9  CMP dword ptr [EBP + -0x4c],-0x1
005fe0dd  JZ 0x005fe166
005fe0e3  PUSH 0x178
005fe0e8  CALL 0x00686d82
005fe0ed  ADD ESP,0x4
005fe0f0  MOV dword ptr [EBP + -0x68],EAX
005fe0f3  MOV dword ptr [EBP + -0x4],0x0
005fe0fa  CMP dword ptr [EBP + -0x68],0x0
005fe0fe  JZ 0x005fe10d
005fe100  MOV ECX,dword ptr [EBP + -0x68]
005fe103  CALL 0x005eaaf0
005fe108  MOV dword ptr [EBP + -0x74],EAX
005fe10b  JMP 0x005fe114
005fe10d  MOV dword ptr [EBP + -0x74],0x0
005fe114  MOV EDX,dword ptr [EBP + -0x74]
005fe117  MOV dword ptr [EBP + -0x64],EDX
005fe11a  MOV dword ptr [EBP + -0x4],0xffffffff
005fe121  MOV EAX,dword ptr [EBP + -0x58]
005fe124  MOV ECX,dword ptr [EBP + -0x64]
005fe127  MOV dword ptr [EAX + 0x1f4],ECX
005fe12d  MOV EDX,dword ptr [EBP + -0x58]
005fe130  MOV EAX,dword ptr [EDX + 0x1f4]
005fe136  MOV ECX,dword ptr [EBP + -0x6c]
005fe139  MOV dword ptr [EAX + 0x4],ECX
005fe13c  PUSH -0x1
005fe13e  PUSH 0x2
005fe140  PUSH 0x0
005fe142  PUSH 0x0
005fe144  MOV EDX,dword ptr [0x015e55e8]
005fe14a  MOV EAX,dword ptr [EDX]
005fe14c  MOV ECX,dword ptr [0x015e55e8]
005fe152  MOV EDX,dword ptr [EAX + 0x60]
005fe155  CALL EDX
005fe157  PUSH EAX
005fe158  MOV EAX,dword ptr [EBP + -0x58]
005fe15b  MOV ECX,dword ptr [EAX + 0x1f4]
005fe161  CALL 0x005eae80
005fe166  MOVSX ECX,byte ptr [EBP + -0x48]
005fe16a  TEST ECX,ECX
005fe16c  JZ 0x005fe18c
005fe16e  LEA EDX,[EBP + -0x44]
005fe171  PUSH EDX
005fe172  MOV AL,byte ptr [EBP + -0x48]
005fe175  PUSH EAX
005fe176  MOV ECX,dword ptr [EBP + -0x6c]
005fe179  CALL 0x005fe770
005fe17e  LEA ECX,[EBP + -0x44]
005fe181  PUSH ECX
005fe182  MOV ECX,dword ptr [EBP + -0x58]
005fe185  CALL 0x005fd730
005fe18a  JMP 0x005fe199
005fe18c  PUSH 0x6b27f8
005fe191  MOV ECX,dword ptr [EBP + -0x58]
005fe194  CALL 0x005fd730
005fe199  MOV ECX,dword ptr [EBP + -0x6c]
005fe19c  CALL 0x005fdd10
005fe1a1  MOV ECX,dword ptr [EBP + -0xc]
005fe1a4  MOV dword ptr FS:[0x0],ECX
005fe1ab  POP ECX
005fe1ac  MOV ECX,dword ptr [EBP + -0x10]
005fe1af  XOR ECX,EBP
005fe1b1  CALL 0x00686d72
005fe1b6  MOV ESP,EBP
005fe1b8  POP EBP
005fe1b9  RET 0x8
