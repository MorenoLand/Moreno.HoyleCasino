; FUN_005d5fb0  005d5fb0
005d5fb0  PUSH EBP
005d5fb1  MOV EBP,ESP
005d5fb3  SUB ESP,0xc
005d5fb6  MOV dword ptr [EBP + -0xc],ECX
005d5fb9  MOV EAX,dword ptr [EBP + 0xc]
005d5fbc  PUSH EAX
005d5fbd  MOV ECX,dword ptr [EBP + 0x8]
005d5fc0  PUSH ECX
005d5fc1  MOV ECX,dword ptr [EBP + -0xc]
005d5fc4  CALL 0x005d6080
005d5fc9  MOV EDX,dword ptr [EBP + 0xc]
005d5fcc  PUSH EDX
005d5fcd  MOV EAX,dword ptr [EBP + 0x8]
005d5fd0  PUSH EAX
005d5fd1  LEA ECX,[EBP + -0x8]
005d5fd4  PUSH ECX
005d5fd5  MOV ECX,dword ptr [EBP + -0xc]
005d5fd8  ADD ECX,0x4c4
005d5fde  CALL 0x0064c5c0
005d5fe3  MOV EDX,dword ptr [EAX + 0x4]
005d5fe6  PUSH EDX
005d5fe7  MOV EAX,dword ptr [EAX]
005d5fe9  PUSH EAX
005d5fea  MOV ECX,dword ptr [EBP + -0xc]
005d5fed  CALL 0x005d5f80
005d5ff2  MOV ECX,dword ptr [EBP + -0xc]
005d5ff5  MOV EDX,dword ptr [ECX + 0x4c8]
005d5ffb  PUSH EDX
005d5ffc  MOV EAX,dword ptr [ECX + 0x4c4]
005d6002  PUSH EAX
005d6003  PUSH 0x1
005d6005  MOV ECX,dword ptr [EBP + -0xc]
005d6008  MOV EDX,dword ptr [ECX + 0x4]
005d600b  PUSH EDX
005d600c  MOV ECX,dword ptr [0x0079506c]
005d6012  CALL 0x005e7e40
005d6017  MOV ESP,EBP
005d6019  POP EBP
005d601a  RET 0x8
