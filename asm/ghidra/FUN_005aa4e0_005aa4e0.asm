; FUN_005aa4e0  005aa4e0
005aa4e0  PUSH EBP
005aa4e1  MOV EBP,ESP
005aa4e3  PUSH -0x1
005aa4e5  PUSH 0x6a7ae3
005aa4ea  MOV EAX,FS:[0x0]
005aa4f0  PUSH EAX
005aa4f1  SUB ESP,0x1c
005aa4f4  MOV EAX,[0x00781870]
005aa4f9  XOR EAX,EBP
005aa4fb  PUSH EAX
005aa4fc  LEA EAX,[EBP + -0xc]
005aa4ff  MOV FS:[0x0],EAX
005aa505  MOV dword ptr [EBP + -0x20],ECX
005aa508  MOV EAX,[0x007935f8]
005aa50d  CMP dword ptr [EAX + 0x40],0x0
005aa511  JZ 0x005aa5b1
005aa517  PUSH 0x13a3
005aa51c  MOV ECX,dword ptr [0x007935f8]
005aa522  MOV ECX,dword ptr [ECX + 0x40]
005aa525  CALL 0x005eaf00
005aa52a  PUSH 0x0
005aa52c  MOV EDX,dword ptr [0x007935f8]
005aa532  MOV EAX,dword ptr [EDX + 0x40]
005aa535  MOV ECX,dword ptr [0x007935f8]
005aa53b  MOV ECX,dword ptr [ECX + 0x40]
005aa53e  MOV EDX,dword ptr [EAX]
005aa540  MOV EAX,dword ptr [EDX + 0xb0]
005aa546  CALL EAX
005aa548  MOV ECX,dword ptr [0x007935f8]
005aa54e  MOV EDX,dword ptr [ECX + 0x40]
005aa551  MOV EAX,[0x007935f8]
005aa556  MOV ECX,dword ptr [EAX + 0x40]
005aa559  MOV EDX,dword ptr [EDX]
005aa55b  MOV EAX,dword ptr [EDX + 0x74]
005aa55e  CALL EAX
005aa560  PUSH 0x20
005aa562  CALL 0x00686d82
005aa567  ADD ESP,0x4
005aa56a  MOV dword ptr [EBP + -0x14],EAX
005aa56d  MOV dword ptr [EBP + -0x4],0x0
005aa574  CMP dword ptr [EBP + -0x14],0x0
005aa578  JZ 0x005aa58b
005aa57a  MOV ECX,dword ptr [EBP + 0x8]
005aa57d  PUSH ECX
005aa57e  MOV ECX,dword ptr [EBP + -0x14]
005aa581  CALL 0x006010a0
005aa586  MOV dword ptr [EBP + -0x24],EAX
005aa589  JMP 0x005aa592
005aa58b  MOV dword ptr [EBP + -0x24],0x0
005aa592  MOV EDX,dword ptr [EBP + -0x24]
005aa595  MOV dword ptr [EBP + -0x10],EDX
005aa598  MOV dword ptr [EBP + -0x4],0xffffffff
005aa59f  MOV EAX,dword ptr [EBP + -0x10]
005aa5a2  PUSH EAX
005aa5a3  MOV ECX,dword ptr [0x007935f8]
005aa5a9  MOV ECX,dword ptr [ECX + 0x40]
005aa5ac  CALL 0x005f5d50
005aa5b1  MOV EDX,dword ptr [0x007935f8]
005aa5b7  CMP dword ptr [EDX + 0x3c],0x0
005aa5bb  JZ 0x005aa656
005aa5c1  PUSH 0x13a2
005aa5c6  MOV EAX,[0x007935f8]
005aa5cb  MOV ECX,dword ptr [EAX + 0x3c]
005aa5ce  CALL 0x005eaf00
005aa5d3  PUSH 0x0
005aa5d5  MOV ECX,dword ptr [0x007935f8]
005aa5db  MOV EDX,dword ptr [ECX + 0x3c]
005aa5de  MOV EAX,[0x007935f8]
005aa5e3  MOV ECX,dword ptr [EAX + 0x3c]
005aa5e6  MOV EDX,dword ptr [EDX]
005aa5e8  MOV EAX,dword ptr [EDX + 0xb0]
005aa5ee  CALL EAX
005aa5f0  MOV ECX,dword ptr [0x007935f8]
005aa5f6  MOV EDX,dword ptr [ECX + 0x3c]
005aa5f9  MOV EAX,[0x007935f8]
005aa5fe  MOV ECX,dword ptr [EAX + 0x3c]
005aa601  MOV EDX,dword ptr [EDX]
005aa603  MOV EAX,dword ptr [EDX + 0x74]
005aa606  CALL EAX
005aa608  PUSH 0x20
005aa60a  CALL 0x00686d82
005aa60f  ADD ESP,0x4
005aa612  MOV dword ptr [EBP + -0x1c],EAX
005aa615  MOV dword ptr [EBP + -0x4],0x1
005aa61c  CMP dword ptr [EBP + -0x1c],0x0
005aa620  JZ 0x005aa631
005aa622  PUSH 0x0
005aa624  MOV ECX,dword ptr [EBP + -0x1c]
005aa627  CALL 0x006010a0
005aa62c  MOV dword ptr [EBP + -0x28],EAX
005aa62f  JMP 0x005aa638
005aa631  MOV dword ptr [EBP + -0x28],0x0
005aa638  MOV ECX,dword ptr [EBP + -0x28]
005aa63b  MOV dword ptr [EBP + -0x18],ECX
005aa63e  MOV dword ptr [EBP + -0x4],0xffffffff
005aa645  MOV EDX,dword ptr [EBP + -0x18]
005aa648  PUSH EDX
005aa649  MOV EAX,[0x007935f8]
005aa64e  MOV ECX,dword ptr [EAX + 0x3c]
005aa651  CALL 0x005f5d50
005aa656  MOV ECX,dword ptr [EBP + -0xc]
005aa659  MOV dword ptr FS:[0x0],ECX
005aa660  POP ECX
005aa661  MOV ESP,EBP
005aa663  POP EBP
005aa664  RET 0x4
