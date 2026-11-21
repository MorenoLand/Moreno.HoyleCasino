; FUN_005ec5a0  005ec5a0
005ec5a0  PUSH EBP
005ec5a1  MOV EBP,ESP
005ec5a3  PUSH -0x1
005ec5a5  PUSH 0x6a9c58
005ec5aa  MOV EAX,FS:[0x0]
005ec5b0  PUSH EAX
005ec5b1  PUSH ECX
005ec5b2  MOV EAX,[0x00781870]
005ec5b7  XOR EAX,EBP
005ec5b9  PUSH EAX
005ec5ba  LEA EAX,[EBP + -0xc]
005ec5bd  MOV FS:[0x0],EAX
005ec5c3  MOV dword ptr [EBP + -0x10],ECX
005ec5c6  MOV ECX,dword ptr [EBP + -0x10]
005ec5c9  CALL 0x005f6130
005ec5ce  MOV dword ptr [EBP + -0x4],0x0
005ec5d5  MOV EAX,dword ptr [EBP + -0x10]
005ec5d8  MOV dword ptr [EAX],0x6d6354
005ec5de  MOV ECX,dword ptr [EBP + -0x10]
005ec5e1  MOV dword ptr [ECX + 0x60],0xffffffff
005ec5e8  MOV EDX,dword ptr [EBP + -0x10]
005ec5eb  MOV dword ptr [EDX + 0x64],0x0
005ec5f2  PUSH 0xc
005ec5f4  PUSH 0x0
005ec5f6  MOV EAX,dword ptr [EBP + -0x10]
005ec5f9  ADD EAX,0x8c
005ec5fe  PUSH EAX
005ec5ff  CALL 0x00686fa2
005ec604  ADD ESP,0xc
005ec607  MOV ECX,dword ptr [EBP + -0x10]
005ec60a  MOV dword ptr [ECX + 0x98],0x0
005ec614  MOV EDX,dword ptr [EBP + -0x10]
005ec617  MOV dword ptr [EDX + 0x5c],0x0
005ec61e  MOV EAX,dword ptr [EBP + -0x10]
005ec621  MOV dword ptr [EAX + 0x84],0xffffffff
005ec62b  MOV ECX,dword ptr [EBP + -0x10]
005ec62e  MOV byte ptr [ECX + 0x88],0x0
005ec635  MOV EDX,dword ptr [EBP + -0x10]
005ec638  MOV byte ptr [EDX + 0x89],0x0
005ec63f  MOV EAX,dword ptr [EBP + -0x10]
005ec642  MOV byte ptr [EAX + 0x8a],0x0
005ec649  MOV ECX,dword ptr [EBP + -0x10]
005ec64c  MOV dword ptr [ECX + 0xb0],0x0
005ec656  MOV EDX,dword ptr [EBP + -0x10]
005ec659  MOV byte ptr [EDX + 0x9c],0xff
005ec660  MOV EAX,dword ptr [EBP + -0x10]
005ec663  MOV dword ptr [EAX + 0x74],0x0
005ec66a  MOV ECX,dword ptr [EBP + -0x10]
005ec66d  MOV dword ptr [ECX + 0x78],0x0
005ec674  MOV EDX,dword ptr [EBP + -0x10]
005ec677  MOV dword ptr [EDX + 0x7c],0x0
005ec67e  MOV EAX,dword ptr [EBP + -0x10]
005ec681  MOV dword ptr [EAX + 0x80],0x0
005ec68b  MOV ECX,dword ptr [EBP + -0x10]
005ec68e  MOV byte ptr [ECX + 0xa6],0x0
005ec695  MOV EDX,dword ptr [EBP + -0x10]
005ec698  MOV dword ptr [EDX + 0xa8],0x0
005ec6a2  MOV EAX,dword ptr [EBP + -0x10]
005ec6a5  MOV byte ptr [EAX + 0x9d],0x0
005ec6ac  PUSH 0x5
005ec6ae  MOV ECX,dword ptr [EBP + -0x10]
005ec6b1  CALL 0x005ef310
005ec6b6  MOV ECX,dword ptr [EBP + -0x10]
005ec6b9  MOV byte ptr [ECX + 0x9f],0x0
005ec6c0  MOV EDX,dword ptr [EBP + -0x10]
005ec6c3  MOV dword ptr [EDX + 0xa0],0x0
005ec6cd  MOV EAX,dword ptr [EBP + -0x10]
005ec6d0  MOV byte ptr [EAX + 0xa4],0x0
005ec6d7  MOV ECX,dword ptr [EBP + -0x10]
005ec6da  MOV byte ptr [ECX + 0xa5],0x0
005ec6e1  MOV EDX,dword ptr [EBP + -0x10]
005ec6e4  MOV dword ptr [EDX + 0xac],0x0
005ec6ee  MOV ECX,dword ptr [EBP + -0x10]
005ec6f1  CALL 0x005f0bb0
005ec6f6  MOV EAX,dword ptr [EBP + -0x10]
005ec6f9  MOV dword ptr [EAX + 0xb4],0x0
005ec703  MOV ECX,dword ptr [EBP + -0x10]
005ec706  MOV dword ptr [ECX + 0xb8],0x0
005ec710  MOV EDX,dword ptr [EBP + -0x10]
005ec713  MOV dword ptr [EDX + 0xbc],0x0
005ec71d  PUSH ECX
005ec71e  MOV EAX,ESP
005ec720  MOV CX,word ptr [0x0075ee1c]
005ec727  MOV word ptr [EAX],CX
005ec72a  MOV DL,byte ptr [0x0075ee1e]
005ec730  MOV byte ptr [EAX + 0x2],DL
005ec733  PUSH -0x1
005ec735  PUSH 0x1f
005ec737  MOV ECX,dword ptr [EBP + -0x10]
005ec73a  CALL 0x005ecd00
005ec73f  MOV dword ptr [EBP + -0x4],0xffffffff
005ec746  MOV EAX,dword ptr [EBP + -0x10]
005ec749  MOV ECX,dword ptr [EBP + -0xc]
005ec74c  MOV dword ptr FS:[0x0],ECX
005ec753  POP ECX
005ec754  MOV ESP,EBP
005ec756  POP EBP
005ec757  RET
