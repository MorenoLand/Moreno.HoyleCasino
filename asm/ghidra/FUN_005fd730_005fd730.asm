; FUN_005fd730  005fd730
005fd730  PUSH EBP
005fd731  MOV EBP,ESP
005fd733  PUSH -0x1
005fd735  PUSH 0x6aa660
005fd73a  MOV EAX,FS:[0x0]
005fd740  PUSH EAX
005fd741  SUB ESP,0x10
005fd744  MOV EAX,[0x00781870]
005fd749  XOR EAX,EBP
005fd74b  PUSH EAX
005fd74c  LEA EAX,[EBP + -0xc]
005fd74f  MOV FS:[0x0],EAX
005fd755  MOV dword ptr [EBP + -0x18],ECX
005fd758  MOV EAX,dword ptr [EBP + -0x18]
005fd75b  CMP dword ptr [EAX + 0x200],0x0
005fd762  JNZ 0x005fd7ae
005fd764  PUSH 0x1d0
005fd769  CALL 0x00686d82
005fd76e  ADD ESP,0x4
005fd771  MOV dword ptr [EBP + -0x14],EAX
005fd774  MOV dword ptr [EBP + -0x4],0x0
005fd77b  CMP dword ptr [EBP + -0x14],0x0
005fd77f  JZ 0x005fd78e
005fd781  MOV ECX,dword ptr [EBP + -0x14]
005fd784  CALL 0x005ec5a0
005fd789  MOV dword ptr [EBP + -0x1c],EAX
005fd78c  JMP 0x005fd795
005fd78e  MOV dword ptr [EBP + -0x1c],0x0
005fd795  MOV ECX,dword ptr [EBP + -0x1c]
005fd798  MOV dword ptr [EBP + -0x10],ECX
005fd79b  MOV dword ptr [EBP + -0x4],0xffffffff
005fd7a2  MOV EDX,dword ptr [EBP + -0x18]
005fd7a5  MOV EAX,dword ptr [EBP + -0x10]
005fd7a8  MOV dword ptr [EDX + 0x200],EAX
005fd7ae  MOV ECX,dword ptr [EBP + -0x18]
005fd7b1  MOV EDX,dword ptr [ECX + 0x200]
005fd7b7  MOV EAX,dword ptr [EBP + -0x18]
005fd7ba  MOV ECX,dword ptr [EAX + 0x4]
005fd7bd  MOV dword ptr [EDX + 0x4],ECX
005fd7c0  PUSH -0x1
005fd7c2  PUSH 0x12
005fd7c4  MOV EDX,dword ptr [EBP + -0x18]
005fd7c7  MOV ECX,dword ptr [EDX + 0x190]
005fd7cd  CALL 0x005f53c0
005fd7d2  ADD EAX,0x1
005fd7d5  PUSH EAX
005fd7d6  MOV EAX,dword ptr [EBP + -0x18]
005fd7d9  MOV ECX,dword ptr [EAX + 0x190]
005fd7df  MOV EDX,dword ptr [EBP + -0x18]
005fd7e2  MOV EAX,dword ptr [EDX + 0x190]
005fd7e8  MOV EDX,dword ptr [ECX]
005fd7ea  MOV ECX,EAX
005fd7ec  MOV EAX,dword ptr [EDX + 0x54]
005fd7ef  CALL EAX
005fd7f1  PUSH EAX
005fd7f2  MOV ECX,dword ptr [EBP + -0x18]
005fd7f5  MOV EDX,dword ptr [ECX + 0x190]
005fd7fb  MOV EAX,dword ptr [EBP + -0x18]
005fd7fe  MOV ECX,dword ptr [EAX + 0x190]
005fd804  MOV EDX,dword ptr [EDX]
005fd806  MOV EAX,dword ptr [EDX + 0x4c]
005fd809  CALL EAX
005fd80b  PUSH EAX
005fd80c  MOV ECX,dword ptr [EBP + -0x18]
005fd80f  MOV ECX,dword ptr [ECX + 0x190]
005fd815  CALL 0x005f5590
005fd81a  PUSH EAX
005fd81b  MOV EDX,dword ptr [EBP + -0x18]
005fd81e  MOV ECX,dword ptr [EDX + 0x190]
005fd824  CALL 0x005f5550
005fd829  PUSH EAX
005fd82a  MOV EAX,[0x015e55e8]
005fd82f  MOV EDX,dword ptr [EAX]
005fd831  MOV ECX,dword ptr [0x015e55e8]
005fd837  MOV EAX,dword ptr [EDX + 0x54]
005fd83a  CALL EAX
005fd83c  PUSH EAX
005fd83d  MOV ECX,dword ptr [EBP + 0x8]
005fd840  PUSH ECX
005fd841  MOV EDX,dword ptr [EBP + -0x18]
005fd844  MOV ECX,dword ptr [EDX + 0x200]
005fd84a  CALL 0x005ec8f0
005fd84f  MOV ECX,dword ptr [EBP + -0xc]
005fd852  MOV dword ptr FS:[0x0],ECX
005fd859  POP ECX
005fd85a  MOV ESP,EBP
005fd85c  POP EBP
005fd85d  RET 0x4
