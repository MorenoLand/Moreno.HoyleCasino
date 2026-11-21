; FUN_004fd7e0  004fd7e0
004fd7e0  PUSH EBP
004fd7e1  MOV EBP,ESP
004fd7e3  PUSH -0x1
004fd7e5  PUSH 0x6a28db
004fd7ea  MOV EAX,FS:[0x0]
004fd7f0  PUSH EAX
004fd7f1  SUB ESP,0x10
004fd7f4  MOV EAX,[0x00781870]
004fd7f9  XOR EAX,EBP
004fd7fb  PUSH EAX
004fd7fc  LEA EAX,[EBP + -0xc]
004fd7ff  MOV FS:[0x0],EAX
004fd805  MOV dword ptr [EBP + -0x18],ECX
004fd808  PUSH 0xac
004fd80d  CALL 0x00686d82
004fd812  ADD ESP,0x4
004fd815  MOV dword ptr [EBP + -0x14],EAX
004fd818  MOV dword ptr [EBP + -0x4],0x0
004fd81f  CMP dword ptr [EBP + -0x14],0x0
004fd823  JZ 0x004fd832
004fd825  MOV ECX,dword ptr [EBP + -0x14]
004fd828  CALL 0x004f9b90
004fd82d  MOV dword ptr [EBP + -0x1c],EAX
004fd830  JMP 0x004fd839
004fd832  MOV dword ptr [EBP + -0x1c],0x0
004fd839  MOV EAX,dword ptr [EBP + -0x1c]
004fd83c  MOV dword ptr [EBP + -0x10],EAX
004fd83f  MOV dword ptr [EBP + -0x4],0xffffffff
004fd846  MOV EAX,dword ptr [EBP + -0x10]
004fd849  MOV ECX,dword ptr [EBP + -0xc]
004fd84c  MOV dword ptr FS:[0x0],ECX
004fd853  POP ECX
004fd854  MOV ESP,EBP
004fd856  POP EBP
004fd857  RET
