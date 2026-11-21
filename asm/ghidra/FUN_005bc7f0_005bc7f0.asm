; FUN_005bc7f0  005bc7f0
005bc7f0  PUSH EBP
005bc7f1  MOV EBP,ESP
005bc7f3  PUSH -0x1
005bc7f5  PUSH 0x6a812e
005bc7fa  MOV EAX,FS:[0x0]
005bc800  PUSH EAX
005bc801  SUB ESP,0x6c
005bc804  MOV EAX,[0x00781870]
005bc809  XOR EAX,EBP
005bc80b  PUSH EAX
005bc80c  LEA EAX,[EBP + -0xc]
005bc80f  MOV FS:[0x0],EAX
005bc815  MOV dword ptr [EBP + -0x78],ECX
005bc818  MOV ECX,dword ptr [EBP + -0x78]
005bc81b  CALL 0x005c0a00
005bc820  MOV dword ptr [EBP + -0x4],0x0
005bc827  MOV EAX,dword ptr [EBP + -0x78]
005bc82a  MOV dword ptr [EAX],0x6d1c18
005bc830  MOV ECX,dword ptr [EBP + -0x78]
005bc833  ADD ECX,0x58
005bc836  MOV dword ptr [EBP + -0x74],ECX
005bc839  LEA EDX,[EBP + -0x15]
005bc83c  MOV dword ptr [EBP + -0x14],EDX
005bc83f  PUSH 0x0
005bc841  MOV ECX,dword ptr [EBP + -0x74]
005bc844  CALL 0x005bef20
005bc849  MOV EAX,dword ptr [EBP + -0x78]
005bc84c  MOV dword ptr [EAX + 0x50],0x758d20
005bc853  MOV ECX,dword ptr [EBP + -0x78]
005bc856  MOV dword ptr [ECX + 0x54],0x0
005bc85d  MOV EDX,dword ptr [EBP + -0x78]
005bc860  MOV dword ptr [EDX + 0x6c],0x0
005bc867  MOV EAX,dword ptr [EBP + -0x78]
005bc86a  MOV dword ptr [EAX + 0x68],0x0
005bc871  MOV dword ptr [EBP + -0x4],0xffffffff
005bc878  MOV EAX,dword ptr [EBP + -0x78]
005bc87b  MOV ECX,dword ptr [EBP + -0xc]
005bc87e  MOV dword ptr FS:[0x0],ECX
005bc885  POP ECX
005bc886  MOV ESP,EBP
005bc888  POP EBP
005bc889  RET
