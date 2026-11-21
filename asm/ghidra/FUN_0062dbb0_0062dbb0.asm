; FUN_0062dbb0  0062dbb0
0062dbb0  PUSH EBP
0062dbb1  MOV EBP,ESP
0062dbb3  SUB ESP,0x8
0062dbb6  MOV byte ptr [EBP + -0x1],0x0
0062dbba  MOV EAX,dword ptr [EBP + 0x8]
0062dbbd  MOVSX ECX,byte ptr [EAX]
0062dbc0  TEST ECX,ECX
0062dbc2  JZ 0x0062dbe3
0062dbc4  MOV EDX,dword ptr [EBP + 0x8]
0062dbc7  MOVSX EAX,byte ptr [EDX]
0062dbca  CMP EAX,0x20
0062dbcd  JNZ 0x0062dbe3
0062dbcf  PUSH 0x0
0062dbd1  MOV ECX,dword ptr [EBP + 0x8]
0062dbd4  PUSH ECX
0062dbd5  CALL 0x0062dca0
0062dbda  ADD ESP,0x8
0062dbdd  MOV byte ptr [EBP + -0x1],0x1
0062dbe1  JMP 0x0062dbba
0062dbe3  MOV EDX,dword ptr [EBP + 0x8]
0062dbe6  PUSH EDX
0062dbe7  CALL 0x00686ecc
0062dbec  ADD ESP,0x4
0062dbef  SUB EAX,0x1
0062dbf2  MOV dword ptr [EBP + -0x8],EAX
0062dbf5  JMP 0x0062dc00
0062dbf7  MOV EAX,dword ptr [EBP + -0x8]
0062dbfa  SUB EAX,0x1
0062dbfd  MOV dword ptr [EBP + -0x8],EAX
0062dc00  CMP dword ptr [EBP + -0x8],0x0
0062dc04  JLE 0x0062dc37
0062dc06  MOV ECX,dword ptr [EBP + 0x8]
0062dc09  ADD ECX,dword ptr [EBP + -0x8]
0062dc0c  MOVSX EDX,byte ptr [ECX]
0062dc0f  TEST EDX,EDX
0062dc11  JZ 0x0062dc37
0062dc13  MOV EAX,dword ptr [EBP + 0x8]
0062dc16  ADD EAX,dword ptr [EBP + -0x8]
0062dc19  MOVSX ECX,byte ptr [EAX]
0062dc1c  CMP ECX,0x20
0062dc1f  JNZ 0x0062dc37
0062dc21  MOV EDX,dword ptr [EBP + -0x8]
0062dc24  PUSH EDX
0062dc25  MOV EAX,dword ptr [EBP + 0x8]
0062dc28  PUSH EAX
0062dc29  CALL 0x0062dca0
0062dc2e  ADD ESP,0x8
0062dc31  MOV byte ptr [EBP + -0x1],0x1
0062dc35  JMP 0x0062dbf7
0062dc37  MOV dword ptr [EBP + -0x8],0x0
0062dc3e  JMP 0x0062dc49
0062dc40  MOV ECX,dword ptr [EBP + -0x8]
0062dc43  ADD ECX,0x1
0062dc46  MOV dword ptr [EBP + -0x8],ECX
0062dc49  MOV EDX,dword ptr [EBP + 0x8]
0062dc4c  ADD EDX,dword ptr [EBP + -0x8]
0062dc4f  MOVSX EAX,byte ptr [EDX]
0062dc52  TEST EAX,EAX
0062dc54  JZ 0x0062dc8b
0062dc56  MOV ECX,dword ptr [EBP + 0x8]
0062dc59  ADD ECX,dword ptr [EBP + -0x8]
0062dc5c  MOVSX EDX,byte ptr [ECX]
0062dc5f  CMP EDX,0x20
0062dc62  JNZ 0x0062dc89
0062dc64  MOV EAX,dword ptr [EBP + 0x8]
0062dc67  ADD EAX,dword ptr [EBP + -0x8]
0062dc6a  MOVSX ECX,byte ptr [EAX + 0x1]
0062dc6e  CMP ECX,0x20
0062dc71  JNZ 0x0062dc89
0062dc73  MOV EDX,dword ptr [EBP + -0x8]
0062dc76  PUSH EDX
0062dc77  MOV EAX,dword ptr [EBP + 0x8]
0062dc7a  PUSH EAX
0062dc7b  CALL 0x0062dca0
0062dc80  ADD ESP,0x8
0062dc83  MOV byte ptr [EBP + -0x1],0x1
0062dc87  JMP 0x0062dc64
0062dc89  JMP 0x0062dc40
0062dc8b  MOV AL,byte ptr [EBP + -0x1]
0062dc8e  MOV ESP,EBP
0062dc90  POP EBP
0062dc91  RET
