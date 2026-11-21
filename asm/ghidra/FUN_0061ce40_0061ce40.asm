; FUN_0061ce40  0061ce40
0061ce40  PUSH EBP
0061ce41  MOV EBP,ESP
0061ce43  SUB ESP,0x10
0061ce46  MOV EAX,dword ptr [EBP + 0x8]
0061ce49  MOV ECX,dword ptr [EAX]
0061ce4b  MOV DX,word ptr [ECX]
0061ce4e  MOV word ptr [EBP + -0x10],DX
0061ce52  MOV EAX,dword ptr [EBP + 0x8]
0061ce55  MOV ECX,dword ptr [EAX]
0061ce57  ADD ECX,0x2
0061ce5a  MOV EDX,dword ptr [EBP + 0x8]
0061ce5d  MOV dword ptr [EDX],ECX
0061ce5f  MOV EAX,dword ptr [EBP + 0x8]
0061ce62  MOV ECX,dword ptr [EAX]
0061ce64  MOV DX,word ptr [ECX]
0061ce67  MOV word ptr [EBP + -0xc],DX
0061ce6b  MOV EAX,dword ptr [EBP + 0x8]
0061ce6e  MOV ECX,dword ptr [EAX]
0061ce70  ADD ECX,0x2
0061ce73  MOV EDX,dword ptr [EBP + 0x8]
0061ce76  MOV dword ptr [EDX],ECX
0061ce78  MOV EAX,dword ptr [EBP + 0x8]
0061ce7b  MOV ECX,dword ptr [EAX]
0061ce7d  ADD ECX,0x2
0061ce80  MOV EDX,dword ptr [EBP + 0x8]
0061ce83  MOV dword ptr [EDX],ECX
0061ce85  MOV EAX,dword ptr [EBP + 0x8]
0061ce88  MOV ECX,dword ptr [EAX]
0061ce8a  ADD ECX,0x2
0061ce8d  MOV EDX,dword ptr [EBP + 0x8]
0061ce90  MOV dword ptr [EDX],ECX
0061ce92  MOV EAX,dword ptr [EBP + 0x8]
0061ce95  MOV ECX,dword ptr [EAX]
0061ce97  ADD ECX,0x2
0061ce9a  MOV EDX,dword ptr [EBP + 0x8]
0061ce9d  MOV dword ptr [EDX],ECX
0061ce9f  MOV EAX,dword ptr [EBP + 0x8]
0061cea2  MOV ECX,dword ptr [EAX]
0061cea4  ADD ECX,0x2
0061cea7  MOV EDX,dword ptr [EBP + 0x8]
0061ceaa  MOV dword ptr [EDX],ECX
0061ceac  MOV dword ptr [EBP + -0x8],0x0
0061ceb3  JMP 0x0061cebe
0061ceb5  MOV EAX,dword ptr [EBP + -0x8]
0061ceb8  ADD EAX,0x1
0061cebb  MOV dword ptr [EBP + -0x8],EAX
0061cebe  MOVZX ECX,word ptr [EBP + -0xc]
0061cec2  CMP dword ptr [EBP + -0x8],ECX
0061cec5  JGE 0x0061cf0b
0061cec7  MOV EDX,dword ptr [EBP + 0x8]
0061ceca  MOV EAX,dword ptr [EDX]
0061cecc  MOV CX,word ptr [EAX]
0061cecf  MOV word ptr [EBP + -0x4],CX
0061ced3  MOV EDX,dword ptr [EBP + 0x8]
0061ced6  MOV EAX,dword ptr [EDX]
0061ced8  ADD EAX,0x2
0061cedb  MOV ECX,dword ptr [EBP + 0x8]
0061cede  MOV dword ptr [ECX],EAX
0061cee0  MOV EDX,dword ptr [EBP + 0x10]
0061cee3  PUSH EDX
0061cee4  MOV EAX,dword ptr [EBP + 0xc]
0061cee7  PUSH EAX
0061cee8  MOVZX ECX,word ptr [EBP + -0x10]
0061ceec  PUSH ECX
0061ceed  MOV EDX,dword ptr [EBP + 0x8]
0061cef0  MOV EAX,dword ptr [EDX]
0061cef2  PUSH EAX
0061cef3  CALL 0x0061cf10
0061cef8  ADD ESP,0x10
0061cefb  MOVZX ECX,word ptr [EBP + -0x4]
0061ceff  MOV EDX,dword ptr [EBP + 0x8]
0061cf02  ADD ECX,dword ptr [EDX]
0061cf04  MOV EAX,dword ptr [EBP + 0x8]
0061cf07  MOV dword ptr [EAX],ECX
0061cf09  JMP 0x0061ceb5
0061cf0b  MOV ESP,EBP
0061cf0d  POP EBP
0061cf0e  RET
