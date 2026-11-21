; FUN_005f9ce0  005f9ce0
005f9ce0  PUSH EBP
005f9ce1  MOV EBP,ESP
005f9ce3  PUSH -0x1
005f9ce5  PUSH 0x6aa2bb
005f9cea  MOV EAX,FS:[0x0]
005f9cf0  PUSH EAX
005f9cf1  SUB ESP,0x10
005f9cf4  MOV EAX,[0x00781870]
005f9cf9  XOR EAX,EBP
005f9cfb  PUSH EAX
005f9cfc  LEA EAX,[EBP + -0xc]
005f9cff  MOV FS:[0x0],EAX
005f9d05  MOV dword ptr [EBP + -0x18],ECX
005f9d08  CMP dword ptr [EBP + 0x8],0x0
005f9d0c  JNZ 0x005f9d52
005f9d0e  PUSH 0x178
005f9d13  CALL 0x00686d82
005f9d18  ADD ESP,0x4
005f9d1b  MOV dword ptr [EBP + -0x14],EAX
005f9d1e  MOV dword ptr [EBP + -0x4],0x0
005f9d25  CMP dword ptr [EBP + -0x14],0x0
005f9d29  JZ 0x005f9d38
005f9d2b  MOV ECX,dword ptr [EBP + -0x14]
005f9d2e  CALL 0x005eaaf0
005f9d33  MOV dword ptr [EBP + -0x1c],EAX
005f9d36  JMP 0x005f9d3f
005f9d38  MOV dword ptr [EBP + -0x1c],0x0
005f9d3f  MOV EAX,dword ptr [EBP + -0x1c]
005f9d42  MOV dword ptr [EBP + -0x10],EAX
005f9d45  MOV dword ptr [EBP + -0x4],0xffffffff
005f9d4c  MOV ECX,dword ptr [EBP + -0x10]
005f9d4f  MOV dword ptr [EBP + 0x8],ECX
005f9d52  MOV EDX,dword ptr [EBP + 0x8]
005f9d55  PUSH EDX
005f9d56  MOV ECX,dword ptr [EBP + -0x18]
005f9d59  ADD ECX,0x4
005f9d5c  CALL 0x0060c840
005f9d61  MOV EAX,dword ptr [EBP + 0x8]
005f9d64  MOV ECX,dword ptr [EBP + -0x18]
005f9d67  MOV dword ptr [EAX + 0x4],ECX
005f9d6a  MOV EDX,dword ptr [EBP + 0xc]
005f9d6d  PUSH EDX
005f9d6e  MOV EAX,dword ptr [EBP + 0x1c]
005f9d71  PUSH EAX
005f9d72  MOV ECX,dword ptr [EBP + 0x18]
005f9d75  PUSH ECX
005f9d76  MOV EDX,dword ptr [EBP + 0x14]
005f9d79  PUSH EDX
005f9d7a  MOV EAX,dword ptr [EBP + 0x10]
005f9d7d  PUSH EAX
005f9d7e  MOV ECX,dword ptr [EBP + 0x8]
005f9d81  CALL 0x005eae80
005f9d86  MOV ECX,dword ptr [EBP + 0x20]
005f9d89  PUSH ECX
005f9d8a  MOV EDX,dword ptr [EBP + 0x8]
005f9d8d  MOV EAX,dword ptr [EDX]
005f9d8f  MOV ECX,dword ptr [EBP + 0x8]
005f9d92  MOV EDX,dword ptr [EAX + 0xb0]
005f9d98  CALL EDX
005f9d9a  MOV AL,byte ptr [EBP + 0x24]
005f9d9d  PUSH EAX
005f9d9e  MOV ECX,dword ptr [EBP + 0x8]
005f9da1  CALL 0x005eb5d0
005f9da6  MOV CL,byte ptr [EBP + 0x28]
005f9da9  PUSH ECX
005f9daa  MOV ECX,dword ptr [EBP + 0x8]
005f9dad  CALL 0x005eb700
005f9db2  MOV EDX,dword ptr [EBP + 0x8]
005f9db5  MOV EAX,dword ptr [EDX]
005f9db7  MOV ECX,dword ptr [EBP + 0x8]
005f9dba  MOV EDX,dword ptr [EAX + 0x74]
005f9dbd  CALL EDX
005f9dbf  MOV EAX,dword ptr [EBP + 0x8]
005f9dc2  MOV ECX,dword ptr [EBP + -0xc]
005f9dc5  MOV dword ptr FS:[0x0],ECX
005f9dcc  POP ECX
005f9dcd  MOV ESP,EBP
005f9dcf  POP EBP
005f9dd0  RET 0x24
