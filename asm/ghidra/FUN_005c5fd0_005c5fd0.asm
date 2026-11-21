; FUN_005c5fd0  005c5fd0
005c5fd0  PUSH EBP
005c5fd1  MOV EBP,ESP
005c5fd3  SUB ESP,0x34
005c5fd6  MOV dword ptr [EBP + -0x34],ECX
005c5fd9  MOV EAX,dword ptr [EBP + 0x8]
005c5fdc  MOV dword ptr [EBP + -0x30],EAX
005c5fdf  XOR ECX,ECX
005c5fe1  MOV byte ptr [EBP + -0x1],CL
005c5fe4  MOV DL,byte ptr [EBP + -0x3]
005c5fe7  MOV byte ptr [EBP + -0x2],DL
005c5fea  MOV AL,byte ptr [EBP + -0x1]
005c5fed  MOV byte ptr [EBP + -0x29],AL
005c5ff0  MOV ECX,dword ptr [EBP + -0x30]
005c5ff3  MOV dword ptr [EBP + -0x28],ECX
005c5ff6  MOV EDX,dword ptr [EBP + 0x10]
005c5ff9  PUSH EDX
005c5ffa  MOV EAX,dword ptr [EBP + 0xc]
005c5ffd  PUSH EAX
005c5ffe  MOV ECX,dword ptr [EBP + -0x28]
005c6001  PUSH ECX
005c6002  CALL 0x005c0910
005c6007  ADD ESP,0xc
005c600a  MOV EDX,dword ptr [EBP + 0xc]
005c600d  MOV EAX,dword ptr [EBP + 0x8]
005c6010  LEA EAX,[EAX + EDX*0x4]
005c6013  MOV ESP,EBP
005c6015  POP EBP
005c6016  RET 0xc
