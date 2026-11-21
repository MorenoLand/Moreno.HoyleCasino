; FUN_005aa670  005aa670
005aa670  PUSH EBP
005aa671  MOV EBP,ESP
005aa673  PUSH -0x1
005aa675  PUSH 0x6a7b06
005aa67a  MOV EAX,FS:[0x0]
005aa680  PUSH EAX
005aa681  PUSH ECX
005aa682  MOV EAX,[0x00781870]
005aa687  XOR EAX,EBP
005aa689  PUSH EAX
005aa68a  LEA EAX,[EBP + -0xc]
005aa68d  MOV FS:[0x0],EAX
005aa693  MOV dword ptr [EBP + -0x10],ECX
005aa696  MOV EAX,dword ptr [EBP + 0xc]
005aa699  PUSH EAX
005aa69a  MOV ECX,dword ptr [EBP + -0x10]
005aa69d  CALL 0x005fc0d0
005aa6a2  MOV dword ptr [EBP + -0x4],0x0
005aa6a9  MOV ECX,dword ptr [EBP + -0x10]
005aa6ac  MOV dword ptr [ECX],0x6cfc90
005aa6b2  MOV EDX,dword ptr [EBP + -0x10]
005aa6b5  MOV AL,byte ptr [EBP + 0x8]
005aa6b8  MOV byte ptr [EDX + 0x20],AL
005aa6bb  MOVZX ECX,byte ptr [EBP + 0x8]
005aa6bf  TEST ECX,ECX
005aa6c1  JZ 0x005aa6ea
005aa6c3  PUSH 0x13a2
005aa6c8  MOV EDX,dword ptr [0x007935f8]
005aa6ce  MOV ECX,dword ptr [EDX + 0x3c]
005aa6d1  CALL 0x005eaf00
005aa6d6  PUSH 0x13a3
005aa6db  MOV EAX,[0x007935f8]
005aa6e0  MOV ECX,dword ptr [EAX + 0x40]
005aa6e3  CALL 0x005eaf00
005aa6e8  JMP 0x005aa710
005aa6ea  PUSH 0x13a4
005aa6ef  MOV ECX,dword ptr [0x007935f8]
005aa6f5  MOV ECX,dword ptr [ECX + 0x3c]
005aa6f8  CALL 0x005eaf00
005aa6fd  PUSH 0x13a5
005aa702  MOV EDX,dword ptr [0x007935f8]
005aa708  MOV ECX,dword ptr [EDX + 0x40]
005aa70b  CALL 0x005eaf00
005aa710  PUSH 0x0
005aa712  MOV EAX,[0x007935f8]
005aa717  MOV ECX,dword ptr [EAX + 0x3c]
005aa71a  MOV EDX,dword ptr [0x007935f8]
005aa720  MOV EAX,dword ptr [EDX + 0x3c]
005aa723  MOV EDX,dword ptr [ECX]
005aa725  MOV ECX,EAX
005aa727  MOV EAX,dword ptr [EDX + 0xb0]
005aa72d  CALL EAX
005aa72f  PUSH 0x0
005aa731  MOV ECX,dword ptr [0x007935f8]
005aa737  MOV EDX,dword ptr [ECX + 0x40]
005aa73a  MOV EAX,[0x007935f8]
005aa73f  MOV ECX,dword ptr [EAX + 0x40]
005aa742  MOV EDX,dword ptr [EDX]
005aa744  MOV EAX,dword ptr [EDX + 0xb0]
005aa74a  CALL EAX
005aa74c  MOV ECX,dword ptr [0x007935f8]
005aa752  MOV EDX,dword ptr [ECX + 0x3c]
005aa755  MOV EAX,[0x007935f8]
005aa75a  MOV ECX,dword ptr [EAX + 0x3c]
005aa75d  MOV EDX,dword ptr [EDX]
005aa75f  MOV EAX,dword ptr [EDX + 0x74]
005aa762  CALL EAX
005aa764  MOV ECX,dword ptr [0x007935f8]
005aa76a  MOV EDX,dword ptr [ECX + 0x40]
005aa76d  MOV EAX,[0x007935f8]
005aa772  MOV ECX,dword ptr [EAX + 0x40]
005aa775  MOV EDX,dword ptr [EDX]
005aa777  MOV EAX,dword ptr [EDX + 0x74]
005aa77a  CALL EAX
005aa77c  MOV dword ptr [EBP + -0x4],0xffffffff
005aa783  MOV EAX,dword ptr [EBP + -0x10]
005aa786  MOV ECX,dword ptr [EBP + -0xc]
005aa789  MOV dword ptr FS:[0x0],ECX
005aa790  POP ECX
005aa791  MOV ESP,EBP
005aa793  POP EBP
005aa794  RET 0x8
