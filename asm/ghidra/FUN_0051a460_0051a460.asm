; FUN_0051a460  0051a460
0051a460  PUSH EBP
0051a461  MOV EBP,ESP
0051a463  SUB ESP,0xa0
0051a469  MOV EAX,[0x00781870]
0051a46e  XOR EAX,EBP
0051a470  MOV dword ptr [EBP + -0x1c],EAX
0051a473  MOV dword ptr [EBP + 0xffffff70],ECX
0051a479  MOV dword ptr [EBP + -0x4],0x0
0051a480  CALL 0x00520d60
0051a485  MOV dword ptr [EBP + -0x8],EAX
0051a488  MOV dword ptr [EBP + -0xc],0x0
0051a48f  JMP 0x0051a49a
0051a491  MOV EAX,dword ptr [EBP + -0xc]
0051a494  ADD EAX,0x1
0051a497  MOV dword ptr [EBP + -0xc],EAX
0051a49a  CMP dword ptr [EBP + -0xc],0x10
0051a49e  JGE 0x0051a69a
0051a4a4  MOV ECX,dword ptr [EBP + -0xc]
0051a4a7  IMUL ECX,ECX,0x688
0051a4ad  MOV EDX,dword ptr [EBP + -0x8]
0051a4b0  LEA EAX,[EDX + ECX*0x1 + 0x4]
0051a4b4  MOV dword ptr [EBP + -0x18],EAX
0051a4b7  MOV ECX,dword ptr [EBP + -0xc]
0051a4ba  MOV EDX,dword ptr [EBP + 0xffffff70]
0051a4c0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1bc]
0051a4c7  MOV dword ptr [EBP + 0xffffff74],EAX
0051a4cd  MOV ECX,dword ptr [EBP + -0x18]
0051a4d0  MOV EDX,dword ptr [ECX + 0x3e0]
0051a4d6  PUSH EDX
0051a4d7  PUSH 0x6b2828
0051a4dc  LEA EAX,[EBP + 0xffffff78]
0051a4e2  PUSH EAX
0051a4e3  CALL dword ptr [0x006b2220]
0051a4e9  ADD ESP,0xc
0051a4ec  MOV ECX,dword ptr [EBP + 0xffffff74]
0051a4f2  PUSH ECX
0051a4f3  MOV ECX,dword ptr [EBP + 0xffffff70]
0051a4f9  CALL 0x005fb550
0051a4fe  MOV dword ptr [EBP + 0xffffff6c],EAX
0051a504  LEA EDX,[EBP + 0xffffff78]
0051a50a  PUSH EDX
0051a50b  MOV EAX,dword ptr [EBP + 0xffffff6c]
0051a511  MOV EDX,dword ptr [EAX]
0051a513  MOV ECX,dword ptr [EBP + 0xffffff6c]
0051a519  MOV EAX,dword ptr [EDX + 0xb4]
0051a51f  CALL EAX
0051a521  MOV ECX,dword ptr [EBP + -0x18]
0051a524  CMP dword ptr [ECX + 0x3e0],0x0
0051a52b  JLE 0x0051a54f
0051a52d  MOV EDX,dword ptr [EBP + -0x18]
0051a530  FILD dword ptr [EDX + 0x3e4]
0051a536  MOV EAX,dword ptr [EBP + -0x18]
0051a539  FIDIV dword ptr [EAX + 0x3e0]
0051a53f  FMUL double ptr [0x006b4b00]
0051a545  CALL 0x00686cc0
0051a54a  MOV dword ptr [EBP + -0x4],EAX
0051a54d  JMP 0x0051a556
0051a54f  MOV dword ptr [EBP + -0x4],0x0
0051a556  MOV ECX,dword ptr [EBP + -0x4]
0051a559  PUSH ECX
0051a55a  PUSH 0x6b2828
0051a55f  LEA EDX,[EBP + 0xffffff78]
0051a565  PUSH EDX
0051a566  CALL dword ptr [0x006b2220]
0051a56c  ADD ESP,0xc
0051a56f  MOV EAX,dword ptr [EBP + 0xffffff74]
0051a575  ADD EAX,0x1
0051a578  PUSH EAX
0051a579  MOV ECX,dword ptr [EBP + 0xffffff70]
0051a57f  CALL 0x005fb550
0051a584  MOV dword ptr [EBP + 0xffffff68],EAX
0051a58a  LEA ECX,[EBP + 0xffffff78]
0051a590  PUSH ECX
0051a591  MOV EDX,dword ptr [EBP + 0xffffff68]
0051a597  MOV EAX,dword ptr [EDX]
0051a599  MOV ECX,dword ptr [EBP + 0xffffff68]
0051a59f  MOV EDX,dword ptr [EAX + 0xb4]
0051a5a5  CALL EDX
0051a5a7  MOV EAX,dword ptr [EBP + -0x18]
0051a5aa  CMP dword ptr [EAX + 0x3ec],0x0
0051a5b1  JLE 0x0051a5d5
0051a5b3  MOV ECX,dword ptr [EBP + -0x18]
0051a5b6  FILD dword ptr [ECX + 0x3e8]
0051a5bc  MOV EDX,dword ptr [EBP + -0x18]
0051a5bf  FIDIV dword ptr [EDX + 0x3ec]
0051a5c5  FMUL double ptr [0x006b4b00]
0051a5cb  CALL 0x00686cc0
0051a5d0  MOV dword ptr [EBP + -0x4],EAX
0051a5d3  JMP 0x0051a5dc
0051a5d5  MOV dword ptr [EBP + -0x4],0x0
0051a5dc  MOV EAX,dword ptr [EBP + -0x4]
0051a5df  PUSH EAX
0051a5e0  PUSH 0x6b2828
0051a5e5  LEA ECX,[EBP + 0xffffff78]
0051a5eb  PUSH ECX
0051a5ec  CALL dword ptr [0x006b2220]
0051a5f2  ADD ESP,0xc
0051a5f5  MOV EDX,dword ptr [EBP + 0xffffff74]
0051a5fb  ADD EDX,0x2
0051a5fe  PUSH EDX
0051a5ff  MOV ECX,dword ptr [EBP + 0xffffff70]
0051a605  CALL 0x005fb550
0051a60a  MOV dword ptr [EBP + 0xffffff64],EAX
0051a610  LEA EAX,[EBP + 0xffffff78]
0051a616  PUSH EAX
0051a617  MOV ECX,dword ptr [EBP + 0xffffff64]
0051a61d  MOV EDX,dword ptr [ECX]
0051a61f  MOV ECX,dword ptr [EBP + 0xffffff64]
0051a625  MOV EAX,dword ptr [EDX + 0xb4]
0051a62b  CALL EAX
0051a62d  MOV ECX,dword ptr [EBP + -0x18]
0051a630  MOV EDX,dword ptr [ECX + 0x3f0]
0051a636  MOV dword ptr [EBP + -0x14],EDX
0051a639  MOV dword ptr [EBP + -0x10],0x0
0051a640  PUSH 0x1
0051a642  PUSH 0x1
0051a644  PUSH 0x1
0051a646  LEA EAX,[EBP + 0xffffff78]
0051a64c  PUSH EAX
0051a64d  MOV ECX,dword ptr [EBP + -0x10]
0051a650  PUSH ECX
0051a651  MOV EDX,dword ptr [EBP + -0x14]
0051a654  PUSH EDX
0051a655  CALL 0x0064c8d0
0051a65a  ADD ESP,0x18
0051a65d  MOV EAX,dword ptr [EBP + 0xffffff74]
0051a663  ADD EAX,0x3
0051a666  PUSH EAX
0051a667  MOV ECX,dword ptr [EBP + 0xffffff70]
0051a66d  CALL 0x005fb550
0051a672  MOV dword ptr [EBP + 0xffffff60],EAX
0051a678  LEA ECX,[EBP + 0xffffff78]
0051a67e  PUSH ECX
0051a67f  MOV EDX,dword ptr [EBP + 0xffffff60]
0051a685  MOV EAX,dword ptr [EDX]
0051a687  MOV ECX,dword ptr [EBP + 0xffffff60]
0051a68d  MOV EDX,dword ptr [EAX + 0xb4]
0051a693  CALL EDX
0051a695  JMP 0x0051a491
0051a69a  MOV ECX,dword ptr [EBP + -0x1c]
0051a69d  XOR ECX,EBP
0051a69f  CALL 0x00686d72
0051a6a4  MOV ESP,EBP
0051a6a6  POP EBP
0051a6a7  RET
