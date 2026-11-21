; FUN_005f5010  005f5010
005f5010  PUSH EBP
005f5011  MOV EBP,ESP
005f5013  SUB ESP,0x24
005f5016  MOV dword ptr [EBP + -0x24],ECX
005f5019  MOV EAX,dword ptr [EBP + -0x24]
005f501c  CMP dword ptr [EAX + 0x4],0x0
005f5020  JNZ 0x005f5031
005f5022  MOV ECX,dword ptr [EBP + -0x24]
005f5025  MOV EDX,dword ptr [0x015e55e8]
005f502b  MOV EAX,dword ptr [EDX + 0x14]
005f502e  MOV dword ptr [ECX + 0x4],EAX
005f5031  MOV ECX,dword ptr [EBP + -0x24]
005f5034  CMP dword ptr [ECX + 0x4],0x0
005f5038  JZ 0x005f50ae
005f503a  MOV EDX,dword ptr [EBP + -0x24]
005f503d  PUSH EDX
005f503e  MOV EAX,dword ptr [EBP + -0x24]
005f5041  MOV ECX,dword ptr [EAX + 0x4]
005f5044  CALL 0x005f8ba0
005f5049  MOV ECX,dword ptr [EBP + -0x24]
005f504c  CALL 0x005f54a0
005f5051  MOVZX ECX,AL
005f5054  TEST ECX,ECX
005f5056  JZ 0x005f50a0
005f5058  MOV EDX,dword ptr [EBP + -0x24]
005f505b  MOV EAX,dword ptr [EDX + 0x1c]
005f505e  MOV dword ptr [EBP + -0x20],EAX
005f5061  MOV ECX,dword ptr [EBP + -0x24]
005f5064  MOV EDX,dword ptr [ECX + 0x18]
005f5067  MOV dword ptr [EBP + -0x1c],EDX
005f506a  MOV EAX,dword ptr [EBP + -0x24]
005f506d  MOV ECX,dword ptr [EAX + 0x14]
005f5070  MOV dword ptr [EBP + -0x18],ECX
005f5073  MOV EDX,dword ptr [EBP + -0x24]
005f5076  MOV EAX,dword ptr [EDX + 0x10]
005f5079  MOV dword ptr [EBP + -0x14],EAX
005f507c  MOV ECX,dword ptr [EBP + -0x14]
005f507f  MOV dword ptr [EBP + -0x10],ECX
005f5082  MOV EDX,dword ptr [EBP + -0x18]
005f5085  MOV dword ptr [EBP + -0xc],EDX
005f5088  MOV EAX,dword ptr [EBP + -0x1c]
005f508b  MOV dword ptr [EBP + -0x8],EAX
005f508e  MOV ECX,dword ptr [EBP + -0x20]
005f5091  MOV dword ptr [EBP + -0x4],ECX
005f5094  LEA EDX,[EBP + -0x10]
005f5097  PUSH EDX
005f5098  MOV ECX,dword ptr [EBP + -0x24]
005f509b  CALL 0x005f5940
005f50a0  MOV EAX,dword ptr [EBP + -0x24]
005f50a3  PUSH EAX
005f50a4  MOV ECX,0x795098
005f50a9  CALL 0x0060c890
005f50ae  MOV ECX,dword ptr [EBP + -0x24]
005f50b1  MOV dword ptr [ECX + 0x28],0x1
005f50b8  MOV ESP,EBP
005f50ba  POP EBP
005f50bb  RET
