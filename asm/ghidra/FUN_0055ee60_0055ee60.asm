; FUN_0055ee60  0055ee60
0055ee60  PUSH EBP
0055ee61  MOV EBP,ESP
0055ee63  SUB ESP,0x1c
0055ee66  MOV dword ptr [EBP + -0x1c],ECX
0055ee69  MOV byte ptr [EBP + -0x1],0x0
0055ee6d  MOV dword ptr [EBP + -0x18],0xffffffff
0055ee74  MOV EAX,dword ptr [EBP + -0x1c]
0055ee77  MOVSX ECX,byte ptr [EAX + 0x14]
0055ee7b  MOV EDX,dword ptr [EBP + -0x1c]
0055ee7e  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055ee83  PUSH EAX
0055ee84  CALL 0x00641280
0055ee89  ADD ESP,0x4
0055ee8c  MOV dword ptr [EBP + -0x8],EAX
0055ee8f  MOV ECX,dword ptr [EBP + -0x1c]
0055ee92  MOVSX EDX,byte ptr [ECX + 0x16]
0055ee96  MOV EAX,dword ptr [EBP + -0x1c]
0055ee99  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
0055ee9e  PUSH ECX
0055ee9f  CALL 0x00641280
0055eea4  ADD ESP,0x4
0055eea7  MOV dword ptr [EBP + -0x14],EAX
0055eeaa  MOV dword ptr [EBP + -0xc],0x0
0055eeb1  JMP 0x0055eebc
0055eeb3  MOV EDX,dword ptr [EBP + -0xc]
0055eeb6  ADD EDX,0x1
0055eeb9  MOV dword ptr [EBP + -0xc],EDX
0055eebc  CMP dword ptr [EBP + -0xc],0x3
0055eec0  JGE 0x0055eeea
0055eec2  MOV EAX,dword ptr [EBP + -0x1c]
0055eec5  ADD EAX,dword ptr [EBP + -0xc]
0055eec8  MOVSX ECX,byte ptr [EAX + 0x14]
0055eecc  MOV EDX,dword ptr [EBP + -0x1c]
0055eecf  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055eed4  PUSH EAX
0055eed5  CALL 0x00641280
0055eeda  ADD ESP,0x4
0055eedd  CMP EAX,0xe
0055eee0  JNZ 0x0055eee8
0055eee2  MOV byte ptr [EBP + -0x1],0x1
0055eee6  JMP 0x0055eeea
0055eee8  JMP 0x0055eeb3
0055eeea  MOVZX ECX,byte ptr [EBP + -0x1]
0055eeee  TEST ECX,ECX
0055eef0  JZ 0x0055ef50
0055eef2  MOV dword ptr [EBP + -0xc],0x0
0055eef9  JMP 0x0055ef04
0055eefb  MOV EDX,dword ptr [EBP + -0xc]
0055eefe  ADD EDX,0x1
0055ef01  MOV dword ptr [EBP + -0xc],EDX
0055ef04  CMP dword ptr [EBP + -0xc],0x3
0055ef08  JGE 0x0055ef50
0055ef0a  MOV EAX,dword ptr [EBP + -0x1c]
0055ef0d  ADD EAX,dword ptr [EBP + -0xc]
0055ef10  MOVSX ECX,byte ptr [EAX + 0x14]
0055ef14  MOV EDX,dword ptr [EBP + -0x1c]
0055ef17  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055ef1c  PUSH EAX
0055ef1d  CALL 0x00641280
0055ef22  ADD ESP,0x4
0055ef25  CMP EAX,0xe
0055ef28  JZ 0x0055ef4e
0055ef2a  MOV ECX,dword ptr [EBP + -0x1c]
0055ef2d  ADD ECX,dword ptr [EBP + -0xc]
0055ef30  MOVSX EDX,byte ptr [ECX + 0x14]
0055ef34  MOV EAX,dword ptr [EBP + -0x1c]
0055ef37  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
0055ef3c  PUSH ECX
0055ef3d  CALL 0x00641280
0055ef42  ADD ESP,0x4
0055ef45  CMP EAX,0x5
0055ef48  JNZ 0x0055ef4e
0055ef4a  MOV AL,0x1
0055ef4c  JMP 0x0055ef7a
0055ef4e  JMP 0x0055eefb
0055ef50  MOV EDX,dword ptr [EBP + -0x8]
0055ef53  CMP EDX,dword ptr [EBP + -0x14]
0055ef56  JLE 0x0055ef6a
0055ef58  MOV EAX,dword ptr [EBP + -0x8]
0055ef5b  MOV dword ptr [EBP + -0x10],EAX
0055ef5e  MOV ECX,dword ptr [EBP + -0x14]
0055ef61  MOV dword ptr [EBP + -0x8],ECX
0055ef64  MOV EDX,dword ptr [EBP + -0x8]
0055ef67  MOV dword ptr [EBP + -0x14],EDX
0055ef6a  MOV EAX,dword ptr [EBP + -0x8]
0055ef6d  ADD EAX,0x4
0055ef70  XOR ECX,ECX
0055ef72  CMP EAX,dword ptr [EBP + -0x14]
0055ef75  SETZ CL
0055ef78  MOV AL,CL
0055ef7a  MOV ESP,EBP
0055ef7c  POP EBP
0055ef7d  RET 0x8
