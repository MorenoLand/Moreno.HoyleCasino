; FUN_005bc040  005bc040
005bc040  PUSH EBP
005bc041  MOV EBP,ESP
005bc043  SUB ESP,0x168
005bc049  MOV dword ptr [EBP + 0xfffffeb8],ECX
005bc04f  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc055  CMP EAX,dword ptr [EBP + 0x8]
005bc058  JZ 0x005bc3d4
005bc05e  MOV ECX,dword ptr [EBP + 0x8]
005bc061  CMP dword ptr [ECX + 0x4],0x0
005bc065  JNZ 0x005bc073
005bc067  MOV dword ptr [EBP + 0xfffffeb4],0x0
005bc071  JMP 0x005bc088
005bc073  MOV EDX,dword ptr [EBP + 0x8]
005bc076  MOV EAX,dword ptr [EBP + 0x8]
005bc079  MOV ECX,dword ptr [EDX + 0x8]
005bc07c  SUB ECX,dword ptr [EAX + 0x4]
005bc07f  SAR ECX,0x2
005bc082  MOV dword ptr [EBP + 0xfffffeb4],ECX
005bc088  CMP dword ptr [EBP + 0xfffffeb4],0x0
005bc08f  JNZ 0x005bc0a1
005bc091  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc097  CALL 0x005bc3e0
005bc09c  JMP 0x005bc3d4
005bc0a1  MOV EDX,dword ptr [EBP + 0x8]
005bc0a4  CMP dword ptr [EDX + 0x4],0x0
005bc0a8  JNZ 0x005bc0b6
005bc0aa  MOV dword ptr [EBP + 0xfffffeb0],0x0
005bc0b4  JMP 0x005bc0cb
005bc0b6  MOV EAX,dword ptr [EBP + 0x8]
005bc0b9  MOV ECX,dword ptr [EBP + 0x8]
005bc0bc  MOV EDX,dword ptr [EAX + 0x8]
005bc0bf  SUB EDX,dword ptr [ECX + 0x4]
005bc0c2  SAR EDX,0x2
005bc0c5  MOV dword ptr [EBP + 0xfffffeb0],EDX
005bc0cb  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc0d1  CMP dword ptr [EAX + 0x4],0x0
005bc0d5  JNZ 0x005bc0e3
005bc0d7  MOV dword ptr [EBP + 0xfffffeac],0x0
005bc0e1  JMP 0x005bc0fe
005bc0e3  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc0e9  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc0ef  MOV EAX,dword ptr [ECX + 0x8]
005bc0f2  SUB EAX,dword ptr [EDX + 0x4]
005bc0f5  SAR EAX,0x2
005bc0f8  MOV dword ptr [EBP + 0xfffffeac],EAX
005bc0fe  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005bc104  CMP ECX,dword ptr [EBP + 0xfffffeac]
005bc10a  JA 0x005bc19b
005bc110  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc116  MOV EAX,dword ptr [EDX + 0x4]
005bc119  PUSH EAX
005bc11a  MOV ECX,dword ptr [EBP + 0x8]
005bc11d  MOV EDX,dword ptr [ECX + 0x8]
005bc120  PUSH EDX
005bc121  MOV EAX,dword ptr [EBP + 0x8]
005bc124  MOV ECX,dword ptr [EAX + 0x4]
005bc127  PUSH ECX
005bc128  CALL 0x005c0980
005bc12d  ADD ESP,0xc
005bc130  MOV dword ptr [EBP + -0x4],EAX
005bc133  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc139  MOV EAX,dword ptr [EDX + 0x8]
005bc13c  MOV dword ptr [EBP + -0x58],EAX
005bc13f  MOV ECX,dword ptr [EBP + -0x58]
005bc142  MOV dword ptr [EBP + -0x54],ECX
005bc145  MOV EDX,dword ptr [EBP + -0x4]
005bc148  MOV dword ptr [EBP + -0x50],EDX
005bc14b  MOV AL,byte ptr [EBP + -0x4c]
005bc14e  MOV byte ptr [EBP + -0x4b],AL
005bc151  MOV ECX,dword ptr [EBP + 0x8]
005bc154  CMP dword ptr [ECX + 0x4],0x0
005bc158  JNZ 0x005bc166
005bc15a  MOV dword ptr [EBP + 0xfffffea8],0x0
005bc164  JMP 0x005bc17b
005bc166  MOV EDX,dword ptr [EBP + 0x8]
005bc169  MOV EAX,dword ptr [EBP + 0x8]
005bc16c  MOV ECX,dword ptr [EDX + 0x8]
005bc16f  SUB ECX,dword ptr [EAX + 0x4]
005bc172  SAR ECX,0x2
005bc175  MOV dword ptr [EBP + 0xfffffea8],ECX
005bc17b  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc181  MOV EAX,dword ptr [EDX + 0x4]
005bc184  MOV ECX,dword ptr [EBP + 0xfffffea8]
005bc18a  LEA EDX,[EAX + ECX*0x4]
005bc18d  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc193  MOV dword ptr [EAX + 0x8],EDX
005bc196  JMP 0x005bc3d4
005bc19b  MOV ECX,dword ptr [EBP + 0x8]
005bc19e  CMP dword ptr [ECX + 0x4],0x0
005bc1a2  JNZ 0x005bc1b0
005bc1a4  MOV dword ptr [EBP + 0xfffffea4],0x0
005bc1ae  JMP 0x005bc1c5
005bc1b0  MOV EDX,dword ptr [EBP + 0x8]
005bc1b3  MOV EAX,dword ptr [EBP + 0x8]
005bc1b6  MOV ECX,dword ptr [EDX + 0x8]
005bc1b9  SUB ECX,dword ptr [EAX + 0x4]
005bc1bc  SAR ECX,0x2
005bc1bf  MOV dword ptr [EBP + 0xfffffea4],ECX
005bc1c5  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc1cb  CMP dword ptr [EDX + 0x4],0x0
005bc1cf  JNZ 0x005bc1dd
005bc1d1  MOV dword ptr [EBP + 0xfffffea0],0x0
005bc1db  JMP 0x005bc1f8
005bc1dd  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc1e3  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc1e9  MOV EDX,dword ptr [EAX + 0xc]
005bc1ec  SUB EDX,dword ptr [ECX + 0x4]
005bc1ef  SAR EDX,0x2
005bc1f2  MOV dword ptr [EBP + 0xfffffea0],EDX
005bc1f8  MOV EAX,dword ptr [EBP + 0xfffffea4]
005bc1fe  CMP EAX,dword ptr [EBP + 0xfffffea0]
005bc204  JA 0x005bc2b6
005bc20a  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc210  CMP dword ptr [ECX + 0x4],0x0
005bc214  JNZ 0x005bc222
005bc216  MOV dword ptr [EBP + 0xfffffe9c],0x0
005bc220  JMP 0x005bc23d
005bc222  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc228  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc22e  MOV ECX,dword ptr [EDX + 0x8]
005bc231  SUB ECX,dword ptr [EAX + 0x4]
005bc234  SAR ECX,0x2
005bc237  MOV dword ptr [EBP + 0xfffffe9c],ECX
005bc23d  MOV EDX,dword ptr [EBP + 0x8]
005bc240  MOV EAX,dword ptr [EDX + 0x4]
005bc243  MOV ECX,dword ptr [EBP + 0xfffffe9c]
005bc249  LEA EDX,[EAX + ECX*0x4]
005bc24c  MOV dword ptr [EBP + -0x8],EDX
005bc24f  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc255  MOV ECX,dword ptr [EAX + 0x4]
005bc258  PUSH ECX
005bc259  MOV EDX,dword ptr [EBP + -0x8]
005bc25c  PUSH EDX
005bc25d  MOV EAX,dword ptr [EBP + 0x8]
005bc260  MOV ECX,dword ptr [EAX + 0x4]
005bc263  PUSH ECX
005bc264  CALL 0x005c0980
005bc269  ADD ESP,0xc
005bc26c  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc272  MOV EAX,dword ptr [EDX + 0x8]
005bc275  MOV dword ptr [EBP + 0xffffff5c],EAX
005bc27b  MOV ECX,dword ptr [EBP + 0x8]
005bc27e  MOV EDX,dword ptr [ECX + 0x8]
005bc281  MOV dword ptr [EBP + 0xffffff60],EDX
005bc287  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc28d  PUSH EAX
005bc28e  MOV ECX,dword ptr [EBP + 0xffffff5c]
005bc294  PUSH ECX
005bc295  MOV EDX,dword ptr [EBP + 0xffffff60]
005bc29b  PUSH EDX
005bc29c  MOV EAX,dword ptr [EBP + -0x8]
005bc29f  PUSH EAX
005bc2a0  CALL 0x005bf010
005bc2a5  ADD ESP,0x10
005bc2a8  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc2ae  MOV dword ptr [ECX + 0x8],EAX
005bc2b1  JMP 0x005bc3d4
005bc2b6  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc2bc  CMP dword ptr [EDX + 0x4],0x0
005bc2c0  JZ 0x005bc33d
005bc2c2  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc2c8  MOV ECX,dword ptr [EAX + 0x8]
005bc2cb  MOV dword ptr [EBP + 0xffffff48],ECX
005bc2d1  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc2d7  MOV EAX,dword ptr [EDX + 0x4]
005bc2da  MOV dword ptr [EBP + 0xffffff4c],EAX
005bc2e0  MOV ECX,dword ptr [EBP + 0xffffff48]
005bc2e6  MOV dword ptr [EBP + 0xffffff50],ECX
005bc2ec  MOV EDX,dword ptr [EBP + 0xffffff4c]
005bc2f2  MOV dword ptr [EBP + 0xffffff54],EDX
005bc2f8  MOV AL,byte ptr [EBP + 0xffffff5a]
005bc2fe  MOV byte ptr [EBP + 0xffffff5b],AL
005bc304  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc30a  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc310  MOV EAX,dword ptr [ECX + 0xc]
005bc313  SUB EAX,dword ptr [EDX + 0x4]
005bc316  SAR EAX,0x2
005bc319  MOV dword ptr [EBP + 0xffffff40],EAX
005bc31f  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc325  MOV EDX,dword ptr [ECX + 0x4]
005bc328  MOV dword ptr [EBP + 0xffffff44],EDX
005bc32e  MOV EAX,dword ptr [EBP + 0xffffff44]
005bc334  PUSH EAX
005bc335  CALL 0x00686cae
005bc33a  ADD ESP,0x4
005bc33d  MOV ECX,dword ptr [EBP + 0x8]
005bc340  CMP dword ptr [ECX + 0x4],0x0
005bc344  JNZ 0x005bc352
005bc346  MOV dword ptr [EBP + 0xfffffe98],0x0
005bc350  JMP 0x005bc367
005bc352  MOV EDX,dword ptr [EBP + 0x8]
005bc355  MOV EAX,dword ptr [EBP + 0x8]
005bc358  MOV ECX,dword ptr [EDX + 0x8]
005bc35b  SUB ECX,dword ptr [EAX + 0x4]
005bc35e  SAR ECX,0x2
005bc361  MOV dword ptr [EBP + 0xfffffe98],ECX
005bc367  MOV EDX,dword ptr [EBP + 0xfffffe98]
005bc36d  PUSH EDX
005bc36e  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc374  CALL 0x005bbd80
005bc379  MOVZX EAX,AL
005bc37c  TEST EAX,EAX
005bc37e  JZ 0x005bc3d4
005bc380  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc386  MOV EDX,dword ptr [ECX + 0x4]
005bc389  MOV dword ptr [EBP + 0xfffffebc],EDX
005bc38f  MOV EAX,dword ptr [EBP + 0x8]
005bc392  MOV ECX,dword ptr [EAX + 0x8]
005bc395  MOV dword ptr [EBP + 0xfffffec0],ECX
005bc39b  MOV EDX,dword ptr [EBP + 0x8]
005bc39e  MOV EAX,dword ptr [EDX + 0x4]
005bc3a1  MOV dword ptr [EBP + 0xfffffec4],EAX
005bc3a7  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005bc3ad  PUSH ECX
005bc3ae  MOV EDX,dword ptr [EBP + 0xfffffebc]
005bc3b4  PUSH EDX
005bc3b5  MOV EAX,dword ptr [EBP + 0xfffffec0]
005bc3bb  PUSH EAX
005bc3bc  MOV ECX,dword ptr [EBP + 0xfffffec4]
005bc3c2  PUSH ECX
005bc3c3  CALL 0x005bf010
005bc3c8  ADD ESP,0x10
005bc3cb  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005bc3d1  MOV dword ptr [EDX + 0x8],EAX
005bc3d4  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bc3da  MOV ESP,EBP
005bc3dc  POP EBP
005bc3dd  RET 0x4
