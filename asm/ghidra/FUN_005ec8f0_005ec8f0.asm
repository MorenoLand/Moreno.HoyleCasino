; FUN_005ec8f0  005ec8f0
005ec8f0  PUSH EBP
005ec8f1  MOV EBP,ESP
005ec8f3  PUSH ECX
005ec8f4  MOV dword ptr [EBP + -0x4],ECX
005ec8f7  MOV EAX,dword ptr [EBP + 0x28]
005ec8fa  PUSH EAX
005ec8fb  MOV ECX,dword ptr [EBP + 0x20]
005ec8fe  PUSH ECX
005ec8ff  MOV EDX,dword ptr [EBP + 0x1c]
005ec902  PUSH EDX
005ec903  MOV EAX,dword ptr [EBP + 0x18]
005ec906  PUSH EAX
005ec907  MOV ECX,dword ptr [EBP + -0x4]
005ec90a  CALL 0x005f50c0
005ec90f  PUSH ECX
005ec910  MOV ECX,ESP
005ec912  MOV DX,word ptr [0x0075ee1c]
005ec919  MOV word ptr [ECX],DX
005ec91c  MOV AL,[0x0075ee1e]
005ec921  MOV byte ptr [ECX + 0x2],AL
005ec924  PUSH -0x1
005ec926  MOV ECX,dword ptr [EBP + 0xc]
005ec929  PUSH ECX
005ec92a  MOV ECX,dword ptr [EBP + -0x4]
005ec92d  CALL 0x005ecd00
005ec932  MOV EDX,dword ptr [EBP + 0x8]
005ec935  PUSH EDX
005ec936  MOV EAX,dword ptr [EBP + -0x4]
005ec939  MOV EDX,dword ptr [EAX]
005ec93b  MOV ECX,dword ptr [EBP + -0x4]
005ec93e  MOV EAX,dword ptr [EDX + 0xb4]
005ec944  CALL EAX
005ec946  MOV ECX,dword ptr [EBP + 0x10]
005ec949  PUSH ECX
005ec94a  MOV ECX,dword ptr [EBP + -0x4]
005ec94d  CALL 0x005ecc60
005ec952  MOV EDX,dword ptr [EBP + 0x14]
005ec955  PUSH EDX
005ec956  MOV ECX,dword ptr [EBP + -0x4]
005ec959  CALL 0x005eccb0
005ec95e  MOV EAX,dword ptr [EBP + 0x24]
005ec961  PUSH EAX
005ec962  MOV ECX,dword ptr [EBP + -0x4]
005ec965  CALL 0x005ef310
005ec96a  MOV ESP,EBP
005ec96c  POP EBP
005ec96d  RET 0x24
