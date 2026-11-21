; FUN_004fa1d0  004fa1d0
004fa1d0  PUSH EBP
004fa1d1  MOV EBP,ESP
004fa1d3  PUSH -0x1
004fa1d5  PUSH 0x6a2741
004fa1da  MOV EAX,FS:[0x0]
004fa1e0  PUSH EAX
004fa1e1  SUB ESP,0x10
004fa1e4  MOV EAX,[0x00781870]
004fa1e9  XOR EAX,EBP
004fa1eb  PUSH EAX
004fa1ec  LEA EAX,[EBP + -0xc]
004fa1ef  MOV FS:[0x0],EAX
004fa1f5  MOV dword ptr [EBP + -0x18],ECX
004fa1f8  MOV ECX,dword ptr [EBP + -0x18]
004fa1fb  CALL 0x005d8230
004fa200  MOV ECX,dword ptr [EBP + -0x18]
004fa203  CALL 0x005d85e0
004fa208  MOV ECX,dword ptr [0x00793578]
004fa20e  CALL 0x0057ae30
004fa213  MOV EAX,dword ptr [EBP + -0x18]
004fa216  MOV dword ptr [EAX + 0xa4],0x0
004fa220  PUSH 0x20
004fa222  CALL 0x00686d82
004fa227  ADD ESP,0x4
004fa22a  MOV dword ptr [EBP + -0x14],EAX
004fa22d  MOV dword ptr [EBP + -0x4],0x0
004fa234  CMP dword ptr [EBP + -0x14],0x0
004fa238  JZ 0x004fa255
004fa23a  PUSH 0x0
004fa23c  MOV ECX,dword ptr [EBP + -0x14]
004fa23f  CALL 0x005fc0d0
004fa244  MOV ECX,dword ptr [EBP + -0x14]
004fa247  MOV dword ptr [ECX],0x6c07a8
004fa24d  MOV EDX,dword ptr [EBP + -0x14]
004fa250  MOV dword ptr [EBP + -0x1c],EDX
004fa253  JMP 0x004fa25c
004fa255  MOV dword ptr [EBP + -0x1c],0x0
004fa25c  MOV EAX,dword ptr [EBP + -0x1c]
004fa25f  MOV dword ptr [EBP + -0x10],EAX
004fa262  MOV dword ptr [EBP + -0x4],0xffffffff
004fa269  MOV ECX,dword ptr [EBP + -0x10]
004fa26c  PUSH ECX
004fa26d  MOV ECX,dword ptr [EBP + -0x18]
004fa270  CALL 0x005f1b70
004fa275  MOV ECX,dword ptr [EBP + -0xc]
004fa278  MOV dword ptr FS:[0x0],ECX
004fa27f  POP ECX
004fa280  MOV ESP,EBP
004fa282  POP EBP
004fa283  RET
