; FUN_0042a990  0042a990
0042a990  PUSH EBP
0042a991  MOV EBP,ESP
0042a993  PUSH -0x1
0042a995  PUSH 0x69e4d3
0042a99a  MOV EAX,FS:[0x0]
0042a9a0  PUSH EAX
0042a9a1  SUB ESP,0x48
0042a9a4  MOV EAX,[0x00781870]
0042a9a9  XOR EAX,EBP
0042a9ab  PUSH EAX
0042a9ac  LEA EAX,[EBP + -0xc]
0042a9af  MOV FS:[0x0],EAX
0042a9b5  MOV dword ptr [EBP + -0x50],ECX
0042a9b8  MOV dword ptr [EBP + -0x38],0xf
0042a9bf  MOV dword ptr [EBP + -0x34],0x82
0042a9c6  MOV dword ptr [EBP + -0x30],0xf
0042a9cd  MOV dword ptr [EBP + -0x2c],0x82
0042a9d4  MOV dword ptr [EBP + -0x28],0xf
0042a9db  MOV dword ptr [EBP + -0x24],0x82
0042a9e2  MOV dword ptr [EBP + -0x20],0xf
0042a9e9  MOV dword ptr [EBP + -0x1c],0x82
0042a9f0  PUSH 0x1
0042a9f2  MOV EAX,[0x0162ee80]
0042a9f7  MOV ECX,dword ptr [EAX + 0x4]
0042a9fa  MOV EDX,dword ptr [0x0162ee80]
0042aa00  MOV EAX,dword ptr [EDX + 0x4]
0042aa03  MOV EDX,dword ptr [ECX]
0042aa05  MOV ECX,EAX
0042aa07  MOV EAX,dword ptr [EDX + 0x4]
0042aa0a  CALL EAX
0042aa0c  MOV dword ptr [EBP + -0x18],0x0
0042aa13  JMP 0x0042aa1e
0042aa15  MOV ECX,dword ptr [EBP + -0x18]
0042aa18  ADD ECX,0x1
0042aa1b  MOV dword ptr [EBP + -0x18],ECX
0042aa1e  CMP dword ptr [EBP + -0x18],0x4c
0042aa22  JGE 0x0042abf3
0042aa28  MOV EDX,dword ptr [EBP + -0x18]
0042aa2b  MOV EAX,[0x007906d4]
0042aa30  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042aa34  CMP dword ptr [ECX + 0x110],0x0
0042aa3b  JZ 0x0042aa3f
0042aa3d  JMP 0x0042aa15
0042aa3f  MOV dword ptr [EBP + -0x40],0x0
0042aa46  JMP 0x0042aa51
0042aa48  MOV EDX,dword ptr [EBP + -0x40]
0042aa4b  ADD EDX,0x1
0042aa4e  MOV dword ptr [EBP + -0x40],EDX
0042aa51  CMP dword ptr [EBP + -0x40],0x4
0042aa55  JGE 0x0042abee
0042aa5b  PUSH 0x0
0042aa5d  MOV EAX,dword ptr [EBP + -0x40]
0042aa60  PUSH EAX
0042aa61  MOV ECX,dword ptr [EBP + -0x18]
0042aa64  MOV EDX,dword ptr [EBP + -0x50]
0042aa67  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x14]
0042aa6b  MOV ECX,dword ptr [EBP + -0x18]
0042aa6e  MOV EDX,dword ptr [EBP + -0x50]
0042aa71  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042aa75  MOV EAX,dword ptr [EAX]
0042aa77  MOV EDX,dword ptr [EAX + 0xdc]
0042aa7d  CALL EDX
0042aa7f  MOV ECX,dword ptr [EBP + -0x40]
0042aa82  ADD EAX,dword ptr [EBP + ECX*0x8 + -0x38]
0042aa86  MOV dword ptr [EBP + -0x10],EAX
0042aa89  PUSH 0x0
0042aa8b  MOV EDX,dword ptr [EBP + -0x40]
0042aa8e  PUSH EDX
0042aa8f  MOV EAX,dword ptr [EBP + -0x18]
0042aa92  MOV ECX,dword ptr [EBP + -0x50]
0042aa95  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
0042aa99  MOV EAX,dword ptr [EBP + -0x18]
0042aa9c  MOV ECX,dword ptr [EBP + -0x50]
0042aa9f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x14]
0042aaa3  MOV EDX,dword ptr [EDX]
0042aaa5  MOV EAX,dword ptr [EDX + 0xe0]
0042aaab  CALL EAX
0042aaad  MOV ECX,dword ptr [EBP + -0x40]
0042aab0  ADD EAX,dword ptr [EBP + ECX*0x8 + -0x34]
0042aab4  MOV dword ptr [EBP + -0x3c],EAX
0042aab7  PUSH 0x0
0042aab9  MOV EDX,dword ptr [EBP + -0x40]
0042aabc  PUSH EDX
0042aabd  MOV EAX,dword ptr [EBP + -0x18]
0042aac0  MOV ECX,dword ptr [EBP + -0x50]
0042aac3  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x14]
0042aac7  CALL 0x0042c8a0
0042aacc  PUSH 0x0
0042aace  MOV EDX,dword ptr [EBP + -0x40]
0042aad1  PUSH EDX
0042aad2  MOV EAX,dword ptr [EBP + -0x18]
0042aad5  MOV ECX,dword ptr [EBP + -0x50]
0042aad8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x14]
0042aadc  CALL 0x0042ca40
0042aae1  MOV dword ptr [EBP + -0x44],0x0
0042aae8  JMP 0x0042aaf3
0042aaea  MOV EDX,dword ptr [EBP + -0x44]
0042aaed  ADD EDX,0x1
0042aaf0  MOV dword ptr [EBP + -0x44],EDX
0042aaf3  PUSH 0x0
0042aaf5  MOV EAX,dword ptr [EBP + -0x40]
0042aaf8  PUSH EAX
0042aaf9  MOV ECX,dword ptr [EBP + -0x18]
0042aafc  MOV EDX,dword ptr [EBP + -0x50]
0042aaff  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042ab03  CALL 0x005ccdf0
0042ab08  CMP dword ptr [EBP + -0x44],EAX
0042ab0b  JG 0x0042abe9
0042ab11  MOV EAX,dword ptr [EBP + -0x18]
0042ab14  MOV ECX,dword ptr [EBP + -0x50]
0042ab17  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
0042ab1b  MOV EAX,dword ptr [EBP + -0x40]
0042ab1e  IMUL EAX,EAX,0x1e0
0042ab24  LEA ECX,[EDX + EAX*0x1 + 0x17c]
0042ab2b  MOV EDX,dword ptr [EBP + -0x44]
0042ab2e  MOV EAX,dword ptr [ECX + EDX*0x4]
0042ab31  MOV dword ptr [EBP + -0x14],EAX
0042ab34  CMP dword ptr [EBP + -0x14],0x0
0042ab38  JNZ 0x0042ab3f
0042ab3a  JMP 0x0042abe9
0042ab3f  PUSH 0x4
0042ab41  MOV ECX,dword ptr [0x0162ee84]
0042ab47  CALL 0x00637810
0042ab4c  MOV ECX,dword ptr [EBP + -0x14]
0042ab4f  MOV dword ptr [ECX + 0x184],EAX
0042ab55  MOV EDX,dword ptr [EBP + -0x14]
0042ab58  CMP dword ptr [EDX + 0x184],0x0
0042ab5f  JZ 0x0042abcf
0042ab61  MOV ECX,dword ptr [0x0162ee84]
0042ab67  CALL 0x00637630
0042ab6c  MOVZX EAX,AL
0042ab6f  TEST EAX,EAX
0042ab71  JZ 0x0042abcf
0042ab73  PUSH 0x2c
0042ab75  CALL 0x00686d82
0042ab7a  ADD ESP,0x4
0042ab7d  MOV dword ptr [EBP + -0x4c],EAX
0042ab80  MOV dword ptr [EBP + -0x4],0x0
0042ab87  CMP dword ptr [EBP + -0x4c],0x0
0042ab8b  JZ 0x0042abad
0042ab8d  PUSH 0x0
0042ab8f  MOV ECX,dword ptr [EBP + -0x3c]
0042ab92  PUSH ECX
0042ab93  MOV EDX,dword ptr [EBP + -0x10]
0042ab96  PUSH EDX
0042ab97  MOV EAX,[0x0162ee80]
0042ab9c  MOV ECX,dword ptr [EAX + 0x4]
0042ab9f  PUSH ECX
0042aba0  MOV ECX,dword ptr [EBP + -0x4c]
0042aba3  CALL 0x00606e60
0042aba8  MOV dword ptr [EBP + -0x54],EAX
0042abab  JMP 0x0042abb4
0042abad  MOV dword ptr [EBP + -0x54],0x0
0042abb4  MOV EDX,dword ptr [EBP + -0x54]
0042abb7  MOV dword ptr [EBP + -0x48],EDX
0042abba  MOV dword ptr [EBP + -0x4],0xffffffff
0042abc1  MOV EAX,dword ptr [EBP + -0x48]
0042abc4  PUSH EAX
0042abc5  MOV ECX,dword ptr [EBP + -0x14]
0042abc8  CALL 0x005f6050
0042abcd  JMP 0x0042abe4
0042abcf  MOV ECX,dword ptr [EBP + -0x3c]
0042abd2  PUSH ECX
0042abd3  MOV EDX,dword ptr [EBP + -0x10]
0042abd6  PUSH EDX
0042abd7  MOV EAX,dword ptr [EBP + -0x14]
0042abda  MOV EDX,dword ptr [EAX]
0042abdc  MOV ECX,dword ptr [EBP + -0x14]
0042abdf  MOV EAX,dword ptr [EDX + 0x44]
0042abe2  CALL EAX
0042abe4  JMP 0x0042aaea
0042abe9  JMP 0x0042aa48
0042abee  JMP 0x0042aa15
0042abf3  PUSH 0x0
0042abf5  MOV ECX,dword ptr [0x0162ee80]
0042abfb  MOV EDX,dword ptr [ECX + 0x4]
0042abfe  MOV EAX,[0x0162ee80]
0042ac03  MOV ECX,dword ptr [EAX + 0x4]
0042ac06  MOV EDX,dword ptr [EDX]
0042ac08  MOV EAX,dword ptr [EDX + 0x1c]
0042ac0b  CALL EAX
0042ac0d  MOV ECX,dword ptr [EBP + -0xc]
0042ac10  MOV dword ptr FS:[0x0],ECX
0042ac17  POP ECX
0042ac18  MOV ESP,EBP
0042ac1a  POP EBP
0042ac1b  RET
