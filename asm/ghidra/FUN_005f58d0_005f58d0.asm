; FUN_005f58d0  005f58d0
005f58d0  PUSH EBP
005f58d1  MOV EBP,ESP
005f58d3  SUB ESP,0x24
005f58d6  MOV dword ptr [EBP + -0x24],ECX
005f58d9  MOV EAX,dword ptr [EBP + -0x24]
005f58dc  MOV ECX,dword ptr [EBP + -0x24]
005f58df  MOV EDX,dword ptr [EAX + 0x1c]
005f58e2  SUB EDX,dword ptr [ECX + 0x14]
005f58e5  MOV EAX,dword ptr [EBP + -0x24]
005f58e8  ADD EDX,dword ptr [EAX + 0x14]
005f58eb  MOV dword ptr [EBP + -0x20],EDX
005f58ee  MOV ECX,dword ptr [EBP + -0x24]
005f58f1  MOV EDX,dword ptr [EBP + -0x24]
005f58f4  MOV EAX,dword ptr [ECX + 0x18]
005f58f7  SUB EAX,dword ptr [EDX + 0x10]
005f58fa  MOV ECX,dword ptr [EBP + -0x24]
005f58fd  ADD EAX,dword ptr [ECX + 0x10]
005f5900  MOV dword ptr [EBP + -0x1c],EAX
005f5903  MOV EDX,dword ptr [EBP + -0x24]
005f5906  MOV EAX,dword ptr [EDX + 0x14]
005f5909  MOV dword ptr [EBP + -0x18],EAX
005f590c  MOV ECX,dword ptr [EBP + -0x24]
005f590f  MOV EDX,dword ptr [ECX + 0x10]
005f5912  MOV dword ptr [EBP + -0x14],EDX
005f5915  MOV EAX,dword ptr [EBP + -0x14]
005f5918  MOV dword ptr [EBP + -0x10],EAX
005f591b  MOV ECX,dword ptr [EBP + -0x18]
005f591e  MOV dword ptr [EBP + -0xc],ECX
005f5921  MOV EDX,dword ptr [EBP + -0x1c]
005f5924  MOV dword ptr [EBP + -0x8],EDX
005f5927  MOV EAX,dword ptr [EBP + -0x20]
005f592a  MOV dword ptr [EBP + -0x4],EAX
005f592d  LEA ECX,[EBP + -0x10]
005f5930  PUSH ECX
005f5931  MOV ECX,dword ptr [EBP + -0x24]
005f5934  CALL 0x005f5940
005f5939  MOV ESP,EBP
005f593b  POP EBP
005f593c  RET
