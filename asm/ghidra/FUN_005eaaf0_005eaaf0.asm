; FUN_005eaaf0  005eaaf0
005eaaf0  PUSH EBP
005eaaf1  MOV EBP,ESP
005eaaf3  PUSH -0x1
005eaaf5  PUSH 0x6a9c08
005eaafa  MOV EAX,FS:[0x0]
005eab00  PUSH EAX
005eab01  PUSH ECX
005eab02  MOV EAX,[0x00781870]
005eab07  XOR EAX,EBP
005eab09  PUSH EAX
005eab0a  LEA EAX,[EBP + -0xc]
005eab0d  MOV FS:[0x0],EAX
005eab13  MOV dword ptr [EBP + -0x10],ECX
005eab16  MOV ECX,dword ptr [EBP + -0x10]
005eab19  CALL 0x005f49d0
005eab1e  MOV dword ptr [EBP + -0x4],0x0
005eab25  MOV EAX,dword ptr [EBP + -0x10]
005eab28  MOV dword ptr [EAX],0x6d6214
005eab2e  MOV ECX,dword ptr [EBP + -0x10]
005eab31  MOV dword ptr [ECX + 0x4c],0x0
005eab38  MOV EDX,dword ptr [EBP + -0x10]
005eab3b  MOV byte ptr [EDX + 0x50],0x0
005eab3f  MOV EAX,dword ptr [EBP + -0x10]
005eab42  MOV dword ptr [EAX + 0x164],0x0
005eab4c  MOV ECX,dword ptr [EBP + -0x10]
005eab4f  MOV dword ptr [ECX + 0x15c],0x0
005eab59  MOV EDX,dword ptr [EBP + -0x10]
005eab5c  MOV dword ptr [EDX + 0x174],0x0
005eab66  MOV EAX,dword ptr [EBP + -0x10]
005eab69  MOV byte ptr [EAX + 0x16c],0xff
005eab70  MOV ECX,dword ptr [EBP + -0x10]
005eab73  MOV dword ptr [ECX + 0x160],0x0
005eab7d  MOV EDX,dword ptr [EBP + -0x10]
005eab80  MOV dword ptr [EDX + 0x168],0x0
005eab8a  PUSH 0x0
005eab8c  MOV ECX,dword ptr [EBP + -0x10]
005eab8f  CALL 0x005eb700
005eab94  MOV EAX,dword ptr [EBP + -0x10]
005eab97  MOV dword ptr [EAX + 0x154],0x0
005eaba1  MOV ECX,dword ptr [EBP + -0x10]
005eaba4  MOV dword ptr [ECX + 0x158],0x0
005eabae  MOV EDX,dword ptr [EBP + -0x10]
005eabb1  MOV byte ptr [EDX + 0x16e],0xff
005eabb8  MOV EAX,dword ptr [EBP + -0x10]
005eabbb  MOV byte ptr [EAX + 0x16f],0x0
005eabc2  MOV ECX,dword ptr [EBP + -0x10]
005eabc5  MOV dword ptr [ECX + 0x170],0x4
005eabcf  MOV EDX,dword ptr [EBP + -0x10]
005eabd2  MOV EAX,[0x007960d8]
005eabd7  MOV ECX,dword ptr [EAX + 0x18]
005eabda  MOV dword ptr [EDX + 0x48],ECX
005eabdd  MOV dword ptr [EBP + -0x4],0xffffffff
005eabe4  MOV EAX,dword ptr [EBP + -0x10]
005eabe7  MOV ECX,dword ptr [EBP + -0xc]
005eabea  MOV dword ptr FS:[0x0],ECX
005eabf1  POP ECX
005eabf2  MOV ESP,EBP
005eabf4  POP EBP
005eabf5  RET
