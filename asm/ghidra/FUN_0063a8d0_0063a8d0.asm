; FUN_0063a8d0  0063a8d0
0063a8d0  PUSH EBP
0063a8d1  MOV EBP,ESP
0063a8d3  PUSH -0x1
0063a8d5  PUSH 0x6abb34
0063a8da  MOV EAX,FS:[0x0]
0063a8e0  PUSH EAX
0063a8e1  SUB ESP,0x40
0063a8e4  MOV EAX,[0x00781870]
0063a8e9  XOR EAX,EBP
0063a8eb  PUSH EAX
0063a8ec  LEA EAX,[EBP + -0xc]
0063a8ef  MOV FS:[0x0],EAX
0063a8f5  MOV dword ptr [EBP + -0x44],ECX
0063a8f8  MOV dword ptr [EBP + -0x10],0x0
0063a8ff  MOV dword ptr [EBP + -0x30],0x0
0063a906  CMP dword ptr [EBP + 0xc],0x0
0063a90a  JNZ 0x0063a917
0063a90c  MOV EAX,[0x0162ee84]
0063a911  MOV ECX,dword ptr [EAX + 0x14]
0063a914  MOV dword ptr [EBP + 0xc],ECX
0063a917  CMP dword ptr [EBP + 0x8],-0x1
0063a91b  JZ 0x0063a92b
0063a91d  MOV ECX,dword ptr [EBP + -0x44]
0063a920  CALL 0x0063aac0
0063a925  MOV dword ptr [EAX],0x1
0063a92b  MOV EDX,dword ptr [EBP + 0x8]
0063a92e  PUSH EDX
0063a92f  MOV ECX,dword ptr [EBP + -0x44]
0063a932  CALL 0x0063b490
0063a937  MOV EAX,dword ptr [EBP + -0x44]
0063a93a  CMP dword ptr [EAX + 0x20],0x0
0063a93e  JZ 0x0063a96f
0063a940  MOV ECX,dword ptr [EBP + -0x44]
0063a943  MOV EDX,dword ptr [ECX + 0x20]
0063a946  MOV dword ptr [EBP + -0x38],EDX
0063a949  MOV EAX,dword ptr [EBP + -0x38]
0063a94c  MOV dword ptr [EBP + -0x34],EAX
0063a94f  CMP dword ptr [EBP + -0x34],0x0
0063a953  JZ 0x0063a968
0063a955  PUSH 0x1
0063a957  MOV ECX,dword ptr [EBP + -0x34]
0063a95a  MOV EDX,dword ptr [ECX]
0063a95c  MOV ECX,dword ptr [EBP + -0x34]
0063a95f  MOV EAX,dword ptr [EDX]
0063a961  CALL EAX
0063a963  MOV dword ptr [EBP + -0x48],EAX
0063a966  JMP 0x0063a96f
0063a968  MOV dword ptr [EBP + -0x48],0x0
0063a96f  PUSH 0x60
0063a971  CALL 0x00686d82
0063a976  ADD ESP,0x4
0063a979  MOV dword ptr [EBP + -0x40],EAX
0063a97c  MOV dword ptr [EBP + -0x4],0x0
0063a983  CMP dword ptr [EBP + -0x40],0x0
0063a987  JZ 0x0063a996
0063a989  MOV ECX,dword ptr [EBP + -0x40]
0063a98c  CALL 0x006454f0
0063a991  MOV dword ptr [EBP + -0x4c],EAX
0063a994  JMP 0x0063a99d
0063a996  MOV dword ptr [EBP + -0x4c],0x0
0063a99d  MOV ECX,dword ptr [EBP + -0x4c]
0063a9a0  MOV dword ptr [EBP + -0x3c],ECX
0063a9a3  MOV dword ptr [EBP + -0x4],0xffffffff
0063a9aa  MOV EDX,dword ptr [EBP + -0x44]
0063a9ad  MOV EAX,dword ptr [EBP + -0x3c]
0063a9b0  MOV dword ptr [EDX + 0x20],EAX
0063a9b3  MOV CL,byte ptr [EBP + 0x18]
0063a9b6  PUSH ECX
0063a9b7  MOV DL,byte ptr [EBP + 0x14]
0063a9ba  PUSH EDX
0063a9bb  MOV AL,byte ptr [EBP + 0x10]
0063a9be  PUSH EAX
0063a9bf  MOV ECX,dword ptr [EBP + 0xc]
0063a9c2  PUSH ECX
0063a9c3  MOV EDX,dword ptr [EBP + -0x44]
0063a9c6  PUSH EDX
0063a9c7  MOV EAX,dword ptr [EBP + -0x44]
0063a9ca  MOV ECX,dword ptr [EAX + 0x20]
0063a9cd  CALL 0x00645820
0063a9d2  PUSH -0x1
0063a9d4  MOV ECX,dword ptr [0x0162ee84]
0063a9da  MOV EDX,dword ptr [ECX]
0063a9dc  MOV ECX,dword ptr [0x0162ee84]
0063a9e2  MOV EAX,dword ptr [EDX + 0x33c]
0063a9e8  CALL EAX
0063a9ea  MOVZX ECX,AL
0063a9ed  TEST ECX,ECX
0063a9ef  JZ 0x0063aa6a
0063a9f1  PUSH -0x1
0063a9f3  LEA EDX,[EBP + -0x2c]
0063a9f6  PUSH EDX
0063a9f7  MOV ECX,dword ptr [0x0162ee84]
0063a9fd  CALL 0x005f3bf0
0063aa02  PUSH EAX
0063aa03  MOV EAX,[0x0162ee84]
0063aa08  MOV EDX,dword ptr [EAX]
0063aa0a  MOV ECX,dword ptr [0x0162ee84]
0063aa10  MOV EAX,dword ptr [EDX + 0x364]
0063aa16  CALL EAX
0063aa18  MOV ECX,dword ptr [EBP + -0x44]
0063aa1b  CMP dword ptr [ECX + 0x4],-0x1
0063aa1f  JLE 0x0063aa6a
0063aa21  MOV EDX,dword ptr [EBP + -0x44]
0063aa24  MOV EAX,dword ptr [EDX + 0x4]
0063aa27  CMP EAX,dword ptr [EBP + -0x24]
0063aa2a  JGE 0x0063aa6a
0063aa2c  MOV ECX,dword ptr [EBP + -0x44]
0063aa2f  MOV EDX,dword ptr [ECX + 0x4]
0063aa32  PUSH EDX
0063aa33  MOV EAX,[0x0162ee80]
0063aa38  MOV EDX,dword ptr [EAX]
0063aa3a  MOV ECX,dword ptr [0x0162ee80]
0063aa40  MOV EAX,dword ptr [EDX + 0x1c4]
0063aa46  CALL EAX
0063aa48  MOV dword ptr [EBP + -0x10],EAX
0063aa4b  MOV ECX,dword ptr [EBP + -0x44]
0063aa4e  MOV EDX,dword ptr [ECX + 0x4]
0063aa51  PUSH EDX
0063aa52  MOV EAX,[0x0162ee80]
0063aa57  MOV EDX,dword ptr [EAX]
0063aa59  MOV ECX,dword ptr [0x0162ee80]
0063aa5f  MOV EAX,dword ptr [EDX + 0x1c8]
0063aa65  CALL EAX
0063aa67  MOV dword ptr [EBP + -0x30],EAX
0063aa6a  MOV ECX,dword ptr [EBP + -0x30]
0063aa6d  PUSH ECX
0063aa6e  MOV EDX,dword ptr [EBP + -0x10]
0063aa71  PUSH EDX
0063aa72  MOV EAX,dword ptr [EBP + -0x44]
0063aa75  MOV ECX,dword ptr [EAX + 0x20]
0063aa78  CALL 0x00646150
0063aa7d  MOV ECX,dword ptr [0x0162ee80]
0063aa83  MOV EDX,dword ptr [ECX]
0063aa85  MOV ECX,dword ptr [0x0162ee80]
0063aa8b  MOV EAX,dword ptr [EDX + 0xa4]
0063aa91  CALL EAX
0063aa93  MOVZX ECX,AL
0063aa96  TEST ECX,ECX
0063aa98  JZ 0x0063aaaf
0063aa9a  CMP dword ptr [EBP + -0x10],-0x1
0063aa9e  JZ 0x0063aaaf
0063aaa0  PUSH 0x0
0063aaa2  PUSH 0x0
0063aaa4  MOV EDX,dword ptr [EBP + -0x44]
0063aaa7  MOV ECX,dword ptr [EDX + 0x20]
0063aaaa  CALL 0x006464d0
0063aaaf  MOV ECX,dword ptr [EBP + -0xc]
0063aab2  MOV dword ptr FS:[0x0],ECX
0063aab9  POP ECX
0063aaba  MOV ESP,EBP
0063aabc  POP EBP
0063aabd  RET 0x14
