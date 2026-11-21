; FUN_0068b950  0068b950
0068b950  PUSH EBP
0068b951  MOV EBP,ESP
0068b953  PUSH -0x1
0068b955  PUSH 0x6ae033
0068b95a  MOV EAX,FS:[0x0]
0068b960  PUSH EAX
0068b961  SUB ESP,0x88
0068b967  MOV EAX,[0x00781870]
0068b96c  XOR EAX,EBP
0068b96e  PUSH EAX
0068b96f  LEA EAX,[EBP + -0xc]
0068b972  MOV FS:[0x0],EAX
0068b978  MOV dword ptr [EBP + 0xffffff74],ECX
0068b97e  MOV EAX,dword ptr [EBP + 0x8]
0068b981  PUSH EAX
0068b982  MOV ECX,dword ptr [EBP + 0xffffff74]
0068b988  CALL 0x0068dbf0
0068b98d  MOV dword ptr [EBP + -0x7c],EAX
0068b990  MOV dword ptr [EBP + -0x14],0x0
0068b997  MOV ECX,dword ptr [EBP + -0x7c]
0068b99a  MOV dword ptr [EBP + -0x10],ECX
0068b99d  CMP dword ptr [EBP + 0xffffff74],0x0
0068b9a4  JNZ 0x0068b9ac
0068b9a6  CALL dword ptr [0x006b2274]
0068b9ac  MOV EDX,dword ptr [EBP + 0xffffff74]
0068b9b2  MOV dword ptr [EBP + -0x14],EDX
0068b9b5  MOV EAX,dword ptr [EBP + 0xffffff74]
0068b9bb  MOV ECX,dword ptr [EAX + 0x4]
0068b9be  MOV dword ptr [EBP + -0x80],ECX
0068b9c1  MOV dword ptr [EBP + -0x1c],0x0
0068b9c8  MOV EDX,dword ptr [EBP + -0x80]
0068b9cb  MOV dword ptr [EBP + -0x18],EDX
0068b9ce  CMP dword ptr [EBP + 0xffffff74],0x0
0068b9d5  JNZ 0x0068b9dd
0068b9d7  CALL dword ptr [0x006b2274]
0068b9dd  MOV EAX,dword ptr [EBP + 0xffffff74]
0068b9e3  MOV dword ptr [EBP + -0x1c],EAX
0068b9e6  CMP dword ptr [EBP + -0x14],0x0
0068b9ea  JZ 0x0068b9f4
0068b9ec  MOV ECX,dword ptr [EBP + -0x14]
0068b9ef  CMP ECX,dword ptr [EBP + -0x1c]
0068b9f2  JZ 0x0068b9fa
0068b9f4  CALL dword ptr [0x006b2274]
0068b9fa  MOV EDX,dword ptr [EBP + -0x10]
0068b9fd  XOR EAX,EAX
0068b9ff  CMP EDX,dword ptr [EBP + -0x18]
0068ba02  SETZ AL
0068ba05  MOVZX ECX,AL
0068ba08  TEST ECX,ECX
0068ba0a  JNZ 0x0068ba37
0068ba0c  MOV EDX,dword ptr [EBP + -0x10]
0068ba0f  MOV dword ptr [EBP + 0xffffff7c],EDX
0068ba15  MOV EAX,dword ptr [EBP + 0xffffff7c]
0068ba1b  ADD EAX,0xc
0068ba1e  PUSH EAX
0068ba1f  MOV ECX,dword ptr [EBP + 0x8]
0068ba22  PUSH ECX
0068ba23  CALL dword ptr [0x006b20f0]
0068ba29  ADD ESP,0x8
0068ba2c  MOVZX EDX,AL
0068ba2f  TEST EDX,EDX
0068ba31  JZ 0x0068bade
0068ba37  LEA ECX,[EBP + -0x70]
0068ba3a  CALL dword ptr [0x006b210c]
0068ba40  MOV dword ptr [EBP + 0xffffff70],EAX
0068ba46  MOV EAX,dword ptr [EBP + 0xffffff70]
0068ba4c  MOV dword ptr [EBP + 0xffffff78],EAX
0068ba52  MOV dword ptr [EBP + -0x4],0x0
0068ba59  MOV ECX,dword ptr [EBP + 0x8]
0068ba5c  PUSH ECX
0068ba5d  LEA ECX,[EBP + -0x54]
0068ba60  CALL dword ptr [0x006b20f8]
0068ba66  MOV byte ptr [EBP + -0x4],0x1
0068ba6a  MOV EDX,dword ptr [EBP + 0xffffff78]
0068ba70  PUSH EDX
0068ba71  LEA ECX,[EBP + -0x38]
0068ba74  CALL dword ptr [0x006b20f8]
0068ba7a  MOV byte ptr [EBP + -0x4],0x0
0068ba7e  LEA EAX,[EBP + -0x54]
0068ba81  MOV dword ptr [EBP + 0xffffff6c],EAX
0068ba87  MOV byte ptr [EBP + -0x4],0x2
0068ba8b  MOV ECX,dword ptr [EBP + 0xffffff6c]
0068ba91  PUSH ECX
0068ba92  MOV EDX,dword ptr [EBP + -0x10]
0068ba95  PUSH EDX
0068ba96  MOV EAX,dword ptr [EBP + -0x14]
0068ba99  PUSH EAX
0068ba9a  LEA ECX,[EBP + -0x78]
0068ba9d  PUSH ECX
0068ba9e  MOV ECX,dword ptr [EBP + 0xffffff74]
0068baa4  CALL 0x0068c500
0068baa9  MOV EDX,dword ptr [EAX]
0068baab  MOV EAX,dword ptr [EAX + 0x4]
0068baae  MOV dword ptr [EBP + -0x14],EDX
0068bab1  MOV dword ptr [EBP + -0x10],EAX
0068bab4  MOV byte ptr [EBP + -0x4],0x3
0068bab8  LEA ECX,[EBP + -0x38]
0068babb  CALL dword ptr [0x006b20f4]
0068bac1  MOV byte ptr [EBP + -0x4],0x0
0068bac5  LEA ECX,[EBP + -0x54]
0068bac8  CALL dword ptr [0x006b20f4]
0068bace  MOV dword ptr [EBP + -0x4],0xffffffff
0068bad5  LEA ECX,[EBP + -0x70]
0068bad8  CALL dword ptr [0x006b20f4]
0068bade  CMP dword ptr [EBP + -0x14],0x0
0068bae2  JNZ 0x0068baea
0068bae4  CALL dword ptr [0x006b2274]
0068baea  MOV ECX,dword ptr [EBP + -0x14]
0068baed  MOV EDX,dword ptr [EBP + -0x10]
0068baf0  CMP EDX,dword ptr [ECX + 0x4]
0068baf3  JNZ 0x0068bafb
0068baf5  CALL dword ptr [0x006b2274]
0068bafb  MOV EAX,dword ptr [EBP + -0x10]
0068bafe  ADD EAX,0x28
0068bb01  MOV ECX,dword ptr [EBP + -0xc]
0068bb04  MOV dword ptr FS:[0x0],ECX
0068bb0b  POP ECX
0068bb0c  MOV ESP,EBP
0068bb0e  POP EBP
0068bb0f  RET 0x4
